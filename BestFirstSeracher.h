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
class BestFirstSeracher : public Searcher<T>{
 protected:
   QueuePriority<T> openQ;
 public:
  vector<State<T>*> search(Searchable<T>* searchable) {
    State<T>* curState;
    State<T>* start = searchable->getStartPoint();
    State<T>* goal = searchable->getGoalPoint();
    openQ.push(start);
    this->initSolutionSize();
    while(!openQ.empty()) { //iterate over the problems by bfs
      this->increaseSolutionSize();
      curState = openQ.pop();
      openQ.pushClose(curState);
      if(*curState == *goal) { //check if finished
        vector<State<T>*> path = this->backTrace(start,curState);
        this->deleteRedundency(path,&openQ);
        return path;
      }
      vector<State<T>*> adj = searchable->getadjStates(curState); //get neighbors
      int sizeadj = adj.size();
      for (int i = 0; i < sizeadj; i++) {
        bool first = openQ.stateExsist(adj[i]);
        bool second = openQ.existClose(adj[i]);
        if(!first && !second) {
          openQ.push(adj[i]);
        } else if (!openQ.existClose(adj[i])) {
          State<T> *comparable = openQ.find(adj[i]);
          State<T>* state = adj[i];
          if (state->getCost() < comparable->getCost()) { //replace by cheaper edge
            openQ.removeState(comparable);
            openQ.push(state);
          } else {
            delete(adj[i]);
          }
        } else{
          delete(adj[i]);
        }
      }
    }
    // no path to the goal
    vector<State<T>*> emptyPath;
    this->deleteRedundency(emptyPath,&openQ);
    return emptyPath;
  }
};

#endif //APMS2__BESTFIRSTSERACHER_H_
