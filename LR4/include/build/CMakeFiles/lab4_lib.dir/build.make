# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.30.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.30.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aleksejbrancev/Documents/studies/OOP/LR4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aleksejbrancev/Documents/studies/OOP/LR4/build

# Include any dependencies generated for this target.
include CMakeFiles/lab4_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab4_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab4_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab4_lib.dir/flags.make

CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o: CMakeFiles/lab4_lib.dir/flags.make
CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rectangle.cpp
CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o: CMakeFiles/lab4_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o -MF CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o.d -o CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rectangle.cpp

CMakeFiles/lab4_lib.dir/src/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab4_lib.dir/src/rectangle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rectangle.cpp > CMakeFiles/lab4_lib.dir/src/rectangle.cpp.i

CMakeFiles/lab4_lib.dir/src/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab4_lib.dir/src/rectangle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rectangle.cpp -o CMakeFiles/lab4_lib.dir/src/rectangle.cpp.s

CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o: CMakeFiles/lab4_lib.dir/flags.make
CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rhombus.cpp
CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o: CMakeFiles/lab4_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o -MF CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o.d -o CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rhombus.cpp

CMakeFiles/lab4_lib.dir/src/rhombus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab4_lib.dir/src/rhombus.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rhombus.cpp > CMakeFiles/lab4_lib.dir/src/rhombus.cpp.i

CMakeFiles/lab4_lib.dir/src/rhombus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab4_lib.dir/src/rhombus.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/rhombus.cpp -o CMakeFiles/lab4_lib.dir/src/rhombus.cpp.s

CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o: CMakeFiles/lab4_lib.dir/flags.make
CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/trapezoid.cpp
CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o: CMakeFiles/lab4_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o -MF CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o.d -o CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/trapezoid.cpp

CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/trapezoid.cpp > CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.i

CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR4/src/trapezoid.cpp -o CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.s

# Object files for target lab4_lib
lab4_lib_OBJECTS = \
"CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o" \
"CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o" \
"CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o"

# External object files for target lab4_lib
lab4_lib_EXTERNAL_OBJECTS =

liblab4_lib.a: CMakeFiles/lab4_lib.dir/src/rectangle.cpp.o
liblab4_lib.a: CMakeFiles/lab4_lib.dir/src/rhombus.cpp.o
liblab4_lib.a: CMakeFiles/lab4_lib.dir/src/trapezoid.cpp.o
liblab4_lib.a: CMakeFiles/lab4_lib.dir/build.make
liblab4_lib.a: CMakeFiles/lab4_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library liblab4_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lab4_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab4_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab4_lib.dir/build: liblab4_lib.a
.PHONY : CMakeFiles/lab4_lib.dir/build

CMakeFiles/lab4_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab4_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab4_lib.dir/clean

CMakeFiles/lab4_lib.dir/depend:
	cd /Users/aleksejbrancev/Documents/studies/OOP/LR4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aleksejbrancev/Documents/studies/OOP/LR4 /Users/aleksejbrancev/Documents/studies/OOP/LR4 /Users/aleksejbrancev/Documents/studies/OOP/LR4/build /Users/aleksejbrancev/Documents/studies/OOP/LR4/build /Users/aleksejbrancev/Documents/studies/OOP/LR4/build/CMakeFiles/lab4_lib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lab4_lib.dir/depend
