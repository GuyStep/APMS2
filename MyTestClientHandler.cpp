//
// Created by guy on 07/01/2020.
//

#include "MyTestClientHandler.h"
#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include "FileCacheManager.h"

using namespace std;
void MyTestClientHandler::handleClient(int socket)  {
  string question = "";
  string solution;
  //reading from client
  while(1) {
    char buffer[2048] = {0};
    int valread = read(socket, buffer, 2048);
    if (valread > 0 ) {
      for (int i =0 ; i < valread ; i++) {
        if ((buffer[i] != '\n') && (buffer[i] != '\r')) {
          question += buffer[i];
          } else { //buffer[i] == \n
           if (buffer[i] == '\r') {
            i++;
          }

          if (question.length() > 0) { //question != ""
            if (question.find("end") == 0 ) { //line from client = "end"
              close(socket);
              return;
            }
            if (this->cache_manager->isExist(question)) { //exists in the cache
              solution = this->cache_manager->returnSolution(question);
            } else {
              solution = this->solver->solve(question);
              this->cache_manager->saveSolution(question,solution);
            }
            int is_sent = send(socket, (solution + '\n').c_str(), solution.length() + 1, 0);
            if (is_sent < 0) {
              std::cout << "Error sending solution" << std::endl;
            }
            solution = "";
            question = "";
          }
        }
      }

    } else { //no bytes read
      continue;
    }
  }

}