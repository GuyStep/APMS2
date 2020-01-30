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

    static void *handler_thread(void *arg);
protected:
    vector<pthread_t> threads_vector;
    bool server_stop = false;


    static void *server_thread(void *arg) ;
    virtual void serv_instance(int socket, bool *stop, ClientHandler *client);

public:
	void stop() override;

	void open(int port, ClientHandler *c) override;
};

typedef struct {
    int socket;
    ClientHandler *client;
} ClientHandlerObject;


typedef struct {
    ParallelServer* server;
    int port;
    bool *stop_server;
    ClientHandler *client;
} ServerObject;




#endif //APMS2_PARALLELSERVER_H
