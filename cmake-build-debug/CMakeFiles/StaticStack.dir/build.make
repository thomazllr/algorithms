# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\08184638132\Documents\uft\algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StaticStack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StaticStack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StaticStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StaticStack.dir/flags.make

CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj: CMakeFiles/StaticStack.dir/flags.make
CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj: C:/Users/08184638132/Documents/uft/algorithms/apps/stack_stack_app.c
CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj: CMakeFiles/StaticStack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj -MF CMakeFiles\StaticStack.dir\apps\stack_stack_app.c.obj.d -o CMakeFiles\StaticStack.dir\apps\stack_stack_app.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\apps\stack_stack_app.c

CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\apps\stack_stack_app.c > CMakeFiles\StaticStack.dir\apps\stack_stack_app.c.i

CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\apps\stack_stack_app.c -o CMakeFiles\StaticStack.dir\apps\stack_stack_app.c.s

# Object files for target StaticStack
StaticStack_OBJECTS = \
"CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj"

# External object files for target StaticStack
StaticStack_EXTERNAL_OBJECTS =

StaticStack.exe: CMakeFiles/StaticStack.dir/apps/stack_stack_app.c.obj
StaticStack.exe: CMakeFiles/StaticStack.dir/build.make
StaticStack.exe: libStaticStackLib.a
StaticStack.exe: CMakeFiles/StaticStack.dir/linkLibs.rsp
StaticStack.exe: CMakeFiles/StaticStack.dir/objects1.rsp
StaticStack.exe: CMakeFiles/StaticStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable StaticStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StaticStack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StaticStack.dir/build: StaticStack.exe
.PHONY : CMakeFiles/StaticStack.dir/build

CMakeFiles/StaticStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StaticStack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StaticStack.dir/clean

CMakeFiles/StaticStack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles\StaticStack.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/StaticStack.dir/depend

