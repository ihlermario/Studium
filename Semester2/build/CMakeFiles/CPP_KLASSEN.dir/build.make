# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/Studium/Semester2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/Studium/Semester2/build

# Include any dependencies generated for this target.
include CMakeFiles/CPP_KLASSEN.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CPP_KLASSEN.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CPP_KLASSEN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPP_KLASSEN.dir/flags.make

CMakeFiles/CPP_KLASSEN.dir/class.cpp.o: CMakeFiles/CPP_KLASSEN.dir/flags.make
CMakeFiles/CPP_KLASSEN.dir/class.cpp.o: /workspaces/Studium/Semester2/class.cpp
CMakeFiles/CPP_KLASSEN.dir/class.cpp.o: CMakeFiles/CPP_KLASSEN.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/Studium/Semester2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPP_KLASSEN.dir/class.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CPP_KLASSEN.dir/class.cpp.o -MF CMakeFiles/CPP_KLASSEN.dir/class.cpp.o.d -o CMakeFiles/CPP_KLASSEN.dir/class.cpp.o -c /workspaces/Studium/Semester2/class.cpp

CMakeFiles/CPP_KLASSEN.dir/class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPP_KLASSEN.dir/class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/Studium/Semester2/class.cpp > CMakeFiles/CPP_KLASSEN.dir/class.cpp.i

CMakeFiles/CPP_KLASSEN.dir/class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPP_KLASSEN.dir/class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/Studium/Semester2/class.cpp -o CMakeFiles/CPP_KLASSEN.dir/class.cpp.s

# Object files for target CPP_KLASSEN
CPP_KLASSEN_OBJECTS = \
"CMakeFiles/CPP_KLASSEN.dir/class.cpp.o"

# External object files for target CPP_KLASSEN
CPP_KLASSEN_EXTERNAL_OBJECTS =

CPP_KLASSEN: CMakeFiles/CPP_KLASSEN.dir/class.cpp.o
CPP_KLASSEN: CMakeFiles/CPP_KLASSEN.dir/build.make
CPP_KLASSEN: CMakeFiles/CPP_KLASSEN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/Studium/Semester2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPP_KLASSEN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPP_KLASSEN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPP_KLASSEN.dir/build: CPP_KLASSEN
.PHONY : CMakeFiles/CPP_KLASSEN.dir/build

CMakeFiles/CPP_KLASSEN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPP_KLASSEN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPP_KLASSEN.dir/clean

CMakeFiles/CPP_KLASSEN.dir/depend:
	cd /workspaces/Studium/Semester2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/Studium/Semester2 /workspaces/Studium/Semester2 /workspaces/Studium/Semester2/build /workspaces/Studium/Semester2/build /workspaces/Studium/Semester2/build/CMakeFiles/CPP_KLASSEN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPP_KLASSEN.dir/depend
