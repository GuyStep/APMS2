//
// Created by guy on 07/01/2020.
//

#ifndef APMS2_BOOT_FILE_H
#define APMS2_BOOT_FILE_H


#include "MySerialServer.h";
#include "MyTestClientHandler.h"
#include "StringReverser.h"
#include "FileCacheManager.h"
/*using namespace std;
namespace boot{
    class Main{
    public:
        void main(int argc, char* argv[]){
            FileCacheManager<class P,class S> fcm = new FileCacheManager<string, string>();
            ClientHandler* ch = new MyTestClientHandler<class P,class S>(new StringReverser<string ,string>(),fcm);
            MySerialServer* server = new MySerialServer(ch);
        }
    };
}*/




#endif //APMS2_BOOT_FILE_H
