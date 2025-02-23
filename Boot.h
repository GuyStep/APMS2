//
// Created by amittulman on 19/01/2020.
//

#ifndef APMS2__BOOT_H_
#define APMS2__BOOT_H_

#include "MySerialServer.h"
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "mtxSolver.h"
#include "MatrixHandler.h"
#include "ParallelServer.h"
#include "Boot.h"
#include "FileCacheManager.h"
#include "MatrixHandler.h"
#include "ParallelServer.h"
#include "mtxSolver.h"

namespace boot {
class Main {
 public:
    //Main function, ran by user
    int main_func(int argc, char** argv) {
    auto *fcm = new FileCacheManager();
    auto *solver = new server_side::mtxSolver(new AStar<T >());
    auto* ch = new MatrixHandler(solver,fcm);
    auto* server = new ParallelServer();
    //Open the server, with port received as argument
    server->open(atoi(argv[1]),ch);
	server->stop();
	return 0;
  }
};
}

#endif //APMS2__BOOT_H_
