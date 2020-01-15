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
    double temp = mtx[curRow+1][curCol] ;
    if (temp != -1) {
      State<pair<int, int>> *downState = new State<pair<int, int>>(downPair, this->mtx[curRow + 1][curCol], state);
      neighbors.push_back(downState);
    }
  }
  if(curRow - 1 >= 0) { //up neighbor
    pair<int,int> upPair;
    upPair.first = curRow-1;
    upPair.second = curCol;
    double temp = mtx[curRow-1][curCol] ;
    if (temp != -1) {
      State<pair<int, int>> *upState = new State<pair<int, int>>(upPair, this->mtx[curRow - 1][curCol], state);
      neighbors.push_back(upState);
    }
  }
  if(curCol + 1 < columns) { //right neighbor
    pair<int,int> rightPair;
    rightPair.first = curRow;
    rightPair.second = curCol + 1;
    double temp = mtx[curRow][curCol+1] ;
    if (temp != -1) {
      State<pair<int, int>> *rightState = new State<pair<int, int>>(rightPair, this->mtx[curRow][curCol + 1], state);
      neighbors.push_back(rightState);
    }
  }
  if(curCol -1 >= 0) { //left neighbor
    pair<int,int> leftPair;
    leftPair.first = curRow;
    leftPair.second = curCol - 1;
    double temp = mtx[curRow][curCol-1] ;
    if (temp != -1) {
      State<pair<int, int>> *downState = new State<pair<int, int>>(leftPair, this->mtx[curRow][curCol - 1], state);
      neighbors.push_back(downState);
    }
  }
  return neighbors;
}
vector<State<pair<int, int>> *> SearchableforMatrix::getHeuristicAdj(State<pair<int, int>> *state,
                                                                     State<pair<int, int>> *goal) {
  unsigned long numOfRows = mtx.size() - 2;
  unsigned long numOfColumns = mtx[1].size();
  vector<State<pair<int, int> > *> neighbors;
  int row = state->getState().first;
  int column = state->getState().second;
  int curHeuristic = abs(goal->getState().first - row) + abs(goal->getState().second - column);
  int nextHeuristic, combinedHeuristic;
  if (row + 1 < numOfRows) {
    nextHeuristic = abs(goal->getState().first - row + 1) + abs(goal->getState().second - column);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row + 1, column};
    double tempCost = mtx[row + 1][column];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost,  tempCost+state->getCost() + combinedHeuristic , state));
    }
  }
  if (row - 1 >= 0) {
    nextHeuristic = abs(goal->getState().first - row - 1) + abs(goal->getState().second - column);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row - 1, column};
    double tempCost = mtx[row - 1][column];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost,tempCost + state->getCost() + combinedHeuristic, state));
    }
  }
  if (column - 1 >= 0) {
    nextHeuristic = abs(goal->getState().first - row) + abs(goal->getState().second - column - 1);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row, column - 1};
    double tempCost = mtx[row][column - 1];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost,tempCost + state->getCost() + combinedHeuristic, state));
    }
  }
  if (column + 1 < numOfColumns) {
    nextHeuristic = abs(goal->getState().first - row) + abs(goal->getState().second - column + 1);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row, column + 1};
    double tempCost = mtx[row][column + 1];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost, tempCost + state->getCost() + combinedHeuristic, state));
    }
  }

  return neighbors;
}
/*
vector<State<pair<int, int>> *> SearchableforMatrix::getadjStates(State<pair<int, int>> *state, State<pair<int, int>> *goal) {
  unsigned long numOfRows = mtx.size() - 2;
  unsigned long numOfColumns = mtx[1].size();
  vector<State<pair<int, int> > *> neighbors;
  int row = state->getState().first;
  int column = state->getState().second;
  int curHeuristic = abs(goal->getState().first - row) + abs(goal->getState().second - column);
  int nextHeuristic, combinedHeuristic;
  if (row + 1 < numOfRows ) {
    nextHeuristic =  abs(goal->getState().first - row + 1) + abs(goal->getState().second - column);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row + 1, column};
    double tempCost = mtx[row + 1][column] ;
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost + state->getCost() + combinedHeuristic, state));
    }
  }
  if (row - 1 >= 0) {
    nextHeuristic =  abs(goal->getState().first - row - 1) + abs(goal->getState().second - column);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row - 1, column};
    double tempCost = mtx[row - 1][column] ;
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost + state->getCost() + combinedHeuristic, state));
    }
  }
  if (column - 1 >= 0) {
    nextHeuristic =  abs(goal->getState().first - row) + abs(goal->getState().second - column - 1);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row, column - 1};
    double tempCost = mtx[row][column - 1];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost + state->getCost() + combinedHeuristic, state));
    }
  }
  if (column + 1 < numOfColumns) {
    nextHeuristic =  abs(goal->getState().first - row) + abs(goal->getState().second - column + 1);
    combinedHeuristic = abs(nextHeuristic - curHeuristic);
    pair<int, int> tempPair = {row, column + 1};
    double tempCost = mtx[row][column + 1];
    if (tempCost != -1) {
      neighbors.push_back(new State<pair<int, int>>(tempPair, tempCost + state->getCost() + combinedHeuristic, state));
    }
  }

  return neighbors;
}*/
