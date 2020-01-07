//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_SERVER_FILE_H
#define APMS2_SERVER_FILE_H

#include "ClientHandler.h"
namespace server_side {
    class Server;
}
class server_side::Server {
public:
    virtual void open(int port, ClientHandler ch) = 0;
    virtual void stop() = 0;
};


#endif //APMS2_SERVER_FILE_H
