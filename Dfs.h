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
 public:
  vector<State<T>*> search(Searchable<T> *searchable) {
    AlgoStack<T> stack;
    State<T> *start = searchable->getStartPoint();
    State<T> *end = searchable->getGoalPoint();
    State<T> *current_state;
    stack.push(start);
    this->initSolutionSize();
    while (!stack.empty()) {
      this->increaseSolutionSize();
		current_state = stack.pop();
      if (*current_state == *end) {
        vector<State<T> *> path = this->backTrace(start, current_state);
          current_state->setPathCost(current_state->getCost() + current_state->getPrev()->getPathCost());

          this->deleteRedundency(path,&stack);
          //cout<<"Total Cost: "<<current_state->getPathCost()<<endl;
          //cout<<"Solution size: "<<this->solutionSize<<endl;
        return path;
      }
      if (!stack.existClose(current_state)) {
          if (current_state->getPrev() != NULL)
            current_state->setPathCost(current_state->getCost() + current_state->getPrev()->getPathCost());

          stack.pushClose(current_state);

          vector<State<T>*> adjacent_states = searchable->getadjStates(current_state);
        for (int i = 0; i < adjacent_states.size(); ++i) {
          stack.push(adjacent_states[i]);
        }
      } else {
        delete (current_state);
      }
    }
    vector<State<T> *> emptyVector;
    this->deleteRedundency(emptyVector,&stack);
    return emptyVector;
  }
};

#endif //APMS2__DFS_H_
