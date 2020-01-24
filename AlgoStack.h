//
// Created by amittulman on 13/01/2020.
//

#ifndef APMS2__ALGOSTACK_H_
#define APMS2__ALGOSTACK_H_
#include "QueuePriority.h"
#include "DataManager.h"
#include "Searcher.h"

using namespace std;
//Class replaces the standard stl stack

template <class T>
class AlgoStack : public DataManager<T>{
 private:
  stack<State<T>*> myQ;

 public:
  void push(State<T>* temp) override {
    myQ.push(temp);
  }

  State<T>* top(){
    return myQ.top();
  }

  State<T>* pop() override {
    State<T>* top = myQ.top();
    myQ.pop();
    return top;
  }

  int size(){
    return myQ.size();
  }

  bool empty() override {
    return myQ.empty();
  }

  bool stateExsist(State<T>* stateToCheck) {
    vector<State<T>*> vec;
    State<T> *temp;
    bool found = false;
    while (!empty()) { //transfer all the states to a temp vector, and check if the state exists in it
      temp = this->pop();
      vec.push_back(temp);
      if(*temp == *stateToCheck) {
        found = true;
        break;
      }
    }
    int sizeVec = vec.size();
    for (int i=0; i< sizeVec; i++) { //push all the states to the queue
      this->push(vec[i]);
    }
    return found;
  }
};

#endif //APMS2__ALGOSTACK_H_
