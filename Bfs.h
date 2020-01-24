//
// Created by amittulman on 12/01/2020.
//

#ifndef APMS2__BFS_H_
#define APMS2__BFS_H_
#include "Searcher.h"
#include "State.h"
#include "QueuePriority.h"
#include "Searchable.h"
#include "AlgoQueue.h"
using namespace std;
template <class T>
class Bfs : public Searcher<T>{
 public:
  vector<State<T>*> search(Searchable<T>* searchable) {
    AlgoQueue<T> Q;
    State<T>* curState;
    State<T>* start = searchable->getStartPoint();
    State<T>* goal = searchable->getGoalPoint();
    Q.push(start);
    this->initSolutionSize();
    while(!Q.empty()) { //iterate over the problems by bfs
      this->increaseSolutionSize();
      curState = Q.pop();
      if(*curState == *goal) { //check if finished
          curState->setPathCost(curState->getCost()+curState->getPrev()->getPathCost());

          vector<State<T>*> path = this->backTrace(start,curState);

          //cout<<"Total Cost: "<<curState->getPathCost()<<endl; //Debug print
          //cout<<"Solution size: "<<this->solutionSize<<endl; //Debug print
        this->deleteRedundency(path,&Q);
        return path;
      }
      vector<State<T>*> adj = searchable->getadjStates(curState); //get neighbors
      int sizeadj = adj.size();
      for (int i = 0; i < sizeadj; i++) {
        bool second = Q.existClose(adj[i]);
        if(!second) {
            if (curState->getPrev()!=NULL)
                curState->setPathCost(curState->getCost()+curState->getPrev()->getPathCost());


            Q.push(adj[i]);
          Q.pushClose(adj[i]);
        } else{
          delete(adj[i]);
        }
      }
    }
    // no path to the goal
    vector<State<T>*> emptyPath;
    this->deleteRedundency(emptyPath,&Q);
    return emptyPath;
  }

};

#endif //APMS2__BFS_H_
