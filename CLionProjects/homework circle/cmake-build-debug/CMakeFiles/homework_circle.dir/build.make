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
CMAKE_SOURCE_DIR = "E:\CLionProjects\homework circle"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\CLionProjects\homework circle\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/homework_circle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/homework_circle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework_circle.dir/flags.make

CMakeFiles/homework_circle.dir/main.c.obj: CMakeFiles/homework_circle.dir/flags.make
CMakeFiles/homework_circle.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\CLionProjects\homework circle\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/homework_circle.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\homework_circle.dir\main.c.obj   -c "E:\CLionProjects\homework circle\main.c"

CMakeFiles/homework_circle.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/homework_circle.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\CLionProjects\homework circle\main.c" > CMakeFiles\homework_circle.dir\main.c.i

CMakeFiles/homework_circle.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/homework_circle.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\CLionProjects\homework circle\main.c" -o CMakeFiles\homework_circle.dir\main.c.s

# Object files for target homework_circle
homework_circle_OBJECTS = \
"CMakeFiles/homework_circle.dir/main.c.obj"

# External object files for target homework_circle
homework_circle_EXTERNAL_OBJECTS =

homework_circle.exe: CMakeFiles/homework_circle.dir/main.c.obj
homework_circle.exe: CMakeFiles/homework_circle.dir/build.make
homework_circle.exe: CMakeFiles/homework_circle.dir/linklibs.rsp
homework_circle.exe: CMakeFiles/homework_circle.dir/objects1.rsp
homework_circle.exe: CMakeFiles/homework_circle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\CLionProjects\homework circle\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable homework_circle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework_circle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework_circle.dir/build: homework_circle.exe

.PHONY : CMakeFiles/homework_circle.dir/build

CMakeFiles/homework_circle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework_circle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework_circle.dir/clean

CMakeFiles/homework_circle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\CLionProjects\homework circle" "E:\CLionProjects\homework circle" "E:\CLionProjects\homework circle\cmake-build-debug" "E:\CLionProjects\homework circle\cmake-build-debug" "E:\CLionProjects\homework circle\cmake-build-debug\CMakeFiles\homework_circle.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/homework_circle.dir/depend

