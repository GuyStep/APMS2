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

 public:
  vector<State<T> *> search(Searchable<T> *searchable) {
    QueuePriority<T> prior_queue;
    this->initSolutionSize();
    State<T> *init = searchable->getStartPoint();
    State<T> *goal = searchable->getGoalPoint();
    prior_queue.push(init);
    //While there are nodes left, we keep checking them
    while (!prior_queue.empty()) {
      State<T> *current_state = prior_queue.pop();
      this->increaseSolutionSize();
      prior_queue.pushClose(current_state);
      //The current state is the goal state, finish the algorithm
      if (*current_state == *goal) {
        vector<State<T> *> path = this->backTrace(init, current_state); //Get the path
        this->deleteRedundency(path,&prior_queue);
          //int solSize =  this->getSolutionSize();
          //cout<<"Size of solution: "<<solSize<<endl; // DEBUG print - number of nodes checked
          //cout<<"Total Cost of BEST: "<<current_state->getPathCost()<<endl; // DEBUG print - cost of the best path
        return path;
      }


      vector<State<T>*> adjacent_states = searchable->getHeuristicAdj(current_state, goal);
      int number_of_adjacent = adjacent_states.size();
      for (int i = 0; i < number_of_adjacent; ++i) {
          //If current adj state is not in one of the queues, get its heur cost
          if (!prior_queue.stateExsist(adjacent_states[i]) && !prior_queue.existClose(adjacent_states[i])) {
              State<T>* state = adjacent_states[i];
              state->setPathCost(state->getCost()+state->getPrev()->getPathCost());
              prior_queue.push(adjacent_states[i]);
          //If it is in the queus, we compare it
          } else if (!prior_queue.existClose(adjacent_states[i])) {
              State<T> *item = prior_queue.find(adjacent_states[i]);
              State<T>* state = adjacent_states[i];
              state->setPathCost(state->getCost()+state->getPrev()->getPathCost());
                if (state->getHeuristicCost() < item->getHeuristicCost()) {
                    prior_queue.removeState(item);
                    prior_queue.push(adjacent_states[i]);
                } else {
            delete (adjacent_states[i]);
          }
        } else {
          delete (adjacent_states[i]);
        }
      }
    }
    //No path found, return empty vector
    vector<State<T> *> emptyVector;
    this->deleteRedundency(emptyVector,&prior_queue);
    return emptyVector;
  }
};

#endif //APMS2__ASTAR_H_
