//
// Created by amittulman on 10/01/2020.
//

#ifndef APMS2__MATRIXHANDLER_H_
#define APMS2__MATRIXHANDLER_H_

#include "ClientHandler.h"
#include "Solver.h"
#include "CacheManager.h"
#include "vector"


using namespace std;
class MatrixHandler : public ClientHandler{
 private:
  Solver<string,vector<vector<double>>>* solver;
  CacheManager* cache;
 public:
  MatrixHandler(Solver<string, vector<vector<double>>> *solver, CacheManager *cache) {
    this->solver = solver;
    this->cache = cache;
  }
  void handleClient(int sock) override;
  vector<double> split(string row);
};

#endif //APMS2__MATRIXHANDLER_H_
