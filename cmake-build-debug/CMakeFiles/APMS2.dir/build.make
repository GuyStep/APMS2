# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2019.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/guy/CLionProjects/APMS2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/guy/CLionProjects/APMS2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/APMS2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/APMS2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/APMS2.dir/flags.make

CMakeFiles/APMS2.dir/MySerialServer.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/MySerialServer.cpp.o: ../MySerialServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/APMS2.dir/MySerialServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/MySerialServer.cpp.o -c /home/guy/CLionProjects/APMS2/MySerialServer.cpp

CMakeFiles/APMS2.dir/MySerialServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/MySerialServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/MySerialServer.cpp > CMakeFiles/APMS2.dir/MySerialServer.cpp.i

CMakeFiles/APMS2.dir/MySerialServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/MySerialServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/MySerialServer.cpp -o CMakeFiles/APMS2.dir/MySerialServer.cpp.s

CMakeFiles/APMS2.dir/server_file.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/server_file.cpp.o: ../server_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/APMS2.dir/server_file.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/server_file.cpp.o -c /home/guy/CLionProjects/APMS2/server_file.cpp

CMakeFiles/APMS2.dir/server_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/server_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/server_file.cpp > CMakeFiles/APMS2.dir/server_file.cpp.i

CMakeFiles/APMS2.dir/server_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/server_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/server_file.cpp -o CMakeFiles/APMS2.dir/server_file.cpp.s

CMakeFiles/APMS2.dir/ClientHandler.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/ClientHandler.cpp.o: ../ClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/APMS2.dir/ClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/ClientHandler.cpp.o -c /home/guy/CLionProjects/APMS2/ClientHandler.cpp

CMakeFiles/APMS2.dir/ClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/ClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/ClientHandler.cpp > CMakeFiles/APMS2.dir/ClientHandler.cpp.i

CMakeFiles/APMS2.dir/ClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/ClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/ClientHandler.cpp -o CMakeFiles/APMS2.dir/ClientHandler.cpp.s

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o: ../MyTestClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o -c /home/guy/CLionProjects/APMS2/MyTestClientHandler.cpp

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/MyTestClientHandler.cpp > CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/MyTestClientHandler.cpp -o CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s

CMakeFiles/APMS2.dir/CacheManager.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/CacheManager.cpp.o: ../CacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/APMS2.dir/CacheManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/CacheManager.cpp.o -c /home/guy/CLionProjects/APMS2/CacheManager.cpp

CMakeFiles/APMS2.dir/CacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/CacheManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/CacheManager.cpp > CMakeFiles/APMS2.dir/CacheManager.cpp.i

CMakeFiles/APMS2.dir/CacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/CacheManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/CacheManager.cpp -o CMakeFiles/APMS2.dir/CacheManager.cpp.s

CMakeFiles/APMS2.dir/Solver.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/Solver.cpp.o: ../Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/APMS2.dir/Solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/Solver.cpp.o -c /home/guy/CLionProjects/APMS2/Solver.cpp

CMakeFiles/APMS2.dir/Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/Solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/Solver.cpp > CMakeFiles/APMS2.dir/Solver.cpp.i

CMakeFiles/APMS2.dir/Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/Solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/Solver.cpp -o CMakeFiles/APMS2.dir/Solver.cpp.s

CMakeFiles/APMS2.dir/StringReverser.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/StringReverser.cpp.o: ../StringReverser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/APMS2.dir/StringReverser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/StringReverser.cpp.o -c /home/guy/CLionProjects/APMS2/StringReverser.cpp

CMakeFiles/APMS2.dir/StringReverser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/StringReverser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/StringReverser.cpp > CMakeFiles/APMS2.dir/StringReverser.cpp.i

CMakeFiles/APMS2.dir/StringReverser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/StringReverser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/StringReverser.cpp -o CMakeFiles/APMS2.dir/StringReverser.cpp.s

CMakeFiles/APMS2.dir/boot_file.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/boot_file.cpp.o: ../boot_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/APMS2.dir/boot_file.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/boot_file.cpp.o -c /home/guy/CLionProjects/APMS2/boot_file.cpp

CMakeFiles/APMS2.dir/boot_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/boot_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/boot_file.cpp > CMakeFiles/APMS2.dir/boot_file.cpp.i

CMakeFiles/APMS2.dir/boot_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/boot_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/boot_file.cpp -o CMakeFiles/APMS2.dir/boot_file.cpp.s

CMakeFiles/APMS2.dir/main.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/APMS2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/main.cpp.o -c /home/guy/CLionProjects/APMS2/main.cpp

CMakeFiles/APMS2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/main.cpp > CMakeFiles/APMS2.dir/main.cpp.i

CMakeFiles/APMS2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/main.cpp -o CMakeFiles/APMS2.dir/main.cpp.s

CMakeFiles/APMS2.dir/ISearcher.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/ISearcher.cpp.o: ../ISearcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/APMS2.dir/ISearcher.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/ISearcher.cpp.o -c /home/guy/CLionProjects/APMS2/ISearcher.cpp

CMakeFiles/APMS2.dir/ISearcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/ISearcher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/ISearcher.cpp > CMakeFiles/APMS2.dir/ISearcher.cpp.i

CMakeFiles/APMS2.dir/ISearcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/ISearcher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/ISearcher.cpp -o CMakeFiles/APMS2.dir/ISearcher.cpp.s

CMakeFiles/APMS2.dir/State.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/APMS2.dir/State.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/State.cpp.o -c /home/guy/CLionProjects/APMS2/State.cpp

CMakeFiles/APMS2.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/State.cpp > CMakeFiles/APMS2.dir/State.cpp.i

CMakeFiles/APMS2.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/State.cpp -o CMakeFiles/APMS2.dir/State.cpp.s

CMakeFiles/APMS2.dir/Searcher.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/Searcher.cpp.o: ../Searcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/APMS2.dir/Searcher.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/Searcher.cpp.o -c /home/guy/CLionProjects/APMS2/Searcher.cpp

CMakeFiles/APMS2.dir/Searcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/Searcher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/Searcher.cpp > CMakeFiles/APMS2.dir/Searcher.cpp.i

CMakeFiles/APMS2.dir/Searcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/Searcher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/Searcher.cpp -o CMakeFiles/APMS2.dir/Searcher.cpp.s

CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o: ../BestFirstSeracher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o -c /home/guy/CLionProjects/APMS2/BestFirstSeracher.cpp

CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/BestFirstSeracher.cpp > CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.i

CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/BestFirstSeracher.cpp -o CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.s

CMakeFiles/APMS2.dir/QueuePriority.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/QueuePriority.cpp.o: ../QueuePriority.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/APMS2.dir/QueuePriority.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/QueuePriority.cpp.o -c /home/guy/CLionProjects/APMS2/QueuePriority.cpp

CMakeFiles/APMS2.dir/QueuePriority.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/QueuePriority.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/QueuePriority.cpp > CMakeFiles/APMS2.dir/QueuePriority.cpp.i

CMakeFiles/APMS2.dir/QueuePriority.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/QueuePriority.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/QueuePriority.cpp -o CMakeFiles/APMS2.dir/QueuePriority.cpp.s

CMakeFiles/APMS2.dir/Searchable.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/Searchable.cpp.o: ../Searchable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/APMS2.dir/Searchable.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/Searchable.cpp.o -c /home/guy/CLionProjects/APMS2/Searchable.cpp

CMakeFiles/APMS2.dir/Searchable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/Searchable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/Searchable.cpp > CMakeFiles/APMS2.dir/Searchable.cpp.i

CMakeFiles/APMS2.dir/Searchable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/Searchable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/Searchable.cpp -o CMakeFiles/APMS2.dir/Searchable.cpp.s

CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o: ../SearchableforMatrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o -c /home/guy/CLionProjects/APMS2/SearchableforMatrix.cpp

CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/SearchableforMatrix.cpp > CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.i

CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/SearchableforMatrix.cpp -o CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.s

CMakeFiles/APMS2.dir/MatrixHandler.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/MatrixHandler.cpp.o: ../MatrixHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/APMS2.dir/MatrixHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/MatrixHandler.cpp.o -c /home/guy/CLionProjects/APMS2/MatrixHandler.cpp

CMakeFiles/APMS2.dir/MatrixHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/MatrixHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/MatrixHandler.cpp > CMakeFiles/APMS2.dir/MatrixHandler.cpp.i

CMakeFiles/APMS2.dir/MatrixHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/MatrixHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/MatrixHandler.cpp -o CMakeFiles/APMS2.dir/MatrixHandler.cpp.s

CMakeFiles/APMS2.dir/mtxSolver.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/mtxSolver.cpp.o: ../mtxSolver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/APMS2.dir/mtxSolver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/mtxSolver.cpp.o -c /home/guy/CLionProjects/APMS2/mtxSolver.cpp

CMakeFiles/APMS2.dir/mtxSolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/mtxSolver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/mtxSolver.cpp > CMakeFiles/APMS2.dir/mtxSolver.cpp.i

CMakeFiles/APMS2.dir/mtxSolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/mtxSolver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/mtxSolver.cpp -o CMakeFiles/APMS2.dir/mtxSolver.cpp.s

CMakeFiles/APMS2.dir/AlgoStack.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/AlgoStack.cpp.o: ../AlgoStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/APMS2.dir/AlgoStack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/AlgoStack.cpp.o -c /home/guy/CLionProjects/APMS2/AlgoStack.cpp

CMakeFiles/APMS2.dir/AlgoStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/AlgoStack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/AlgoStack.cpp > CMakeFiles/APMS2.dir/AlgoStack.cpp.i

CMakeFiles/APMS2.dir/AlgoStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/AlgoStack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/AlgoStack.cpp -o CMakeFiles/APMS2.dir/AlgoStack.cpp.s

CMakeFiles/APMS2.dir/AStar.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/AStar.cpp.o: ../AStar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/APMS2.dir/AStar.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/AStar.cpp.o -c /home/guy/CLionProjects/APMS2/AStar.cpp

CMakeFiles/APMS2.dir/AStar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/AStar.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/AStar.cpp > CMakeFiles/APMS2.dir/AStar.cpp.i

CMakeFiles/APMS2.dir/AStar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/AStar.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/AStar.cpp -o CMakeFiles/APMS2.dir/AStar.cpp.s

CMakeFiles/APMS2.dir/ParallelServer.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/ParallelServer.cpp.o: ../ParallelServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/APMS2.dir/ParallelServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/ParallelServer.cpp.o -c /home/guy/CLionProjects/APMS2/ParallelServer.cpp

CMakeFiles/APMS2.dir/ParallelServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/ParallelServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/guy/CLionProjects/APMS2/ParallelServer.cpp > CMakeFiles/APMS2.dir/ParallelServer.cpp.i

CMakeFiles/APMS2.dir/ParallelServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/ParallelServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/guy/CLionProjects/APMS2/ParallelServer.cpp -o CMakeFiles/APMS2.dir/ParallelServer.cpp.s

# Object files for target APMS2
APMS2_OBJECTS = \
"CMakeFiles/APMS2.dir/MySerialServer.cpp.o" \
"CMakeFiles/APMS2.dir/server_file.cpp.o" \
"CMakeFiles/APMS2.dir/ClientHandler.cpp.o" \
"CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o" \
"CMakeFiles/APMS2.dir/CacheManager.cpp.o" \
"CMakeFiles/APMS2.dir/Solver.cpp.o" \
"CMakeFiles/APMS2.dir/StringReverser.cpp.o" \
"CMakeFiles/APMS2.dir/boot_file.cpp.o" \
"CMakeFiles/APMS2.dir/main.cpp.o" \
"CMakeFiles/APMS2.dir/ISearcher.cpp.o" \
"CMakeFiles/APMS2.dir/State.cpp.o" \
"CMakeFiles/APMS2.dir/Searcher.cpp.o" \
"CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o" \
"CMakeFiles/APMS2.dir/QueuePriority.cpp.o" \
"CMakeFiles/APMS2.dir/Searchable.cpp.o" \
"CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o" \
"CMakeFiles/APMS2.dir/MatrixHandler.cpp.o" \
"CMakeFiles/APMS2.dir/mtxSolver.cpp.o" \
"CMakeFiles/APMS2.dir/AlgoStack.cpp.o" \
"CMakeFiles/APMS2.dir/AStar.cpp.o" \
"CMakeFiles/APMS2.dir/ParallelServer.cpp.o"

# External object files for target APMS2
APMS2_EXTERNAL_OBJECTS =

APMS2: CMakeFiles/APMS2.dir/MySerialServer.cpp.o
APMS2: CMakeFiles/APMS2.dir/server_file.cpp.o
APMS2: CMakeFiles/APMS2.dir/ClientHandler.cpp.o
APMS2: CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o
APMS2: CMakeFiles/APMS2.dir/CacheManager.cpp.o
APMS2: CMakeFiles/APMS2.dir/Solver.cpp.o
APMS2: CMakeFiles/APMS2.dir/StringReverser.cpp.o
APMS2: CMakeFiles/APMS2.dir/boot_file.cpp.o
APMS2: CMakeFiles/APMS2.dir/main.cpp.o
APMS2: CMakeFiles/APMS2.dir/ISearcher.cpp.o
APMS2: CMakeFiles/APMS2.dir/State.cpp.o
APMS2: CMakeFiles/APMS2.dir/Searcher.cpp.o
APMS2: CMakeFiles/APMS2.dir/BestFirstSeracher.cpp.o
APMS2: CMakeFiles/APMS2.dir/QueuePriority.cpp.o
APMS2: CMakeFiles/APMS2.dir/Searchable.cpp.o
APMS2: CMakeFiles/APMS2.dir/SearchableforMatrix.cpp.o
APMS2: CMakeFiles/APMS2.dir/MatrixHandler.cpp.o
APMS2: CMakeFiles/APMS2.dir/mtxSolver.cpp.o
APMS2: CMakeFiles/APMS2.dir/AlgoStack.cpp.o
APMS2: CMakeFiles/APMS2.dir/AStar.cpp.o
APMS2: CMakeFiles/APMS2.dir/ParallelServer.cpp.o
APMS2: CMakeFiles/APMS2.dir/build.make
APMS2: CMakeFiles/APMS2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Linking CXX executable APMS2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/APMS2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/APMS2.dir/build: APMS2

.PHONY : CMakeFiles/APMS2.dir/build

CMakeFiles/APMS2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/APMS2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/APMS2.dir/clean

CMakeFiles/APMS2.dir/depend:
	cd /home/guy/CLionProjects/APMS2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/guy/CLionProjects/APMS2 /home/guy/CLionProjects/APMS2 /home/guy/CLionProjects/APMS2/cmake-build-debug /home/guy/CLionProjects/APMS2/cmake-build-debug /home/guy/CLionProjects/APMS2/cmake-build-debug/CMakeFiles/APMS2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/APMS2.dir/depend

