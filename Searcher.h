//
// Created by amittulman on 09/01/2020.
//

#ifndef APMS2__SEARCHER_H_
#define APMS2__SEARCHER_H_
#include "ISearcher.h"
#include "State.h"
#include "vector"
#include "DataManager.h"

template <class T>
class Searcher : public ISearcher<T, vector<State<T>*>>{
 public:
  vector<State<T>*> backTrace(State<T>* start,State<T>* goal) {
   //return NULL;
  }
  void deleteRedundency(vector<State<T>*> path, DataManager<T>* data) {
    State<T>* currState;
    while(!data->empty()) { // Q open not empty
        delete(data->pop());
    }
    while(!data->emptyClose()) {//closed not empty
      currState = data->popClose();
      int size = path.size();

      if(find(path.begin(), path.end(), currState) != path.end()){
        continue;
      } else {
        delete(currState);
      }
    }
  }
};

#endif //APMS2__SEARCHER_H_
