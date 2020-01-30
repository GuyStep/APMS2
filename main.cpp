
//
// Created by amittulman on 08/01/2020.
//

#include "Boot.h"

using namespace std;
using namespace server_side;

int main(int argc, char** argv){
  boot::Main mainInstance;
	mainInstance.main_func(argc, argv);
  return 0;
}
