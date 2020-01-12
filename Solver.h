//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_SOLVER_H
#define APMS2_SOLVER_H
template<class S,class P>
class Solver {
 public:
  virtual S solve(P key) = 0;
};


#endif //APMS2_SOLVER_H
