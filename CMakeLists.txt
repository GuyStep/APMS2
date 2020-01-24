cmake_minimum_required(VERSION 3.15)
project(APMS2)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

include_directories(.)

add_executable(APMS2
        MySerialServer.cpp
        MySerialServer.h
        server_file.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h CacheManager.h FileCacheManager.h Solver.h StringReverser.h main.cpp ISearcher.h State.h Searcher.h BestFirstSeracher.h QueuePriority.h Searchable.h DataManager.h AlgoQueue.h SearchableforMatrix.cpp SearchableforMatrix.h MatrixHandler.cpp MatrixHandler.h mtxSolver.h Bfs.h Dfs.h AlgoStack.h AStar.h ParallelServer.cpp ParallelServer.h Boot.h)
