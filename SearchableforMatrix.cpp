//
// Created by amittulman on 10/01/2020.
//
#include <cmath>
#include "SearchableforMatrix.h"

SearchableforMatrix::SearchableforMatrix(const vector<vector<double>> &matrix) {
  this->mtx = matrix;
  int mtxSize = mtx.size();
  pair<int,int> startPair;
  startPair.first = mtx[mtxSize - 2][0];
  startPair.second = mtx[mtxSize - 2][1];;
  pair<int,int> goalPair;
  goalPair.first = mtx[mtxSize - 1][0];
  goalPair.second = mtx[mtxSize - 1][1];
  double costStart = mtx[startPair.first][startPair.second];
  double costGoal = mtx[goalPair.first][goalPair.second];
  this->start = new State<pair<int,int>>(startPair,costStart, nullptr);
  this->goal = new State<pair<int,int>>(goalPair,costGoal, nullptr);

}
vector<State<pair<int, int>> *> SearchableforMatrix::getadjStates(State<pair<int, int>> *state) {
  long rows = this->mtx.size() - 2;
  long columns = this->mtx[1].size();
  vector<State<pair<int,int>>*> neighbors;
  int curRow = state->getState().first;
  int curCol = state->getState().second;

  if(curRow + 1 < rows) { //down neighbor
    pair<int,int> downPair;
    downPair.first = curRow+1;
    downPair.second = curCol;
    State<pair<int,int>>* downState = new State<pair<int,int>>(downPair, this->mtx[curRow+1][curCol], state);
    neighbors.push_back(downState);
  }
  if(curRow - 1 >= 0) { //up neighbor
    pair<int,int> upPair;
    upPair.first = curRow-1;
    upPair.second = curCol;
    State<pair<int,int>>* upState = new State<pair<int,int>>(upPair, this->mtx[curRow-1][curCol], state);
    neighbors.push_back(upState);
  }
  if(curCol + 1 < columns) { //right neighbor
    pair<int,int> rightPair;
    rightPair.first = curRow;
    rightPair.second = curCol + 1;
    State<pair<int,int>>* rightState = new State<pair<int,int>>(rightPair, this->mtx[curRow][curCol+1], state);
    neighbors.push_back(rightState);

  }
  if(curCol -1 >= 0) { //left neighbor
    pair<int,int> leftPair;
    leftPair.first = curRow;
    leftPair.second = curCol - 1;
    State<pair<int,int>>* downState = new State<pair<int,int>>(leftPair, this->mtx[curRow][curCol - 1], state);
    neighbors.push_back(downState);
  }
    int j;
  return neighbors;
}

