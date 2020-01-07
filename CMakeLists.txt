cmake_minimum_required(VERSION 3.15)
project(APMS2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(APMS2
        MySerialServer.cpp
        MySerialServer.h
        server_file.cpp
        server_file.h ClientHandler.cpp ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h CacheManager.cpp CacheManager.h FileCacheManager.cpp FileCacheManager.h Solver.cpp Solver.h StringReverser.cpp StringReverser.h boot_file.cpp boot_file.h)
