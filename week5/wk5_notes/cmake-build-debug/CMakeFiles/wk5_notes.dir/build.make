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
CMAKE_SOURCE_DIR = /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/wk5_notes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/wk5_notes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wk5_notes.dir/flags.make

CMakeFiles/wk5_notes.dir/main.cpp.o: CMakeFiles/wk5_notes.dir/flags.make
CMakeFiles/wk5_notes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wk5_notes.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wk5_notes.dir/main.cpp.o -c /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/main.cpp

CMakeFiles/wk5_notes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wk5_notes.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/main.cpp > CMakeFiles/wk5_notes.dir/main.cpp.i

CMakeFiles/wk5_notes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wk5_notes.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/main.cpp -o CMakeFiles/wk5_notes.dir/main.cpp.s

# Object files for target wk5_notes
wk5_notes_OBJECTS = \
"CMakeFiles/wk5_notes.dir/main.cpp.o"

# External object files for target wk5_notes
wk5_notes_EXTERNAL_OBJECTS =

wk5_notes: CMakeFiles/wk5_notes.dir/main.cpp.o
wk5_notes: CMakeFiles/wk5_notes.dir/build.make
wk5_notes: CMakeFiles/wk5_notes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wk5_notes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wk5_notes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wk5_notes.dir/build: wk5_notes

.PHONY : CMakeFiles/wk5_notes.dir/build

CMakeFiles/wk5_notes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wk5_notes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wk5_notes.dir/clean

CMakeFiles/wk5_notes.dir/depend:
	cd /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug /Users/matthewfemia/Developer/NYU-Bridge/week5/wk5_notes/cmake-build-debug/CMakeFiles/wk5_notes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wk5_notes.dir/depend
