
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


#include <FileCacheManager.h>
#include <MatrixHandler.h>
#include <ParallelServer.h>
#include <mtxSolver.h>
#include "Boot.h"

using namespace std;
using namespace server_side;

int main(int argc, char** argv){
  boot::Main mainInstance;
  mainInstance.mainFunc(argc,argv);
  return 0;
}
