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
CMAKE_COMMAND = /home/amittulman/Desktop/clion-2019.2.5/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/amittulman/Desktop/clion-2019.2.5/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amittulman/Desktop/APMS2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amittulman/Desktop/APMS2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/APMS2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/APMS2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/APMS2.dir/flags.make

CMakeFiles/APMS2.dir/MySerialServer.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/MySerialServer.cpp.o: ../MySerialServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/APMS2.dir/MySerialServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/MySerialServer.cpp.o -c /home/amittulman/Desktop/APMS2/MySerialServer.cpp

CMakeFiles/APMS2.dir/MySerialServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/MySerialServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/MySerialServer.cpp > CMakeFiles/APMS2.dir/MySerialServer.cpp.i

CMakeFiles/APMS2.dir/MySerialServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/MySerialServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/MySerialServer.cpp -o CMakeFiles/APMS2.dir/MySerialServer.cpp.s

CMakeFiles/APMS2.dir/server_file.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/server_file.cpp.o: ../server_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/APMS2.dir/server_file.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/server_file.cpp.o -c /home/amittulman/Desktop/APMS2/server_file.cpp

CMakeFiles/APMS2.dir/server_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/server_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/server_file.cpp > CMakeFiles/APMS2.dir/server_file.cpp.i

CMakeFiles/APMS2.dir/server_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/server_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/server_file.cpp -o CMakeFiles/APMS2.dir/server_file.cpp.s

CMakeFiles/APMS2.dir/ClientHandler.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/ClientHandler.cpp.o: ../ClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/APMS2.dir/ClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/ClientHandler.cpp.o -c /home/amittulman/Desktop/APMS2/ClientHandler.cpp

CMakeFiles/APMS2.dir/ClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/ClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/ClientHandler.cpp > CMakeFiles/APMS2.dir/ClientHandler.cpp.i

CMakeFiles/APMS2.dir/ClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/ClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/ClientHandler.cpp -o CMakeFiles/APMS2.dir/ClientHandler.cpp.s

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o: ../MyTestClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o -c /home/amittulman/Desktop/APMS2/MyTestClientHandler.cpp

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/MyTestClientHandler.cpp > CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.i

CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/MyTestClientHandler.cpp -o CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.s

CMakeFiles/APMS2.dir/CacheManager.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/CacheManager.cpp.o: ../CacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/APMS2.dir/CacheManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/CacheManager.cpp.o -c /home/amittulman/Desktop/APMS2/CacheManager.cpp

CMakeFiles/APMS2.dir/CacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/CacheManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/CacheManager.cpp > CMakeFiles/APMS2.dir/CacheManager.cpp.i

CMakeFiles/APMS2.dir/CacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/CacheManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/CacheManager.cpp -o CMakeFiles/APMS2.dir/CacheManager.cpp.s

CMakeFiles/APMS2.dir/FileCacheManager.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/FileCacheManager.cpp.o: ../FileCacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/APMS2.dir/FileCacheManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/FileCacheManager.cpp.o -c /home/amittulman/Desktop/APMS2/FileCacheManager.cpp

CMakeFiles/APMS2.dir/FileCacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/FileCacheManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/FileCacheManager.cpp > CMakeFiles/APMS2.dir/FileCacheManager.cpp.i

CMakeFiles/APMS2.dir/FileCacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/FileCacheManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/FileCacheManager.cpp -o CMakeFiles/APMS2.dir/FileCacheManager.cpp.s

CMakeFiles/APMS2.dir/Solver.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/Solver.cpp.o: ../Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/APMS2.dir/Solver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/Solver.cpp.o -c /home/amittulman/Desktop/APMS2/Solver.cpp

CMakeFiles/APMS2.dir/Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/Solver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/Solver.cpp > CMakeFiles/APMS2.dir/Solver.cpp.i

CMakeFiles/APMS2.dir/Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/Solver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/Solver.cpp -o CMakeFiles/APMS2.dir/Solver.cpp.s

CMakeFiles/APMS2.dir/StringReverser.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/StringReverser.cpp.o: ../StringReverser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/APMS2.dir/StringReverser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/StringReverser.cpp.o -c /home/amittulman/Desktop/APMS2/StringReverser.cpp

CMakeFiles/APMS2.dir/StringReverser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/StringReverser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/StringReverser.cpp > CMakeFiles/APMS2.dir/StringReverser.cpp.i

CMakeFiles/APMS2.dir/StringReverser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/StringReverser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/StringReverser.cpp -o CMakeFiles/APMS2.dir/StringReverser.cpp.s

CMakeFiles/APMS2.dir/boot_file.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/boot_file.cpp.o: ../boot_file.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/APMS2.dir/boot_file.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/boot_file.cpp.o -c /home/amittulman/Desktop/APMS2/boot_file.cpp

CMakeFiles/APMS2.dir/boot_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/boot_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/boot_file.cpp > CMakeFiles/APMS2.dir/boot_file.cpp.i

CMakeFiles/APMS2.dir/boot_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/boot_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/boot_file.cpp -o CMakeFiles/APMS2.dir/boot_file.cpp.s

CMakeFiles/APMS2.dir/main.cpp.o: CMakeFiles/APMS2.dir/flags.make
CMakeFiles/APMS2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/APMS2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APMS2.dir/main.cpp.o -c /home/amittulman/Desktop/APMS2/main.cpp

CMakeFiles/APMS2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APMS2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amittulman/Desktop/APMS2/main.cpp > CMakeFiles/APMS2.dir/main.cpp.i

CMakeFiles/APMS2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APMS2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amittulman/Desktop/APMS2/main.cpp -o CMakeFiles/APMS2.dir/main.cpp.s

# Object files for target APMS2
APMS2_OBJECTS = \
"CMakeFiles/APMS2.dir/MySerialServer.cpp.o" \
"CMakeFiles/APMS2.dir/server_file.cpp.o" \
"CMakeFiles/APMS2.dir/ClientHandler.cpp.o" \
"CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o" \
"CMakeFiles/APMS2.dir/CacheManager.cpp.o" \
"CMakeFiles/APMS2.dir/FileCacheManager.cpp.o" \
"CMakeFiles/APMS2.dir/Solver.cpp.o" \
"CMakeFiles/APMS2.dir/StringReverser.cpp.o" \
"CMakeFiles/APMS2.dir/boot_file.cpp.o" \
"CMakeFiles/APMS2.dir/main.cpp.o"

# External object files for target APMS2
APMS2_EXTERNAL_OBJECTS =

APMS2: CMakeFiles/APMS2.dir/MySerialServer.cpp.o
APMS2: CMakeFiles/APMS2.dir/server_file.cpp.o
APMS2: CMakeFiles/APMS2.dir/ClientHandler.cpp.o
APMS2: CMakeFiles/APMS2.dir/MyTestClientHandler.cpp.o
APMS2: CMakeFiles/APMS2.dir/CacheManager.cpp.o
APMS2: CMakeFiles/APMS2.dir/FileCacheManager.cpp.o
APMS2: CMakeFiles/APMS2.dir/Solver.cpp.o
APMS2: CMakeFiles/APMS2.dir/StringReverser.cpp.o
APMS2: CMakeFiles/APMS2.dir/boot_file.cpp.o
APMS2: CMakeFiles/APMS2.dir/main.cpp.o
APMS2: CMakeFiles/APMS2.dir/build.make
APMS2: CMakeFiles/APMS2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable APMS2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/APMS2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/APMS2.dir/build: APMS2

.PHONY : CMakeFiles/APMS2.dir/build

CMakeFiles/APMS2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/APMS2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/APMS2.dir/clean

CMakeFiles/APMS2.dir/depend:
	cd /home/amittulman/Desktop/APMS2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amittulman/Desktop/APMS2 /home/amittulman/Desktop/APMS2 /home/amittulman/Desktop/APMS2/cmake-build-debug /home/amittulman/Desktop/APMS2/cmake-build-debug /home/amittulman/Desktop/APMS2/cmake-build-debug/CMakeFiles/APMS2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/APMS2.dir/depend

