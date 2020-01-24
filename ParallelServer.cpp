
#include "ParallelServer.h"
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <strings.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void *ParallelServer::handler_thread(void *arg) {
    ClientHandlerObject *callClientHandlerData = (ClientHandlerObject *) arg;
    callClientHandlerData->client->handleClient(callClientHandlerData->socket);
    return nullptr;
}

void ParallelServer::unique(int socket, bool *shouldStop, ClientHandler *client) {
    int socketFd = socket;
    int newsockfd;
    int clilen;

    vector<pthread_t> threads_vector;

    struct sockaddr_in serv_addr, cli_addr;
    listen(socketFd, 10);

    clilen = sizeof(cli_addr);

    while (true) {
        newsockfd = accept(socketFd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);
        if (newsockfd < 0) {
            if (*shouldStop) {
                break;
            }
            if (errno == EWOULDBLOCK) {
                continue;
            }
            perror("Failed accepting client");
            exit(1);
        }
        ClientHandlerObject *callClientHandlerData;
        callClientHandlerData = new ClientHandlerObject();

        callClientHandlerData->socket = newsockfd;
        callClientHandlerData->client = client;
        pthread_t single_thread;
		pthread_create(&single_thread, nullptr, handler_thread, callClientHandlerData);
        threads_vector.push_back(single_thread);

        timeval timeout;
        timeout.tv_sec = 15;
        timeout.tv_usec = 0;
        setsockopt(socketFd, SOL_SOCKET, SO_RCVTIMEO, (char *) &timeout, sizeof(timeout));
    }

    for (int i = 0; i < threads_vector.size(); i++) {
        pthread_join(threads_vector[i], nullptr);
    }
}

void ParallelServer::open(int port, ClientHandler *c)  {
    ServerObject *params;
    params = new ServerObject();
    params->server = this;
    params->port = port;
    params->client = c;
    params->stop_server = &server_stop;
    pthread_t single_thread;
	pthread_create(&single_thread, nullptr, server_thread, params);
    pthread_join(single_thread, nullptr);
    threads_vector.push_back(single_thread);
}

void ParallelServer::stop() {
	server_stop = true;
	int number_of_threads = threads_vector.size();
    for (int i = 0; i < number_of_threads; i++) {
        pthread_join(threads_vector[i], nullptr);
    }
}

void *ParallelServer::server_thread(void *arg) {
    ServerObject *server = (ServerObject *) arg;
    int socketFd;


    struct sockaddr_in serv_addr, cli_addr;

    socketFd = socket(AF_INET, SOCK_STREAM, 0);
    if (socketFd < 0) {
        perror("Failed opening socket");
        exit(1);
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(server->port);

    if (bind(socketFd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("Failed binding socket");
        exit(1);
    }

    server->server->unique(socketFd, server->stop_server, server->client );

    close(socketFd);
    delete (server->client);
    delete (server);
    return nullptr;
}