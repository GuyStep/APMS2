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
#include <iostream>

using namespace std;
template <class T>
class BestFirstSeracher : public Searcher<T>{
 public:
  vector<State<T>*> search(Searchable<T>* searchable) {
    QueuePriority<T> open_queue;
    State<T>* curState;
    State<T>* start = searchable->getStartPoint();
    State<T>* goal = searchable->getGoalPoint();
    open_queue.push(start);
    this->initSolutionSize();
    while(!open_queue.empty()) { //iterate over the states by bfs
      this->increaseSolutionSize();
      curState = open_queue.pop();
      open_queue.pushClose(curState);
      if(*curState == *goal) { //check if finished, if so, finish algorithm
		vector<State<T>*> path = this->backTrace(start,curState); //get the path
		this->deleteRedundency(path,&open_queue);
		  //int solSize =  this->getSolutionSize();
		  //cout<<"Size of solution: "<<solSize<<endl; // DEBUG print - number of nodes checked
		  //cout<<"Total Cost of BEST: "<<current_state->getPathCost()<<endl; // DEBUG print - cost of the best path
		  return path;
      }
      vector<State<T>*> adj = searchable->getadjStates(curState); //get adjacent states
      int number_of_adjacent = adj.size();
      for (int i = 0; i < number_of_adjacent; i++) {
        bool first = open_queue.stateExsist(adj[i]);
        bool second = open_queue.existClose(adj[i]);
        if(!first && !second) {
            State<T>* state = adj[i];
            state->setPathCost(state->getCost()+state->getPrev()->getPathCost());
          open_queue.push(adj[i]);
        } else if (!open_queue.existClose(adj[i])) {
          State<T> *comparable = open_queue.find(adj[i]);
          State<T>* state = adj[i];
            state->setPathCost(state->getCost()+state->getPrev()->getPathCost());
            if (state->getPathCost() < comparable->getPathCost()) { //replace by cheaper edge
            open_queue.removeState(comparable);
            open_queue.push(state);
          } else {
            delete(adj[i]);
          }
        } else{
          delete(adj[i]);
        }
      }
    }
    // no path to the goal. return empty vector
    vector<State<T>*> emptyPath;
    this->deleteRedundency(emptyPath,&open_queue);
    return emptyPath;

  }
};

#endif //APMS2__BESTFIRSTSERACHER_H_
