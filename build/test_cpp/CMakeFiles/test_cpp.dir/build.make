# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/caoy/Desktop/FreeFlyOS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/caoy/Desktop/FreeFlyOS/build

# Include any dependencies generated for this target.
include test_cpp/CMakeFiles/test_cpp.dir/depend.make

# Include the progress variables for this target.
include test_cpp/CMakeFiles/test_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include test_cpp/CMakeFiles/test_cpp.dir/flags.make

test_cpp/CMakeFiles/test_cpp.dir/test.cpp.o: test_cpp/CMakeFiles/test_cpp.dir/flags.make
test_cpp/CMakeFiles/test_cpp.dir/test.cpp.o: ../test_cpp/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/caoy/Desktop/FreeFlyOS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test_cpp/CMakeFiles/test_cpp.dir/test.cpp.o"
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_cpp && /usr/local/bin/x86_64-elf-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_cpp.dir/test.cpp.o -c /Users/caoy/Desktop/FreeFlyOS/test_cpp/test.cpp

test_cpp/CMakeFiles/test_cpp.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_cpp.dir/test.cpp.i"
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_cpp && /usr/local/bin/x86_64-elf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/caoy/Desktop/FreeFlyOS/test_cpp/test.cpp > CMakeFiles/test_cpp.dir/test.cpp.i

test_cpp/CMakeFiles/test_cpp.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_cpp.dir/test.cpp.s"
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_cpp && /usr/local/bin/x86_64-elf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/caoy/Desktop/FreeFlyOS/test_cpp/test.cpp -o CMakeFiles/test_cpp.dir/test.cpp.s

test_cpp: test_cpp/CMakeFiles/test_cpp.dir/test.cpp.o
test_cpp: test_cpp/CMakeFiles/test_cpp.dir/build.make

.PHONY : test_cpp

# Rule to build all files generated by this target.
test_cpp/CMakeFiles/test_cpp.dir/build: test_cpp

.PHONY : test_cpp/CMakeFiles/test_cpp.dir/build

test_cpp/CMakeFiles/test_cpp.dir/clean:
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_cpp && $(CMAKE_COMMAND) -P CMakeFiles/test_cpp.dir/cmake_clean.cmake
.PHONY : test_cpp/CMakeFiles/test_cpp.dir/clean

test_cpp/CMakeFiles/test_cpp.dir/depend:
	cd /Users/caoy/Desktop/FreeFlyOS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caoy/Desktop/FreeFlyOS /Users/caoy/Desktop/FreeFlyOS/test_cpp /Users/caoy/Desktop/FreeFlyOS/build /Users/caoy/Desktop/FreeFlyOS/build/test_cpp /Users/caoy/Desktop/FreeFlyOS/build/test_cpp/CMakeFiles/test_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test_cpp/CMakeFiles/test_cpp.dir/depend
