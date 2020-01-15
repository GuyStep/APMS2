cmake_minimum_required(VERSION 3.15)
project(APMS2)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

include_directories(.)

add_executable(APMS2
    AlgoQueue.h
    AlgoStack.cpp
    AlgoStack.h
    AStar.cpp
    AStar.h
    BestFirstSeracher.cpp
    BestFirstSeracher.h
    Bfs.cpp
    Bfs.h
    boot_file.cpp
    boot_file.h
    CacheManager.cpp
    CacheManager.h
    ClientHandler.cpp
    ClientHandler.h
    DataManager.h
    Dfs.cpp
    Dfs.h
    FileCacheManager.cpp
    FileCacheManager.h
    ISearcher.cpp
    ISearcher.h
    main.cpp
    MatrixHandler.cpp
    MatrixHandler.h
    mtxSolver.cpp
    mtxSolver.h
    MySerialServer.cpp
    MySerialServer.h
    MyTestClientHandler.cpp
    MyTestClientHandler.h
    QueuePriority.cpp
    QueuePriority.h
    Searchable.cpp
    Searchable.h
    SearchableforMatrix.cpp
    SearchableforMatrix.h
    Searcher.cpp
    Searcher.h
    server_file.cpp
    server_file.h
    Solver.cpp
    Solver.h
    State.cpp
    State.h
    StringReverser.cpp
    StringReverser.h ParallelServer.cpp ParallelServer.h)
