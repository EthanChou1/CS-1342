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
CMAKE_SOURCE_DIR = /tmp/tmp.T2CjsEYuAk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse

# Include any dependencies generated for this target.
include CMakeFiles/Program3_Chou.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Program3_Chou.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program3_Chou.dir/flags.make

CMakeFiles/Program3_Chou.dir/main.cpp.o: CMakeFiles/Program3_Chou.dir/flags.make
CMakeFiles/Program3_Chou.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Program3_Chou.dir/main.cpp.o"
	/usr/local/es7/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Program3_Chou.dir/main.cpp.o -c /tmp/tmp.T2CjsEYuAk/main.cpp

CMakeFiles/Program3_Chou.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program3_Chou.dir/main.cpp.i"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /tmp/tmp.T2CjsEYuAk/main.cpp > CMakeFiles/Program3_Chou.dir/main.cpp.i

CMakeFiles/Program3_Chou.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program3_Chou.dir/main.cpp.s"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /tmp/tmp.T2CjsEYuAk/main.cpp -o CMakeFiles/Program3_Chou.dir/main.cpp.s

CMakeFiles/Program3_Chou.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/Program3_Chou.dir/main.cpp.o.requires

CMakeFiles/Program3_Chou.dir/main.cpp.o.provides: CMakeFiles/Program3_Chou.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Program3_Chou.dir/build.make CMakeFiles/Program3_Chou.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Program3_Chou.dir/main.cpp.o.provides

CMakeFiles/Program3_Chou.dir/main.cpp.o.provides.build: CMakeFiles/Program3_Chou.dir/main.cpp.o

CMakeFiles/Program3_Chou.dir/Function.cpp.o: CMakeFiles/Program3_Chou.dir/flags.make
CMakeFiles/Program3_Chou.dir/Function.cpp.o: ../Function.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Program3_Chou.dir/Function.cpp.o"
	/usr/local/es7/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Program3_Chou.dir/Function.cpp.o -c /tmp/tmp.T2CjsEYuAk/Function.cpp

CMakeFiles/Program3_Chou.dir/Function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program3_Chou.dir/Function.cpp.i"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /tmp/tmp.T2CjsEYuAk/Function.cpp > CMakeFiles/Program3_Chou.dir/Function.cpp.i

CMakeFiles/Program3_Chou.dir/Function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program3_Chou.dir/Function.cpp.s"
	/usr/local/es7/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /tmp/tmp.T2CjsEYuAk/Function.cpp -o CMakeFiles/Program3_Chou.dir/Function.cpp.s

CMakeFiles/Program3_Chou.dir/Function.cpp.o.requires:
.PHONY : CMakeFiles/Program3_Chou.dir/Function.cpp.o.requires

CMakeFiles/Program3_Chou.dir/Function.cpp.o.provides: CMakeFiles/Program3_Chou.dir/Function.cpp.o.requires
	$(MAKE) -f CMakeFiles/Program3_Chou.dir/build.make CMakeFiles/Program3_Chou.dir/Function.cpp.o.provides.build
.PHONY : CMakeFiles/Program3_Chou.dir/Function.cpp.o.provides

CMakeFiles/Program3_Chou.dir/Function.cpp.o.provides.build: CMakeFiles/Program3_Chou.dir/Function.cpp.o

# Object files for target Program3_Chou
Program3_Chou_OBJECTS = \
"CMakeFiles/Program3_Chou.dir/main.cpp.o" \
"CMakeFiles/Program3_Chou.dir/Function.cpp.o"

# External object files for target Program3_Chou
Program3_Chou_EXTERNAL_OBJECTS =

Program3_Chou: CMakeFiles/Program3_Chou.dir/main.cpp.o
Program3_Chou: CMakeFiles/Program3_Chou.dir/Function.cpp.o
Program3_Chou: CMakeFiles/Program3_Chou.dir/build.make
Program3_Chou: CMakeFiles/Program3_Chou.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Program3_Chou"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program3_Chou.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program3_Chou.dir/build: Program3_Chou
.PHONY : CMakeFiles/Program3_Chou.dir/build

CMakeFiles/Program3_Chou.dir/requires: CMakeFiles/Program3_Chou.dir/main.cpp.o.requires
CMakeFiles/Program3_Chou.dir/requires: CMakeFiles/Program3_Chou.dir/Function.cpp.o.requires
.PHONY : CMakeFiles/Program3_Chou.dir/requires

CMakeFiles/Program3_Chou.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program3_Chou.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program3_Chou.dir/clean

CMakeFiles/Program3_Chou.dir/depend:
	cd /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.T2CjsEYuAk /tmp/tmp.T2CjsEYuAk /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse /tmp/tmp.T2CjsEYuAk/cmake-build-smu-genuse/CMakeFiles/Program3_Chou.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program3_Chou.dir/depend

