//
// Created by amittulman on 10/01/2020.
//
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>
#include "MatrixHandler.h"
#include "CacheManager.h"
#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
MatrixHandler::MatrixHandler(Solver<string, vector<vector<double>>> *solver, CacheManager *cache)
    : solver(solver), cache(cache) {}
void MatrixHandler::handleClient(int sock) {
  vector<vector<double>> mtx;
  string question = "";
  string solution;
  string line ="";
  //reading from client
  while (1) {
    char buffer[2048] = {0};
    int valread = read(sock, buffer, 2048);
    if (valread > 0) {
      for (int i = 0; i < valread; i++) {
        if ((buffer[i] != '\n') && (buffer[i] != '\r')) {
          question += buffer[i];
        } else { //buffer[i] == \n
          if (buffer[i] == '\r') {
            i++;
          }
          if (question.length() > 0) { //question != ""
            if (question.find("end") == 0) { //line from client = "end"
              close(sock);
              return;
            }
            mtx.push_back(split(line));
            question += line + "\n";
            line = "";

          }
        }
      }
    } else { //no bytes read
      close(sock);
      return;
    }

    //--------------valid mtx?? ---------------------------

    if (this->cache->isExist(question)) { //exists in the cache
      solution = this->cache->returnSolution(question);
    } else {
      solution = this->solver->solve(question);
      this->cache->saveSolution(question, solution);
    }
    int is_sent = send(socket, (solution+'\n').c_str(), solution.length()+1, 0);
    if (is_sent < 0) {
      std::cout << "Error sending solution" << std::endl;
    }
    solution = "";
    question = "";
    close(sock);
  }
}
vector<double> MatrixHandler::split(string row) {
  vector<double> result;
  stringstream ss(row);
  while(ss.good())
  {
    string substr;
    getline( ss, substr, ',' );
    result.push_back(stod(substr));
  }
  return result;
}
