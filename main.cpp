//
// Created by amittulman on 08/01/2020.
//
#include "MySerialServer.h";
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
#include "mtxSolver.h"
#include "MatrixHandler.h"

using namespace std;
using namespace server_side;

int main(int argc, char** argv){
  auto *fcm = new FileCacheManager();
  auto *solver = new mtxSolver();
  auto* ch = new MatrixHandler(solver,fcm);
  auto* server = new MySerialServer(ch);
  server->open(5600,ch);
  return 0;
/*  auto *fcm = new FileCacheManager();
  auto *solver = new StringReverser();
  auto* ch = new MyTestClientHandler(solver,fcm);
  auto* server = new MySerialServer(ch);
  server->open(8090,ch);
  return 0;*/
}