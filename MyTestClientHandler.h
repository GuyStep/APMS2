//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_MYTESTCLIENTHANDLER_H
#define APMS2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "CacheManager.h"
#include "Solver.h"

template<class P, class S>
class MyTestClientHandler : public ClientHandler{
public:
    MyTestClientHandler(Solver<P,S> s, CacheManager<P,S> cm){
        this->solver = s;
        this->cache_manager = cm;
    }
private:

    Solver<P,S> solver;
    CacheManager<P,S> cache_manager;

    void handleClient(std::istream is, std::ostream os) override;
};



#endif //APMS2_MYTESTCLIENTHANDLER_H


