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
include CMakeFiles/EDPilha.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EDPilha.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EDPilha.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EDPilha.dir/flags.make

CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj: CMakeFiles/EDPilha.dir/flags.make
CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj: C:/Users/08184638132/Documents/uft/algorithms/Stack/EDPilha/main.c
CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj: CMakeFiles/EDPilha.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj -MF CMakeFiles\EDPilha.dir\Stack\EDPilha\main.c.obj.d -o CMakeFiles\EDPilha.dir\Stack\EDPilha\main.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\main.c

CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\main.c > CMakeFiles\EDPilha.dir\Stack\EDPilha\main.c.i

CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\main.c -o CMakeFiles\EDPilha.dir\Stack\EDPilha\main.c.s

CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj: CMakeFiles/EDPilha.dir/flags.make
CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj: C:/Users/08184638132/Documents/uft/algorithms/Stack/EDPilha/Stack.c
CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj: CMakeFiles/EDPilha.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj -MF CMakeFiles\EDPilha.dir\Stack\EDPilha\Stack.c.obj.d -o CMakeFiles\EDPilha.dir\Stack\EDPilha\Stack.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\Stack.c

CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\Stack.c > CMakeFiles\EDPilha.dir\Stack\EDPilha\Stack.c.i

CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\Stack\EDPilha\Stack.c -o CMakeFiles\EDPilha.dir\Stack\EDPilha\Stack.c.s

CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj: CMakeFiles/EDPilha.dir/flags.make
CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj: C:/Users/08184638132/Documents/uft/algorithms/DoublyLinkedList/DoublyLinkedList.c
CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj: CMakeFiles/EDPilha.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj -MF CMakeFiles\EDPilha.dir\DoublyLinkedList\DoublyLinkedList.c.obj.d -o CMakeFiles\EDPilha.dir\DoublyLinkedList\DoublyLinkedList.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\DoublyLinkedList\DoublyLinkedList.c

CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\DoublyLinkedList\DoublyLinkedList.c > CMakeFiles\EDPilha.dir\DoublyLinkedList\DoublyLinkedList.c.i

CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\DoublyLinkedList\DoublyLinkedList.c -o CMakeFiles\EDPilha.dir\DoublyLinkedList\DoublyLinkedList.c.s

# Object files for target EDPilha
EDPilha_OBJECTS = \
"CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj" \
"CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj" \
"CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj"

# External object files for target EDPilha
EDPilha_EXTERNAL_OBJECTS =

EDPilha.exe: CMakeFiles/EDPilha.dir/Stack/EDPilha/main.c.obj
EDPilha.exe: CMakeFiles/EDPilha.dir/Stack/EDPilha/Stack.c.obj
EDPilha.exe: CMakeFiles/EDPilha.dir/DoublyLinkedList/DoublyLinkedList.c.obj
EDPilha.exe: CMakeFiles/EDPilha.dir/build.make
EDPilha.exe: CMakeFiles/EDPilha.dir/linkLibs.rsp
EDPilha.exe: CMakeFiles/EDPilha.dir/objects1.rsp
EDPilha.exe: CMakeFiles/EDPilha.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable EDPilha.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EDPilha.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EDPilha.dir/build: EDPilha.exe
.PHONY : CMakeFiles/EDPilha.dir/build

CMakeFiles/EDPilha.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EDPilha.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EDPilha.dir/clean

CMakeFiles/EDPilha.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles\EDPilha.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/EDPilha.dir/depend

