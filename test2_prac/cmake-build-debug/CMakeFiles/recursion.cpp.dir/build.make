# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/matthewfemia/Developer/NYU-Bridge/test2_prac

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/recursion.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/recursion.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recursion.cpp.dir/flags.make

CMakeFiles/recursion.cpp.dir/recursion.cpp.o: CMakeFiles/recursion.cpp.dir/flags.make
CMakeFiles/recursion.cpp.dir/recursion.cpp.o: ../recursion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recursion.cpp.dir/recursion.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/recursion.cpp.dir/recursion.cpp.o -c /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/recursion.cpp

CMakeFiles/recursion.cpp.dir/recursion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recursion.cpp.dir/recursion.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/recursion.cpp > CMakeFiles/recursion.cpp.dir/recursion.cpp.i

CMakeFiles/recursion.cpp.dir/recursion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recursion.cpp.dir/recursion.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/recursion.cpp -o CMakeFiles/recursion.cpp.dir/recursion.cpp.s

# Object files for target recursion.cpp
recursion_cpp_OBJECTS = \
"CMakeFiles/recursion.cpp.dir/recursion.cpp.o"

# External object files for target recursion.cpp
recursion_cpp_EXTERNAL_OBJECTS =

recursion.cpp: CMakeFiles/recursion.cpp.dir/recursion.cpp.o
recursion.cpp: CMakeFiles/recursion.cpp.dir/build.make
recursion.cpp: CMakeFiles/recursion.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable recursion.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/recursion.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recursion.cpp.dir/build: recursion.cpp

.PHONY : CMakeFiles/recursion.cpp.dir/build

CMakeFiles/recursion.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/recursion.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/recursion.cpp.dir/clean

CMakeFiles/recursion.cpp.dir/depend:
	cd /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthewfemia/Developer/NYU-Bridge/test2_prac /Users/matthewfemia/Developer/NYU-Bridge/test2_prac /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug /Users/matthewfemia/Developer/NYU-Bridge/test2_prac/cmake-build-debug/CMakeFiles/recursion.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recursion.cpp.dir/depend

