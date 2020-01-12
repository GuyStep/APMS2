//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_MYSERIALSERVER_H
#define APMS2_MYSERIALSERVER_H

#include "server_file.h"
#include "ClientHandler.h"
#include "MyTestClientHandler.h"
#include <sys/socket.h>
#include <iostream>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <vector>
#include <thread>

using namespace std;

class MySerialServer : public server_side::Server {
 private:
  ClientHandler *handler;
 public:
    MySerialServer(ClientHandler* ch){
        this->handler = ch;
    }

    void open(int port, ClientHandler* ch) override;
    void stop() override;
};
void start(int serverSocket,sockaddr_in address, ClientHandler* ch);

#endif //APMS2_MYSERIALSERVER_H
