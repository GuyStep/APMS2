//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_SERVER_FILE_H
#define APMS2_SERVER_FILE_H

namespace server_side {
    class Server;
}
class server_side::Server {
public:
    virtual open(int port, ClientHandler ch) = 0;
    virtual stop() = 0;
};


#endif //APMS2_SERVER_FILE_H
