//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_CACHEMANAGER_H
#define APMS2_CACHEMANAGER_H


#include <iostream>
#include <unordered_map>
#include <iterator>
#include <list>
#include <functional>
#include <fstream>
using namespace std;


class CacheManager {
 public:
  virtual bool isExist(string problem) = 0; // What is the parameter???? @@@@@@@@@@@@@@@@@@@@@@@@@@
  virtual string returnSolution(string problem) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@
  virtual void saveSolution(string problem, string solution) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@@@

/*virtual bool isExist(P* problem) = 0; // What is the parameter???? @@@@@@@@@@@@@@@@@@@@@@@@@@
virtual S returnSolution(P* problem) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@
virtual void saveSolution(P* problem, S* solution) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@@@*/
};

/*

class CacheManager {




    @@

};
*/


#endif //APMS2_CACHEMANAGER_H

