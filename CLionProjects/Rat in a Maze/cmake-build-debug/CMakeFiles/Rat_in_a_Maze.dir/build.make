# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Rat_in_a_Maze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Rat_in_a_Maze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rat_in_a_Maze.dir/flags.make

CMakeFiles/Rat_in_a_Maze.dir/main.c.obj: CMakeFiles/Rat_in_a_Maze.dir/flags.make
CMakeFiles/Rat_in_a_Maze.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Rat_in_a_Maze.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Rat_in_a_Maze.dir\main.c.obj   -c "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\main.c"

CMakeFiles/Rat_in_a_Maze.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rat_in_a_Maze.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\main.c" > CMakeFiles\Rat_in_a_Maze.dir\main.c.i

CMakeFiles/Rat_in_a_Maze.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rat_in_a_Maze.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\main.c" -o CMakeFiles\Rat_in_a_Maze.dir\main.c.s

# Object files for target Rat_in_a_Maze
Rat_in_a_Maze_OBJECTS = \
"CMakeFiles/Rat_in_a_Maze.dir/main.c.obj"

# External object files for target Rat_in_a_Maze
Rat_in_a_Maze_EXTERNAL_OBJECTS =

Rat_in_a_Maze.exe: CMakeFiles/Rat_in_a_Maze.dir/main.c.obj
Rat_in_a_Maze.exe: CMakeFiles/Rat_in_a_Maze.dir/build.make
Rat_in_a_Maze.exe: CMakeFiles/Rat_in_a_Maze.dir/linklibs.rsp
Rat_in_a_Maze.exe: CMakeFiles/Rat_in_a_Maze.dir/objects1.rsp
Rat_in_a_Maze.exe: CMakeFiles/Rat_in_a_Maze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Rat_in_a_Maze.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Rat_in_a_Maze.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rat_in_a_Maze.dir/build: Rat_in_a_Maze.exe

.PHONY : CMakeFiles/Rat_in_a_Maze.dir/build

CMakeFiles/Rat_in_a_Maze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Rat_in_a_Maze.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Rat_in_a_Maze.dir/clean

CMakeFiles/Rat_in_a_Maze.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze" "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze" "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Rat in a Maze\cmake-build-debug\CMakeFiles\Rat_in_a_Maze.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Rat_in_a_Maze.dir/depend
