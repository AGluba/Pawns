# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/CLionProjects/projekcik/atom_sr_0830_07/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build

# Include any dependencies generated for this target.
include library/CMakeFiles/Library.dir/depend.make

# Include the progress variables for this target.
include library/CMakeFiles/Library.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/Library.dir/flags.make

library/CMakeFiles/Library.dir/src/model/Board.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Board.cpp.o: ../library/src/model/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/Library.dir/src/model/Board.cpp.o"
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/model/Board.cpp.o -c /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/library/src/model/Board.cpp

library/CMakeFiles/Library.dir/src/model/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Board.cpp.i"
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/library/src/model/Board.cpp > CMakeFiles/Library.dir/src/model/Board.cpp.i

library/CMakeFiles/Library.dir/src/model/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Board.cpp.s"
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/library/src/model/Board.cpp -o CMakeFiles/Library.dir/src/model/Board.cpp.s

# Object files for target Library
Library_OBJECTS = \
"CMakeFiles/Library.dir/src/model/Board.cpp.o"

# External object files for target Library
Library_EXTERNAL_OBJECTS =

library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Board.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/build.make
library/libLibrary.a: library/CMakeFiles/Library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLibrary.a"
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean_target.cmake
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/Library.dir/build: library/libLibrary.a

.PHONY : library/CMakeFiles/Library.dir/build

library/CMakeFiles/Library.dir/clean:
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/Library.dir/clean

library/CMakeFiles/Library.dir/depend:
	cd /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/CLionProjects/projekcik/atom_sr_0830_07/project /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/library /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library /home/student/CLionProjects/projekcik/atom_sr_0830_07/project/build/library/CMakeFiles/Library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/Library.dir/depend
