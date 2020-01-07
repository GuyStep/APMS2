//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_MYTESTCLIENTHANDLER_H
#define APMS2_MYTESTCLIENTHANDLER_H


#include "ClientHandler.h"

class MyTestClientHandler : public ClientHandler{
  void handleClient(std::istream is, std::ostream os) override;
};


#endif //APMS2_MYTESTCLIENTHANDLER_H


