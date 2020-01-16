//
// Created by guy on 15/01/2020.
//

#ifndef APMS2_PARALLELSERVER_H
#define APMS2_PARALLELSERVER_H


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



class ParallelServer : public server_side::Server {

    static void *thread_CallClientHandler(void *arg);
protected:
    vector<pthread_t> trids;
    bool shouldStop = false;

    void stop() override;

    static void *thread_OpenDataServer(void *arg) ;
    virtual void unique(int socket, bool *shouldStop, ClientHandler *client);

public:
    void open(int port, ClientHandler *c) override;
};

typedef struct {
    int socket;
    ClientHandler *client;
} CallClientHandlerData;


typedef struct {
    ParallelServer* server;
    int port;
    bool *shouldStop;
    ClientHandler *client;
} TCPDataServer;




#endif //APMS2_PARALLELSERVER_H
