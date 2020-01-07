//
// Created by guy on 07/01/2020.
//

#include "MyTestClientHandler.h"

using namespace std;
template<class P, class S>
void MyTestClientHandler<P,S>::handleClient(std::istream is, std::ostream os)  {
  P p;
  S s;
  bool exist = this->cache_manager.isExist(p);
  if (exist) {
        s = this->cache_manager.returnSolution(p);
        return s;
  }
  else{
        s = this->solver.solve(p);
        this->cache_manager.saveSolution(p,s);
        return s;
  }
}