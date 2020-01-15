//
// Created by amittulman on 14/01/2020.
//

#ifndef APMS2__ASTAR_H_
#define APMS2__ASTAR_H_
#include "Searcher.h"
#include "State.h"
#include "QueuePriority.h"
#include "Searchable.h"
#include "AlgoQueue.h"
using namespace std;
template <class T>
class AStar : public Searcher<T>{
 private:
  QueuePriority<T> Q;
 public:
  vector<State<T> *> search(Searchable<T> *searchable) {
    this->initSolutionSize();
    State<T> *init = searchable->getStartPoint();
    State<T> *goal = searchable->getGoalPoint();
    Q.push(init);
    while (!Q.empty()) {
      State<T> *minState = Q.pop();
      this->increaseSolutionSize();
      Q.pushClose(minState);
      if (*minState == *goal) {
        vector<State<T> *> path = this->backTrace(init, minState);
        this->deleteRedundency(path,&Q);
          int solSize =  this->getSolutionSize(); // @@@@@@@@@@ PRINT DEBUG @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
          cout<<"Size of solution: "<<solSize<<endl; // @@@@@@@@@@ PRINT DEBUG @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
          cout<<"Total Cost of BEST: "<<minState->getPathCost()<<endl; // @@@@@@@@@@ PRINT DEBUG @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        return path;
      }

      vector<State<T>*> neighbors = searchable->getHeuristicAdj(minState, goal);
      int neigborsSize = neighbors.size();
      for (int i = 0; i < neigborsSize; ++i) {
        if (!Q.stateExsist(neighbors[i]) && !Q.existClose(neighbors[i])) {
            State<T>* state = neighbors[i];
            state->setPathCost(state->getCost()+state->getPrev()->getPathCost());

            Q.push(neighbors[i]);
        } else if (!Q.existClose(neighbors[i])) {
          State<T> *item = Q.find(neighbors[i]);
          State<T>* state = neighbors[i];
            state->setPathCost(state->getCost()+state->getPrev()->getPathCost());
          if (state->getHeuristicCost() < item->getHeuristicCost()) {
            Q.removeState(item);
            Q.push(neighbors[i]);
          } else {
            delete (neighbors[i]);
          }
        } else {
          delete (neighbors[i]);
        }
      }
    }

    vector<State<T> *> emptyVector;
    this->deleteRedundency(emptyVector,&Q);
    return emptyVector;
  }
};

#endif //APMS2__ASTAR_H_
