//
// Created by amittulman on 08/01/2020.
//
#include "MySerialServer.h";
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
using namespace std;

int main(int argc, char** argv){
  auto *fcm = new FileCacheManager();
  auto *solver = new StringReverser();
  auto* ch = new MyTestClientHandler(solver,fcm);
  auto* server = new MySerialServer(ch);
  server->open(8090,ch);
  return 0;
}