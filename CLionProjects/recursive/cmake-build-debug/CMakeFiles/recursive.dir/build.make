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
CMAKE_SOURCE_DIR = E:\GitHub\Coding-HWs\CLionProjects\recursive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/recursive.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/recursive.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recursive.dir/flags.make

CMakeFiles/recursive.dir/main.c.obj: CMakeFiles/recursive.dir/flags.make
CMakeFiles/recursive.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/recursive.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\recursive.dir\main.c.obj   -c E:\GitHub\Coding-HWs\CLionProjects\recursive\main.c

CMakeFiles/recursive.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/recursive.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\GitHub\Coding-HWs\CLionProjects\recursive\main.c > CMakeFiles\recursive.dir\main.c.i

CMakeFiles/recursive.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/recursive.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\GitHub\Coding-HWs\CLionProjects\recursive\main.c -o CMakeFiles\recursive.dir\main.c.s

# Object files for target recursive
recursive_OBJECTS = \
"CMakeFiles/recursive.dir/main.c.obj"

# External object files for target recursive
recursive_EXTERNAL_OBJECTS =

recursive.exe: CMakeFiles/recursive.dir/main.c.obj
recursive.exe: CMakeFiles/recursive.dir/build.make
recursive.exe: CMakeFiles/recursive.dir/linklibs.rsp
recursive.exe: CMakeFiles/recursive.dir/objects1.rsp
recursive.exe: CMakeFiles/recursive.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable recursive.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\recursive.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recursive.dir/build: recursive.exe

.PHONY : CMakeFiles/recursive.dir/build

CMakeFiles/recursive.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\recursive.dir\cmake_clean.cmake
.PHONY : CMakeFiles/recursive.dir/clean

CMakeFiles/recursive.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\Coding-HWs\CLionProjects\recursive E:\GitHub\Coding-HWs\CLionProjects\recursive E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug E:\GitHub\Coding-HWs\CLionProjects\recursive\cmake-build-debug\CMakeFiles\recursive.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recursive.dir/depend

