cmake_minimum_required(VERSION 3.15)
project(APMS2)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

include_directories(.)

add_executable(APMS2
        MySerialServer.cpp
        MySerialServer.h
        server_file.cpp
        server_file.h ClientHandler.cpp ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h CacheManager.cpp CacheManager.h FileCacheManager.cpp FileCacheManager.h Solver.cpp Solver.h StringReverser.cpp StringReverser.h boot_file.cpp boot_file.h main.cpp ISearcher.cpp ISearcher.h State.cpp State.h Searcher.cpp Searcher.h BestFirstSeracher.cpp BestFirstSeracher.h QueuePriority.cpp QueuePriority.h Searchable.cpp Searchable.h DataManager.h AlgoQueue.h SearchableforMatrix.cpp SearchableforMatrix.h MatrixHandler.cpp MatrixHandler.h mtxSolver.cpp mtxSolver.h Bfs.cpp Bfs.h Dfs.cpp Dfs.h AlgoStack.cpp AlgoStack.h)
