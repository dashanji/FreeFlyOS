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
include kernel/vga/CMakeFiles/vga.dir/depend.make

# Include the progress variables for this target.
include kernel/vga/CMakeFiles/vga.dir/progress.make

# Include the compile flags for this target's objects.
include kernel/vga/CMakeFiles/vga.dir/flags.make

kernel/vga/CMakeFiles/vga.dir/vga.c.o: kernel/vga/CMakeFiles/vga.dir/flags.make
kernel/vga/CMakeFiles/vga.dir/vga.c.o: ../kernel/vga/vga.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/caoy/Desktop/FreeFlyOS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object kernel/vga/CMakeFiles/vga.dir/vga.c.o"
	cd /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga && /usr/local/bin/x86_64-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/vga.dir/vga.c.o   -c /Users/caoy/Desktop/FreeFlyOS/kernel/vga/vga.c

kernel/vga/CMakeFiles/vga.dir/vga.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vga.dir/vga.c.i"
	cd /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga && /usr/local/bin/x86_64-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/caoy/Desktop/FreeFlyOS/kernel/vga/vga.c > CMakeFiles/vga.dir/vga.c.i

kernel/vga/CMakeFiles/vga.dir/vga.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vga.dir/vga.c.s"
	cd /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga && /usr/local/bin/x86_64-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/caoy/Desktop/FreeFlyOS/kernel/vga/vga.c -o CMakeFiles/vga.dir/vga.c.s

vga: kernel/vga/CMakeFiles/vga.dir/vga.c.o
vga: kernel/vga/CMakeFiles/vga.dir/build.make

.PHONY : vga

# Rule to build all files generated by this target.
kernel/vga/CMakeFiles/vga.dir/build: vga

.PHONY : kernel/vga/CMakeFiles/vga.dir/build

kernel/vga/CMakeFiles/vga.dir/clean:
	cd /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga && $(CMAKE_COMMAND) -P CMakeFiles/vga.dir/cmake_clean.cmake
.PHONY : kernel/vga/CMakeFiles/vga.dir/clean

kernel/vga/CMakeFiles/vga.dir/depend:
	cd /Users/caoy/Desktop/FreeFlyOS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caoy/Desktop/FreeFlyOS /Users/caoy/Desktop/FreeFlyOS/kernel/vga /Users/caoy/Desktop/FreeFlyOS/build /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga /Users/caoy/Desktop/FreeFlyOS/build/kernel/vga/CMakeFiles/vga.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kernel/vga/CMakeFiles/vga.dir/depend
