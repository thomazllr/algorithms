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
include CMakeFiles/Stack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Stack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack.dir/flags.make

CMakeFiles/Stack.dir/apps/stack_app.c.obj: CMakeFiles/Stack.dir/flags.make
CMakeFiles/Stack.dir/apps/stack_app.c.obj: C:/Users/08184638132/Documents/uft/algorithms/apps/stack_app.c
CMakeFiles/Stack.dir/apps/stack_app.c.obj: CMakeFiles/Stack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Stack.dir/apps/stack_app.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Stack.dir/apps/stack_app.c.obj -MF CMakeFiles\Stack.dir\apps\stack_app.c.obj.d -o CMakeFiles\Stack.dir\apps\stack_app.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\apps\stack_app.c

CMakeFiles/Stack.dir/apps/stack_app.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Stack.dir/apps/stack_app.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\apps\stack_app.c > CMakeFiles\Stack.dir\apps\stack_app.c.i

CMakeFiles/Stack.dir/apps/stack_app.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Stack.dir/apps/stack_app.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\apps\stack_app.c -o CMakeFiles\Stack.dir\apps\stack_app.c.s

# Object files for target Stack
Stack_OBJECTS = \
"CMakeFiles/Stack.dir/apps/stack_app.c.obj"

# External object files for target Stack
Stack_EXTERNAL_OBJECTS =

Stack.exe: CMakeFiles/Stack.dir/apps/stack_app.c.obj
Stack.exe: CMakeFiles/Stack.dir/build.make
Stack.exe: libStackLib.a
Stack.exe: CMakeFiles/Stack.dir/linkLibs.rsp
Stack.exe: CMakeFiles/Stack.dir/objects1.rsp
Stack.exe: CMakeFiles/Stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack.dir/build: Stack.exe
.PHONY : CMakeFiles/Stack.dir/build

CMakeFiles/Stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Stack.dir/clean

CMakeFiles/Stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles\Stack.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Stack.dir/depend

