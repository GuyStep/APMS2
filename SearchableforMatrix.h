//
// Created by amittulman on 10/01/2020.
//

#ifndef APMS2__SEARCHABLEFORMATRIX_H_
#define APMS2__SEARCHABLEFORMATRIX_H_
#include "Searchable.h"
#include "State.h"
#include "vector"
using namespace std;

class SearchableforMatrix : public  Searchable<pair<int,int>>{
 private:
  State<pair<int,int>>* start;
  State<pair<int,int>>* goal;
  vector<vector<double >> mtx;
 public:
  SearchableforMatrix(const vector<vector<double>> &mtx);
  State<pair<int,int>>* getStartPoint() override {
    return this->start;
  }
  State<pair<int,int>>* getGoalPoint() override {
    return this->goal;
  }
  vector<State<pair<int,int>>*> getadjStates(State<pair<int,int>>* state) override;
  vector<State<pair<int, int>>*> getHeuristicAdj(State<pair<int, int>> *state, State<pair<int, int>> *goal) override ;
  };

#endif //APMS2__SEARCHABLEFORMATRIX_H_
