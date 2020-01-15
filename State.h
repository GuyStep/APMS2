//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__STATE_H_
#define APMS2__STATE_H_

using  namespace std;

template <class T>
class State{
 private:
  T state;
  double cost;
  double pathCost;
  double heuristicCost;
  State<T>* prev;
  bool done;
 public:
  State(T state, double cost, State<T> *prev) : state(state), cost(cost), prev(prev), done(false), pathCost(cost), heuristicCost(0) {}
  T getState() {
    return this->state;
  }
  State(T state, double cost,double heurCost, State<T> *prev) : state(state), cost(cost), prev(prev), done(false), pathCost(cost), heuristicCost(heurCost) {}

  bool operator==(State<T> comparable) {
    return (this->getState() == comparable.getState());
  }
  double getCost() {
    return this->cost;
  }
  double getPathCost() {
    return this->pathCost;
  }
  void setPathCost(double cost1) {
    this->pathCost = cost1;
  }
  double getHeuristicCost() {
    return this->heuristicCost;
  }
  void setHeuristicCost(double cost1) {
    this->heuristicCost = cost1;
  }
  State<T>* getPrev() {
    return this->prev;
  }
  void updatePrev(State<T>* prev1) {
    this->prev = prev1;
  }
  bool getDone() {
    return this->done;
  }
  void updatedone(bool done1) {
    this->done = done1;
  }
};

#endif //APMS2__STATE_H_
