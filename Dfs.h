//
// Created by amittulman on 13/01/2020.
//

#ifndef APMS2__DFS_H_
#define APMS2__DFS_H_

#include "Searcher.h"
#include "State.h"
#include "Searchable.h"
#include "AlgoStack.h"

#include <stack>

using namespace std;
template<class T>
class Dfs : public Searcher<T> {
 private:
  AlgoStack<T> stack;
 public:
  vector<State<T>*> search(Searchable<T> *searchable) {
    State<T> *start = searchable->getStartPoint();
    State<T> *end = searchable->getGoalPoint();
    State<T> *curState;
    stack.push(start);
    this->initSolutionSize();
    while (!stack.empty()) {
      this->increaseSolutionSize();
      curState = stack.pop();
      if (*curState == *end) {
        vector<State<T> *> path = this->backTrace(start, curState);
          curState->setPathCost(curState->getCost()+curState->getPrev()->getPathCost());

          this->deleteRedundency(path,&stack);
          cout<<"Total Cost: "<<curState->getPathCost()<<endl;
          cout<<"Solution size: "<<this->solutionSize<<endl;
        return path;
      }
      if (!stack.existClose(curState)) {
          if (curState->getPrev()!=NULL)
            curState->setPathCost(curState->getCost()+curState->getPrev()->getPathCost());

          stack.pushClose(curState);

          vector<State<T>*> neighbors = searchable->getadjStates(curState);
        for (int i = 0; i < neighbors.size(); ++i) {
          stack.push(neighbors[i]);
        }
      } else {
        delete (curState);
      }
    }
    vector<State<T> *> emptyVector;
    this->deleteRedundency(emptyVector,&stack);
    return emptyVector;
  }
};

#endif //APMS2__DFS_H_
