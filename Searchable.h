//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__SEARCHABLE_H_
#define APMS2__SEARCHABLE_H_
#include "State.h"
#include "vector"
template <class T>
class Searchable {
 public:
  virtual State<T>* getStartPoint() =0;
  virtual State<T>* getGoalPoint() =0;
  virtual vector<State<T>*> getadjStates(State<T>* s) = 0;
  virtual vector<State<T>*> getHeuristicAdj(State<T> *state, State<T> *goal) = 0;
};

#endif //APMS2__SEARCHABLE_H_
