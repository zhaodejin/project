# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhaodein/workspace/project/c++新特性/2.decltype

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhaodein/workspace/project/c++新特性/2.decltype

# Include any dependencies generated for this target.
include CMakeFiles/c++.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c++.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c++.dir/flags.make

CMakeFiles/c++.dir/src/main.cpp.o: CMakeFiles/c++.dir/flags.make
CMakeFiles/c++.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhaodein/workspace/project/c++新特性/2.decltype/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c++.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c++.dir/src/main.cpp.o -c /home/zhaodein/workspace/project/c++新特性/2.decltype/src/main.cpp

CMakeFiles/c++.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c++.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhaodein/workspace/project/c++新特性/2.decltype/src/main.cpp > CMakeFiles/c++.dir/src/main.cpp.i

CMakeFiles/c++.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c++.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhaodein/workspace/project/c++新特性/2.decltype/src/main.cpp -o CMakeFiles/c++.dir/src/main.cpp.s

# Object files for target c++
c_______OBJECTS = \
"CMakeFiles/c++.dir/src/main.cpp.o"

# External object files for target c++
c_______EXTERNAL_OBJECTS =

c++: CMakeFiles/c++.dir/src/main.cpp.o
c++: CMakeFiles/c++.dir/build.make
c++: CMakeFiles/c++.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhaodein/workspace/project/c++新特性/2.decltype/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c++"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c++.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c++.dir/build: c++

.PHONY : CMakeFiles/c++.dir/build

CMakeFiles/c++.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c++.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c++.dir/clean

CMakeFiles/c++.dir/depend:
	cd /home/zhaodein/workspace/project/c++新特性/2.decltype && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhaodein/workspace/project/c++新特性/2.decltype /home/zhaodein/workspace/project/c++新特性/2.decltype /home/zhaodein/workspace/project/c++新特性/2.decltype /home/zhaodein/workspace/project/c++新特性/2.decltype /home/zhaodein/workspace/project/c++新特性/2.decltype/CMakeFiles/c++.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c++.dir/depend

