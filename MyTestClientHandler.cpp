//
// Created by guy on 07/01/2020.
//

#include "MyTestClientHandler.h"
#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>

using namespace std;
void MyTestClientHandler::handleClient(int socket)  {
  string question;
  string solution;
  //reading from client
  while(1) {
    char buffer[2048] = {0};
    int valread = read(socket, buffer, 2048);

  }

/*  bool exist = this->cache_manager.isExist(p);
  if (exist) {
        s = this->cache_manager.returnSolution(p);
        return s;
  }
  else{
        s = this->solver.solve(p);
        this->cache_manager.saveSolution(p,s);
        return s;
  }*/
}