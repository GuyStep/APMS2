//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_MYSERIALSERVER_H
#define APMS2_MYSERIALSERVER_H

#include "server_file.h"

class MySerialServer :  public server_side::Server {
    void open(int port, int ch) override{

    }
    void stop() override{

    }
};


#endif //APMS2_MYSERIALSERVER_H
