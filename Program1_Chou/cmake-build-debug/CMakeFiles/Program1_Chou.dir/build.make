# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/tmp.4TZpAZZ1jL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.4TZpAZZ1jL/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Program1_Chou.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Program1_Chou.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program1_Chou.dir/flags.make

CMakeFiles/Program1_Chou.dir/main.cpp.o: CMakeFiles/Program1_Chou.dir/flags.make
CMakeFiles/Program1_Chou.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /tmp/tmp.4TZpAZZ1jL/cmake-build-debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Program1_Chou.dir/main.cpp.o"
	/usr/local/es7/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Program1_Chou.dir/main.cpp.o -c /tmp/tmp.4TZpAZZ1jL/main.cpp

CMakeFiles/Program1_Chou.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program1_Chou.dir/main.cpp.i"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /tmp/tmp.4TZpAZZ1jL/main.cpp > CMakeFiles/Program1_Chou.dir/main.cpp.i

CMakeFiles/Program1_Chou.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program1_Chou.dir/main.cpp.s"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /tmp/tmp.4TZpAZZ1jL/main.cpp -o CMakeFiles/Program1_Chou.dir/main.cpp.s

CMakeFiles/Program1_Chou.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/Program1_Chou.dir/main.cpp.o.requires

CMakeFiles/Program1_Chou.dir/main.cpp.o.provides: CMakeFiles/Program1_Chou.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Program1_Chou.dir/build.make CMakeFiles/Program1_Chou.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Program1_Chou.dir/main.cpp.o.provides

CMakeFiles/Program1_Chou.dir/main.cpp.o.provides.build: CMakeFiles/Program1_Chou.dir/main.cpp.o

# Object files for target Program1_Chou
Program1_Chou_OBJECTS = \
"CMakeFiles/Program1_Chou.dir/main.cpp.o"

# External object files for target Program1_Chou
Program1_Chou_EXTERNAL_OBJECTS =

Program1_Chou: CMakeFiles/Program1_Chou.dir/main.cpp.o
Program1_Chou: CMakeFiles/Program1_Chou.dir/build.make
Program1_Chou: CMakeFiles/Program1_Chou.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Program1_Chou"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program1_Chou.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program1_Chou.dir/build: Program1_Chou
.PHONY : CMakeFiles/Program1_Chou.dir/build

CMakeFiles/Program1_Chou.dir/requires: CMakeFiles/Program1_Chou.dir/main.cpp.o.requires
.PHONY : CMakeFiles/Program1_Chou.dir/requires

CMakeFiles/Program1_Chou.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program1_Chou.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program1_Chou.dir/clean

CMakeFiles/Program1_Chou.dir/depend:
	cd /tmp/tmp.4TZpAZZ1jL/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.4TZpAZZ1jL /tmp/tmp.4TZpAZZ1jL /tmp/tmp.4TZpAZZ1jL/cmake-build-debug /tmp/tmp.4TZpAZZ1jL/cmake-build-debug /tmp/tmp.4TZpAZZ1jL/cmake-build-debug/CMakeFiles/Program1_Chou.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program1_Chou.dir/depend

