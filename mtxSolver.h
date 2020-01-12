//
// Created by amittulman on 12/01/2020.
//

#ifndef APMS2__MTXSOLVER_H_
#define APMS2__MTXSOLVER_H_
#include <string>
#include <vector>
#include "Solver.h"
#include "State.h"
#include "Searchable.h"
#include "ISearcher.h"
//#include "Searcher.h"
#include "SearchableforMatrix.h"
#include "BestFirstSeracher.h"
#define T pair<int,int>

using namespace std;
class mtxSolver : public Solver<string,vector<vector<double>>> {
 public:
  string solve(vector<vector<double>> matrix) {
    ISearcher<T,vector<State<T>*>> *searcher = new BestFirstSeracher<T>();
    Searchable<T>* searchable = new SearchableforMatrix(matrix);
    vector<State<T>*> answer = searcher->search(searchable);
    if(answer.size() == 0) {
      return "no path";
    }
    string path = "";
    int ansSize = answer.size();
    for (int i=0;i< ansSize;i++) {
      T curState = answer[i]->getState();
      T nextState = answer[i+1]->getState();
      if(curState.first > nextState.first) {
        path = path +  "Up";
      } else if (curState.first<nextState.first) {
        path = path +  "Down";
      } else if (curState.second > nextState.second) {
        path = path +  "Left";
      } else if (curState.second < nextState.second) {
        path = path +  "Right";
      }
    }
  }
};

#endif //APMS2__MTXSOLVER_H_
