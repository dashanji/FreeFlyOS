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

# Utility rule file for exec_tar.

# Include the progress variables for this target.
include test_exec/CMakeFiles/exec_tar.dir/progress.make

test_exec/CMakeFiles/exec_tar: test_exec/exec


test_exec/exec:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/caoy/Desktop/FreeFlyOS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating exec"
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_exec && x86_64-elf-ld -T ../../test_exec/test.ld -m elf_i386 -e _start ../../build/kernel/user/CMakeFiles/user.dir/stdio.c.o ../../build/kernel/user/CMakeFiles/user.dir/user_syscall.c.o ../../build/test_exec/CMakeFiles/test_exec.dir/test.c.o ../../build/test_exec/CMakeFiles/test_exec.dir/start.S.o -o test_exec
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_exec && x86_64-elf-objdump -d test_exec > ../../disassembly/test_disass.md
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_exec && dd if=../test_exec/test_exec of=../../FreeFlyOS.img bs=512 count=30 seek=500 conv=notrunc

exec_tar: test_exec/CMakeFiles/exec_tar
exec_tar: test_exec/exec
exec_tar: test_exec/CMakeFiles/exec_tar.dir/build.make

.PHONY : exec_tar

# Rule to build all files generated by this target.
test_exec/CMakeFiles/exec_tar.dir/build: exec_tar

.PHONY : test_exec/CMakeFiles/exec_tar.dir/build

test_exec/CMakeFiles/exec_tar.dir/clean:
	cd /Users/caoy/Desktop/FreeFlyOS/build/test_exec && $(CMAKE_COMMAND) -P CMakeFiles/exec_tar.dir/cmake_clean.cmake
.PHONY : test_exec/CMakeFiles/exec_tar.dir/clean

test_exec/CMakeFiles/exec_tar.dir/depend:
	cd /Users/caoy/Desktop/FreeFlyOS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/caoy/Desktop/FreeFlyOS /Users/caoy/Desktop/FreeFlyOS/test_exec /Users/caoy/Desktop/FreeFlyOS/build /Users/caoy/Desktop/FreeFlyOS/build/test_exec /Users/caoy/Desktop/FreeFlyOS/build/test_exec/CMakeFiles/exec_tar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test_exec/CMakeFiles/exec_tar.dir/depend
