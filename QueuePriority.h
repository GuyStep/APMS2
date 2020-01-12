//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__QUEUEPRIORITY_H_
#define APMS2__QUEUEPRIORITY_H_
#include <unistd.h>
#include "queue"
#include "State.h"
#include "vector"
#include "DataManager.h"
using namespace std;
template <class T>
class StateComperatorByCost {
 public:
    bool operator()(State<T>* state, State<T>* comp) {
    bool b = state->getCost() > comp->getCost();
    return b;
  }
};
template <class T>
class QueuePriority : public DataManager<T>{
 private:
  priority_queue<State<T>*,vector<State<T>*>, StateComperatorByCost<T>> myQ;
 public:
  void push(State<T>* temp) override {
    myQ.push(temp);
  }
  State<T>* top() override {
    return myQ.top();
  }
  State<T>* pop() override {
    State<T>* top1 = top();
    myQ.pop();
    return top1;
  }
  bool empty() override {
    return myQ.empty();
  }
  int size() override {
    return myQ.size();
  }
  State<T>* find(State<T>* stateToFind) {
    vector<State<T>*> vec;
    State<T> *temp, *found = nullptr;
    while (!empty()) { //transfer all the states to a temp vector, and check if the state exists
      temp = this->pop();
      vec.push_back(temp);
      if(*temp == *stateToFind) {
        found = temp;
        break;
      }
    }
    int sizeVec = vec.size();
    for (int i=0; i< sizeVec; i++) { //push all the states to the Q
      this->push(vec[i]);
    }
  }
  bool stateExsist(State<T>* stateToCheck) override {
    vector<State<T>*> vec;
    State<T> *temp;
    bool found = false;
    while (!empty()) { //transfer all the states to a temp vector, and check if the state exists
      temp = this->pop();
      vec.push_back(temp);
      if(*temp == *stateToCheck) {
        found = true;
        break;
      }
    }
    int sizeVec = vec.size();
    for (int i=0; i< sizeVec; i++) { //push all the states to the Q
      this->push(vec[i]);
    }
    return found;
  }
  void removeState(State<T>* stateToFind) {
    vector<State<T>*> vec;
    State<T> *temp;
    while (!empty()) { //transfer all the states to a temp vector, and check if the state exists
      temp = this->pop();
      if(temp == stateToFind) {
        delete(temp);
        break;
      }
      vec.push_back(temp);
    }
    int sizeVec = vec.size();
    for (int i=0; i< sizeVec; i++) { //push all the states to the Q
      this->push(vec[i]);
    }
  }
};

#endif //APMS2__QUEUEPRIORITY_H_
