//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_SOLVER_H
#define APMS2_SOLVER_H

template<class P, class S>
class Solver {
 public:
    virtual S solve(P key) = 0;
};


#endif //APMS2_SOLVER_H
