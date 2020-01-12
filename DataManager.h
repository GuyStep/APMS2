//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__DATAMANAGER_H_
#define APMS2__DATAMANAGER_H_
#include "algorithm"
#include "vector"
using namespace std;
template <class T>
class DataManager {
 public:
  vector<State<T>*> close;
  virtual State<T>* pop() =0;
  virtual State<T>* top() =0;
  virtual int size() =0;

  virtual bool empty() =0;
  virtual bool stateExsist(State<T>* s) = 0;
  virtual bool emptyClose(){
    return close.empty();
  }

  virtual void push(State<T>* s) =0;
  virtual State<T>* popClose() {
    State<T>* top = close.back();
    close.pop_back();
    return top;
  }
   virtual void pushClose(State<T>* temp) {
    close.push_back(temp);
  }
  virtual bool existClose(State<T>* temp) {
    for (int i = 0; i< close.size(); i++) {
      if (*close[i] == *temp) {
        return true;
      }
    }
    return false;
  }
};

#endif //APMS2__DATAMANAGER_H_
