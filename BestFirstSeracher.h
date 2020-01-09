//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__BESTFIRSTSERACHER_H_
#define APMS2__BESTFIRSTSERACHER_H_
#include "Searcher.h"
#include "State.h"
#include "QueuePriority.h"
#include "Searchable.h"
#include "AlgoQueue.h"
using namespace std;
template <class T>
class BestFirstSeracher : Searcher<T>{
 private:
   AlgoQueue<T> openQ;
 public:
  vector<State<T>*> search(Searchable<T>* searchable) {
    State<T>* curState;
    State<T>* start = searchable->getStartPoint();
    State<T>* goal = searchable->getGoalPoint();
    openQ.push(start);
    this->initSolutionSize();
    while(!openQ.empty()) {
      this->increaseSolutionSize();
      curState = openQ.pop();
      if(*curState == *goal) {
        vector<State<T>*> path = this->backTrace(start,curState);
        this->deleteRedundency(path,this);
      }
    }
  }
};

#endif //APMS2__BESTFIRSTSERACHER_H_
