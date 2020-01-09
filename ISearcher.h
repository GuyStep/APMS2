//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__ISEARCHER_H_
#define APMS2__ISEARCHER_H_

#include "Searchable.h"
template <class P,class S>
class ISearcher {
 public:
  virtual S search(Searchable<P>* searchable) =0;
  int solutionSize = 0;
  void increaseSolutionSize(){
    this->solutionSize++;
  }
  int getSolutionSize(){
    return this->solutionSize;
  }
  void initSolutionSize() {
    this->solutionSize = 0;
  }
};

#endif //APMS2__ISEARCHER_H_
