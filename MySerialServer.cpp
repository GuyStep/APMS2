//
// Created by guy on 07/01/2020.
//

#include "MySerialServer.h"

void MySerialServer::open(int port, ClientHandler* handler) {
  this->handler = handler;
  int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
  if (serverSocket == -1) {
    //error
    std::cerr << "SERVER :Could not create a socket" << std::endl;
    return;
  }

  //bind socket to IP address
  // we first need to create the sockaddr obj.
  sockaddr_in address; //in means IP4
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY; //give me any IP allocated for my machine
  address.sin_port = htons(port);
  //we need to convert our number
  // to a number that the network understands.

  //the actual bind command
  if (bind(serverSocket, (struct sockaddr *) &address, sizeof(address)) == -1) {
    std::cerr << "SERVER :Could not bind the socket to an IP" << std::endl;
    return;
  }

  //making socket listen to the port
  if (listen(serverSocket, 5) == -1) { //can also set to SOMAXCON (max connections)
    std::cerr << "SERVER :Error during listening command" << std::endl;
    return;
  } else {
    std::cout << "SERVER :Server is now listening ..." << std::endl;
  }

  // accepting a client

  thread t1(start, serverSocket, address, handler);

}

void MySerialServer::stop(){
}

void start(int serverSocket,sockaddr_in address,ClientHandler* handler) {
  while (1) {
    char buffer[2048] = {0};
    socklen_t addrlen = sizeof(sockaddr_in);
    int clientSocket = accept(serverSocket, (struct sockaddr *) &address,
                              &addrlen);

    if (clientSocket == -1) {
      std::cerr << "SERVER : Error accepting client" << std::endl;
      return;
    }

  }
}