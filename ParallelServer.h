/*
//
// Created by amittulman on 15/01/2020.
//

#ifndef APMS2__PARALLELSERVER_H_
#define APMS2__PARALLELSERVER_H_
#include "server_file.h"

class ParallelServer;

struct CliThreadParams {
    server_side::TCP_client clientSock;
    server_side::ClientHandler *handler;
  ParallelServer *server;
  };

  struct ThreadParams {
    ParallelServer *_server;
    server_side::ClientHandler *_clientHandler;
  };


  class ParallelServer : public Server {

    std::vector<pthread_t> _clientThreads;
    mutex lock;

    void CloseAll();

    void AddClient(CliThreadParams *cliParams);

   public:
    MyParallelServer() = default;

    static void *Start(void *args);

    static void *DoClient(void *args);

    pthread_t open(int port, server_side::ClientHandler *c) override;

    void close() override;

    void UpdateThreadVector(pthread_t pthread, int operation = ADD);




};

#endif //APMS2__PARALLELSERVER_H_
*/
