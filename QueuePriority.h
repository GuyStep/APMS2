//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__QUEUEPRIORITY_H_
#define APMS2__QUEUEPRIORITY_H_
#include <unistd.h>
#include "queue"
#include "State.h"
#include "vector"
using namespace std;
template <class T>
class QueuePriority {
 private:
  priority_queue<State<T>*> myQ;
 public:
  void push(State<T>* temp) {
    myQ.push(temp);
  }
  State<T>* top(){
    return myQ.top();
  }
  State<T>* pop(){
    State<T>* top = top();
    myQ.pop();
    return top;
  }
  bool empty() {
    return myQ.empty();
  }
  int size(){
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
  bool stateExsist(State<T>* stateToCheck) {
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
};

#endif //APMS2__QUEUEPRIORITY_H_
