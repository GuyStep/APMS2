//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_MYTESTCLIENTHANDLER_H
#define APMS2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"
#include "CacheManager.h"
#include "Solver.h"

class MyTestClientHandler : public ClientHandler{
public:
    MyTestClientHandler(Solver<string, string> *s, CacheManager *cm){
        this->solver = s;
        this->cache_manager = cm;
    }
  void handleClient(int socket) override;
private:

    Solver<string, string>* solver;
    CacheManager* cache_manager;

};




#endif //APMS2_MYTESTCLIENTHANDLER_H


