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
  virtual bool isExist(string problem) = 0;
  virtual string returnSolution(string problem) = 0;
  virtual void saveSolution(string problem, string solution) = 0;

};

#endif //APMS2_CACHEMANAGER_H

