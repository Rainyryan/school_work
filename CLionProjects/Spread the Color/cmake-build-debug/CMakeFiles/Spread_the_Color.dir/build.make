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
CMAKE_SOURCE_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Spread_the_Color.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Spread_the_Color.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Spread_the_Color.dir/flags.make

CMakeFiles/Spread_the_Color.dir/main.c.obj: CMakeFiles/Spread_the_Color.dir/flags.make
CMakeFiles/Spread_the_Color.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Spread_the_Color.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Spread_the_Color.dir\main.c.obj   -c "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\main.c"

CMakeFiles/Spread_the_Color.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Spread_the_Color.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\main.c" > CMakeFiles\Spread_the_Color.dir\main.c.i

CMakeFiles/Spread_the_Color.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Spread_the_Color.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\main.c" -o CMakeFiles\Spread_the_Color.dir\main.c.s

# Object files for target Spread_the_Color
Spread_the_Color_OBJECTS = \
"CMakeFiles/Spread_the_Color.dir/main.c.obj"

# External object files for target Spread_the_Color
Spread_the_Color_EXTERNAL_OBJECTS =

Spread_the_Color.exe: CMakeFiles/Spread_the_Color.dir/main.c.obj
Spread_the_Color.exe: CMakeFiles/Spread_the_Color.dir/build.make
Spread_the_Color.exe: CMakeFiles/Spread_the_Color.dir/linklibs.rsp
Spread_the_Color.exe: CMakeFiles/Spread_the_Color.dir/objects1.rsp
Spread_the_Color.exe: CMakeFiles/Spread_the_Color.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Spread_the_Color.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Spread_the_Color.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Spread_the_Color.dir/build: Spread_the_Color.exe

.PHONY : CMakeFiles/Spread_the_Color.dir/build

CMakeFiles/Spread_the_Color.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Spread_the_Color.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Spread_the_Color.dir/clean

CMakeFiles/Spread_the_Color.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color" "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color" "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Spread the Color\cmake-build-debug\CMakeFiles\Spread_the_Color.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Spread_the_Color.dir/depend

