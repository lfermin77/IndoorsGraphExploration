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
CMAKE_SOURCE_DIR = /home/unizar/Program_Files/IndoorsGraphExploration

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/unizar/Program_Files/IndoorsGraphExploration/build

# Include any dependencies generated for this target.
include src/test/CMakeFiles/APITest.dir/depend.make

# Include the progress variables for this target.
include src/test/CMakeFiles/APITest.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/CMakeFiles/APITest.dir/flags.make

src/test/CMakeFiles/APITest.dir/main.cpp.o: src/test/CMakeFiles/APITest.dir/flags.make
src/test/CMakeFiles/APITest.dir/main.cpp.o: ../src/test/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/unizar/Program_Files/IndoorsGraphExploration/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/test/CMakeFiles/APITest.dir/main.cpp.o"
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/APITest.dir/main.cpp.o -c /home/unizar/Program_Files/IndoorsGraphExploration/src/test/main.cpp

src/test/CMakeFiles/APITest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APITest.dir/main.cpp.i"
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/unizar/Program_Files/IndoorsGraphExploration/src/test/main.cpp > CMakeFiles/APITest.dir/main.cpp.i

src/test/CMakeFiles/APITest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APITest.dir/main.cpp.s"
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/unizar/Program_Files/IndoorsGraphExploration/src/test/main.cpp -o CMakeFiles/APITest.dir/main.cpp.s

src/test/CMakeFiles/APITest.dir/main.cpp.o.requires:
.PHONY : src/test/CMakeFiles/APITest.dir/main.cpp.o.requires

src/test/CMakeFiles/APITest.dir/main.cpp.o.provides: src/test/CMakeFiles/APITest.dir/main.cpp.o.requires
	$(MAKE) -f src/test/CMakeFiles/APITest.dir/build.make src/test/CMakeFiles/APITest.dir/main.cpp.o.provides.build
.PHONY : src/test/CMakeFiles/APITest.dir/main.cpp.o.provides

src/test/CMakeFiles/APITest.dir/main.cpp.o.provides.build: src/test/CMakeFiles/APITest.dir/main.cpp.o

# Object files for target APITest
APITest_OBJECTS = \
"CMakeFiles/APITest.dir/main.cpp.o"

# External object files for target APITest
APITest_EXTERNAL_OBJECTS =

src/test/APITest: src/test/CMakeFiles/APITest.dir/main.cpp.o
src/test/APITest: src/test/CMakeFiles/APITest.dir/build.make
src/test/APITest: src/lib/libfloorplan.a
src/test/APITest: /usr/lib/x86_64-linux-gnu/libboost_graph.so
src/test/APITest: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
src/test/APITest: src/test/CMakeFiles/APITest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable APITest"
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/APITest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/CMakeFiles/APITest.dir/build: src/test/APITest
.PHONY : src/test/CMakeFiles/APITest.dir/build

src/test/CMakeFiles/APITest.dir/requires: src/test/CMakeFiles/APITest.dir/main.cpp.o.requires
.PHONY : src/test/CMakeFiles/APITest.dir/requires

src/test/CMakeFiles/APITest.dir/clean:
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test && $(CMAKE_COMMAND) -P CMakeFiles/APITest.dir/cmake_clean.cmake
.PHONY : src/test/CMakeFiles/APITest.dir/clean

src/test/CMakeFiles/APITest.dir/depend:
	cd /home/unizar/Program_Files/IndoorsGraphExploration/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/unizar/Program_Files/IndoorsGraphExploration /home/unizar/Program_Files/IndoorsGraphExploration/src/test /home/unizar/Program_Files/IndoorsGraphExploration/build /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test /home/unizar/Program_Files/IndoorsGraphExploration/build/src/test/CMakeFiles/APITest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/test/CMakeFiles/APITest.dir/depend

