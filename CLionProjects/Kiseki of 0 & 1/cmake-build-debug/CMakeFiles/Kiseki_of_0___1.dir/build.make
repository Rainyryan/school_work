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
CMAKE_SOURCE_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Kiseki_of_0___1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Kiseki_of_0___1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Kiseki_of_0___1.dir/flags.make

CMakeFiles/Kiseki_of_0___1.dir/main.c.obj: CMakeFiles/Kiseki_of_0___1.dir/flags.make
CMakeFiles/Kiseki_of_0___1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Kiseki_of_0___1.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Kiseki_of_0___1.dir\main.c.obj   -c "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\main.c"

CMakeFiles/Kiseki_of_0___1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Kiseki_of_0___1.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\main.c" > CMakeFiles\Kiseki_of_0___1.dir\main.c.i

CMakeFiles/Kiseki_of_0___1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Kiseki_of_0___1.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\main.c" -o CMakeFiles\Kiseki_of_0___1.dir\main.c.s

# Object files for target Kiseki_of_0___1
Kiseki_of_0___1_OBJECTS = \
"CMakeFiles/Kiseki_of_0___1.dir/main.c.obj"

# External object files for target Kiseki_of_0___1
Kiseki_of_0___1_EXTERNAL_OBJECTS =

Kiseki_of_0___1.exe: CMakeFiles/Kiseki_of_0___1.dir/main.c.obj
Kiseki_of_0___1.exe: CMakeFiles/Kiseki_of_0___1.dir/build.make
Kiseki_of_0___1.exe: CMakeFiles/Kiseki_of_0___1.dir/linklibs.rsp
Kiseki_of_0___1.exe: CMakeFiles/Kiseki_of_0___1.dir/objects1.rsp
Kiseki_of_0___1.exe: CMakeFiles/Kiseki_of_0___1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Kiseki_of_0___1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Kiseki_of_0___1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Kiseki_of_0___1.dir/build: Kiseki_of_0___1.exe

.PHONY : CMakeFiles/Kiseki_of_0___1.dir/build

CMakeFiles/Kiseki_of_0___1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Kiseki_of_0___1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Kiseki_of_0___1.dir/clean

CMakeFiles/Kiseki_of_0___1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1" "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1" "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug" "E:\GitHub\Coding-HWs\CLionProjects\Kiseki of 0 & 1\cmake-build-debug\CMakeFiles\Kiseki_of_0___1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Kiseki_of_0___1.dir/depend
