cmake_minimum_required(VERSION 3.15)
project(APMS2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(APMS2
        MySerialServer.cpp
        MySerialServer.h
        server_file.cpp
        server_file.h)
