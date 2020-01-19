
//
// Created by amittulman on 08/01/2020.
//
#include "MySerialServer.h";
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "mtxSolver.h"
#include "MatrixHandler.h"
#include "ParallelServer.h"

using namespace std;
using namespace server_side;

int main(int argc, char** argv){
//new BestFirstSeracher<T >();
//new Bfs<T>();
//new Dfs<T>();
//new AStar<T>();
  auto *fcm = new FileCacheManager();
  auto *solver = new mtxSolver(new BestFirstSeracher<T >());
  auto* ch = new MatrixHandler(solver,fcm);
  auto* server = new ParallelServer();
  //auto* server = new MySerialServer(ch);
  server->open(5600,ch);
/*  while(true)
      int i;*/

/*  return 0;
  auto *fcm = new FileCacheManager();
  auto *solver = new StringReverser();
  auto* ch = new MyTestClientHandler(solver,fcm);
  auto* server = new MySerialServer(ch);
  server->open(8090,ch);
  return 0;*/

}
