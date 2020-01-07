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

template <class P,class S>
class CacheManager {
    virtual

virtual bool isExist(P* problem) = 0; // What is the parameter???? @@@@@@@@@@@@@@@@@@@@@@@@@@
virtual S returnSolution(P* problem) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@
virtual bool saveSolution(P* problem, S* solution) = 0; // What is the return type and param?????? @@@@@@@@@@@@@@@@@@@@@@@@@@
};

/*

class CacheManager {




    @@

};
*/


#endif //APMS2_CACHEMANAGER_H

