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
CMAKE_SOURCE_DIR = /Users/aleksejbrancev/Documents/studies/OOP/LR7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aleksejbrancev/Documents/studies/OOP/LR7/build

# Include any dependencies generated for this target.
include CMakeFiles/lab6_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lab6_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lab6_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab6_lib.dir/flags.make

CMakeFiles/lab6_lib.dir/src/dragon.cpp.o: CMakeFiles/lab6_lib.dir/flags.make
CMakeFiles/lab6_lib.dir/src/dragon.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/dragon.cpp
CMakeFiles/lab6_lib.dir/src/dragon.cpp.o: CMakeFiles/lab6_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab6_lib.dir/src/dragon.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab6_lib.dir/src/dragon.cpp.o -MF CMakeFiles/lab6_lib.dir/src/dragon.cpp.o.d -o CMakeFiles/lab6_lib.dir/src/dragon.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/dragon.cpp

CMakeFiles/lab6_lib.dir/src/dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab6_lib.dir/src/dragon.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/dragon.cpp > CMakeFiles/lab6_lib.dir/src/dragon.cpp.i

CMakeFiles/lab6_lib.dir/src/dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab6_lib.dir/src/dragon.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/dragon.cpp -o CMakeFiles/lab6_lib.dir/src/dragon.cpp.s

CMakeFiles/lab6_lib.dir/src/knight.cpp.o: CMakeFiles/lab6_lib.dir/flags.make
CMakeFiles/lab6_lib.dir/src/knight.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/knight.cpp
CMakeFiles/lab6_lib.dir/src/knight.cpp.o: CMakeFiles/lab6_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab6_lib.dir/src/knight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab6_lib.dir/src/knight.cpp.o -MF CMakeFiles/lab6_lib.dir/src/knight.cpp.o.d -o CMakeFiles/lab6_lib.dir/src/knight.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/knight.cpp

CMakeFiles/lab6_lib.dir/src/knight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab6_lib.dir/src/knight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/knight.cpp > CMakeFiles/lab6_lib.dir/src/knight.cpp.i

CMakeFiles/lab6_lib.dir/src/knight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab6_lib.dir/src/knight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/knight.cpp -o CMakeFiles/lab6_lib.dir/src/knight.cpp.s

CMakeFiles/lab6_lib.dir/src/npc.cpp.o: CMakeFiles/lab6_lib.dir/flags.make
CMakeFiles/lab6_lib.dir/src/npc.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/npc.cpp
CMakeFiles/lab6_lib.dir/src/npc.cpp.o: CMakeFiles/lab6_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab6_lib.dir/src/npc.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab6_lib.dir/src/npc.cpp.o -MF CMakeFiles/lab6_lib.dir/src/npc.cpp.o.d -o CMakeFiles/lab6_lib.dir/src/npc.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/npc.cpp

CMakeFiles/lab6_lib.dir/src/npc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab6_lib.dir/src/npc.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/npc.cpp > CMakeFiles/lab6_lib.dir/src/npc.cpp.i

CMakeFiles/lab6_lib.dir/src/npc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab6_lib.dir/src/npc.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/npc.cpp -o CMakeFiles/lab6_lib.dir/src/npc.cpp.s

CMakeFiles/lab6_lib.dir/src/pegas.cpp.o: CMakeFiles/lab6_lib.dir/flags.make
CMakeFiles/lab6_lib.dir/src/pegas.cpp.o: /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/pegas.cpp
CMakeFiles/lab6_lib.dir/src/pegas.cpp.o: CMakeFiles/lab6_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/lab6_lib.dir/src/pegas.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lab6_lib.dir/src/pegas.cpp.o -MF CMakeFiles/lab6_lib.dir/src/pegas.cpp.o.d -o CMakeFiles/lab6_lib.dir/src/pegas.cpp.o -c /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/pegas.cpp

CMakeFiles/lab6_lib.dir/src/pegas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/lab6_lib.dir/src/pegas.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/pegas.cpp > CMakeFiles/lab6_lib.dir/src/pegas.cpp.i

CMakeFiles/lab6_lib.dir/src/pegas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/lab6_lib.dir/src/pegas.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/aleksejbrancev/Documents/studies/OOP/LR7/src/pegas.cpp -o CMakeFiles/lab6_lib.dir/src/pegas.cpp.s

# Object files for target lab6_lib
lab6_lib_OBJECTS = \
"CMakeFiles/lab6_lib.dir/src/dragon.cpp.o" \
"CMakeFiles/lab6_lib.dir/src/knight.cpp.o" \
"CMakeFiles/lab6_lib.dir/src/npc.cpp.o" \
"CMakeFiles/lab6_lib.dir/src/pegas.cpp.o"

# External object files for target lab6_lib
lab6_lib_EXTERNAL_OBJECTS =

liblab6_lib.a: CMakeFiles/lab6_lib.dir/src/dragon.cpp.o
liblab6_lib.a: CMakeFiles/lab6_lib.dir/src/knight.cpp.o
liblab6_lib.a: CMakeFiles/lab6_lib.dir/src/npc.cpp.o
liblab6_lib.a: CMakeFiles/lab6_lib.dir/src/pegas.cpp.o
liblab6_lib.a: CMakeFiles/lab6_lib.dir/build.make
liblab6_lib.a: CMakeFiles/lab6_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library liblab6_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/lab6_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab6_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab6_lib.dir/build: liblab6_lib.a
.PHONY : CMakeFiles/lab6_lib.dir/build

CMakeFiles/lab6_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab6_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab6_lib.dir/clean

CMakeFiles/lab6_lib.dir/depend:
	cd /Users/aleksejbrancev/Documents/studies/OOP/LR7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aleksejbrancev/Documents/studies/OOP/LR7 /Users/aleksejbrancev/Documents/studies/OOP/LR7 /Users/aleksejbrancev/Documents/studies/OOP/LR7/build /Users/aleksejbrancev/Documents/studies/OOP/LR7/build /Users/aleksejbrancev/Documents/studies/OOP/LR7/build/CMakeFiles/lab6_lib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/lab6_lib.dir/depend

