
#include "ParallelServer.h"
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void *ParallelServer::thread_CallClientHandler(void *arg) {
    CallClientHandlerData *callClientHandlerData = (CallClientHandlerData *) arg;
    callClientHandlerData->client->handleClient(callClientHandlerData->socket);
    //delete (callClientHandlerData);
    return nullptr;
}

void ParallelServer::unique(int socket, bool *shouldStop, ClientHandler *client) {

    int socketFd = socket;
    int newsockfd; // new socket fileDescriptor
    int clilen;

    vector<pthread_t> trids;

    struct sockaddr_in serv_addr, cli_addr;

    //start listening for the clients using the main socket
    listen(socketFd, SOMAXCONN);

    clilen = sizeof(cli_addr);

    while (true) {

        //accept actual connection from the client

        newsockfd = accept(socketFd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);

        //if connections with the client failed
        if (newsockfd < 0) {
            if (*shouldStop) {
                break;
            }
            if (errno == EWOULDBLOCK) {
                continue;
            }
            perror("ERROR on accept");
            exit(1);
        }
        CallClientHandlerData *callClientHandlerData;
        callClientHandlerData = new CallClientHandlerData();

        callClientHandlerData->socket = newsockfd;
        callClientHandlerData->client = client;
        pthread_t trid;
        pthread_create(&trid, nullptr, thread_CallClientHandler, callClientHandlerData);
        trids.push_back(trid);

        timeval timeout;
        timeout.tv_sec = 15;
        timeout.tv_usec = 0;
        setsockopt(socketFd, SOL_SOCKET, SO_RCVTIMEO, (char *) &timeout, sizeof(timeout));
    }


    for (int i = 0; i < trids.size(); i++) {
        pthread_join(trids[i], nullptr);
    }
}

void ParallelServer::open(int port, ClientHandler *c)  {
    TCPDataServer *params;
    params = new TCPDataServer();
    params->server = this;
    params->port = port;
    params->client = c;
    params->shouldStop = &shouldStop;
    pthread_t trid;
    pthread_create(&trid, nullptr, thread_OpenDataServer, params);
    pthread_join(trid, nullptr);
    trids.push_back(trid);
}

void ParallelServer::stop() {
    shouldStop = true;
    for (int i = 0; i < trids.size(); i++) {
        pthread_join(trids[i], nullptr);
    }
}

void *ParallelServer::thread_OpenDataServer(void *arg) {
    TCPDataServer *params = (TCPDataServer *) arg;

    int socketFd; // main socket fileDescriptor


    struct sockaddr_in serv_addr, cli_addr;

    //creating socket object
    socketFd = socket(AF_INET, SOCK_STREAM, 0);
    //if creation faild
    if (socketFd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    //Initialize socket structure
    bzero((char *) &serv_addr, sizeof(serv_addr));

    serv_addr.sin_family = AF_INET; // tcp server
    serv_addr.sin_addr.s_addr = INADDR_ANY; //server ip (0.0.0.0 for all incoming connections)
    serv_addr.sin_port = htons(params->port); //init server port

    //bind the host address using bind() call
    if (bind(socketFd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        //if binding faild
        perror("ERROR on binding");
        exit(1);
    }


    params->server->unique(socketFd,params->shouldStop,params->client );

    close(socketFd);
    delete (params->client);
    delete (params);
    return nullptr;
}