//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_CLIENTHANDLER_H
#define APMS2_CLIENTHANDLER_H

#include <iostream>


class ClientHandler {
public:
    virtual void handleClient(std::istream is, std::ostream os) = 0;
};


#endif //APMS2_CLIENTHANDLER_H
