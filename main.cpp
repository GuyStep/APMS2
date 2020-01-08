//
// Created by amittulman on 08/01/2020.
//
#include "MySerialServer.h";
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"

int main(int argc, char** argv){
  auto *fcm = new FileCacheManager<string, string>();
  auto *solver = new StringReverser<string ,string>();
  auto* ch = new MyTestClientHandler<class P,class S>(solver,fcm);
  //MySerialServer* server = new MySerialServer(ch);
  return 0;
}