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
void MatrixHandler::handleClient(int sock) {
  vector<vector<double>> mtx;
  string question = "";
  string solution;
  string line ="";
  bool endFlag = true;
  //reading from client
  while (endFlag) {
    char buffer[2048] = {0};
    int valread = read(sock, buffer, 2048);
    if (valread > 0) {
      for (int i = 0; i < valread; i++) {
        line += buffer[i];
        if (line.length() > 0) { //question != ""
          int findEnd = line.find("end");
          if (findEnd >= 0) { //line from client = "end"
            if(findEnd > 0) { //36.36end
              string sub = line.substr(0,findEnd);
              mtx.push_back(split(sub));
              question += sub + "\n";
            }
            endFlag = false;
            break;
          }
        }
      }
      if (endFlag) {
        mtx.push_back(split(line));
        question += line + "\n";
        line = "";
      }

    } else { //no bytes read
      close(sock);
      return;
    }
  }
    //--------------valid mtx?? ---------------------------

    if (this->cache->isExist(question)) { //exists in the cache
      solution = this->cache->returnSolution(question);
    } else {
      solution = this->solver->solve(mtx);
      this->cache->saveSolution(question, solution);
    }
    solution = solution + '\n';
    int is_sent = send(sock, solution.c_str(), solution.length(), 0);
    if (is_sent < 0) {
      std::cout << "Error sending solution" << std::endl;
    }
    solution = "";
    question = "";
    close(sock);
  }

vector<double> MatrixHandler::split(string row) {
  vector<double> result;
  stringstream ss(row);
  while(ss.good())
  {
    string substr;
    getline( ss, substr, ',' );
    cout<<substr<<endl;
    result.push_back(stod(substr));
  }
  return result;
}
