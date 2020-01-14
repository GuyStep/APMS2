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
#include "Bfs.h"
#include "Dfs.h"
#include "AStar.h"


#define T pair<int,int>

using namespace std;

namespace server_side {
class mtxSolver : public Solver<string, vector<vector<double>>> {
 public:
  string solve(vector<vector<double>> mat) override {
    //ISearcher<T, vector<State<T > *>> *searcher = new BestFirstSeracher<T >();
    //ISearcher<T, vector<State<T > *>> *searcher = new Bfs<T>();
    //ISearcher<T, vector<State<T > *>> *searcher = new Dfs<T>();
    ISearcher<T, vector<State<T > *>> *searcher = new AStar<T>();

    Searchable<T > *searchable = new SearchableforMatrix(mat);
    vector<State<T > *> answer = searcher->search(searchable);
    if (answer.size() == 0) {
      return "no path";
    }
    string path = "";
    int ansSize = answer.size();
    int i;
    for (i = 0; i < ansSize - 1; i++) {
      bool endFlag = i + 2 == ansSize;
      T curState = answer[i]->getState();
      T nextState = answer[i + 1]->getState();
      if (curState.first > nextState.first) {
        path = path + "Up";
      } else if (curState.first < nextState.first) {
        path = path + "Down";
      } else if (curState.second > nextState.second) {
        path = path + "Left";
      } else if (curState.second < nextState.second) {
        path = path + "Right";
      }
      //delete (answer[i]);
      if (!endFlag) {
        path += ",";
      }
      // delete (answer[i+1]);
/*    delete (searcher);
    delete (searchable);*/
    }
    return path;
  }
};
}

#endif //APMS2__MTXSOLVER_H_
