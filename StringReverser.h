//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_STRINGREVERSER_H
#define APMS2_STRINGREVERSER_H


#include "Solver.h"
#include "string"

using namespace std;
  class StringReverser : public Solver<string, string> {
    string solve(string problem) override {
      int n = problem.length();

      // Swap character starting from two
      // from stack overflow
      for (int i = 0; i < n / 2; i++)
        swap(problem[i], problem[n - i - 1]);
      return problem;
    }
  };

#endif //APMS2_STRINGREVERSER_H
