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
include CMakeFiles/ToninhoTrocador.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ToninhoTrocador.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ToninhoTrocador.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ToninhoTrocador.dir/flags.make

CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj: CMakeFiles/ToninhoTrocador.dir/flags.make
CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj: C:/Users/08184638132/Documents/uft/algorithms/apps/toninho_trocador.c
CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj: CMakeFiles/ToninhoTrocador.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj -MF CMakeFiles\ToninhoTrocador.dir\apps\toninho_trocador.c.obj.d -o CMakeFiles\ToninhoTrocador.dir\apps\toninho_trocador.c.obj -c C:\Users\08184638132\Documents\uft\algorithms\apps\toninho_trocador.c

CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\08184638132\Documents\uft\algorithms\apps\toninho_trocador.c > CMakeFiles\ToninhoTrocador.dir\apps\toninho_trocador.c.i

CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\08184638132\Documents\uft\algorithms\apps\toninho_trocador.c -o CMakeFiles\ToninhoTrocador.dir\apps\toninho_trocador.c.s

# Object files for target ToninhoTrocador
ToninhoTrocador_OBJECTS = \
"CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj"

# External object files for target ToninhoTrocador
ToninhoTrocador_EXTERNAL_OBJECTS =

ToninhoTrocador.exe: CMakeFiles/ToninhoTrocador.dir/apps/toninho_trocador.c.obj
ToninhoTrocador.exe: CMakeFiles/ToninhoTrocador.dir/build.make
ToninhoTrocador.exe: libToninhoTrocadorLib.a
ToninhoTrocador.exe: CMakeFiles/ToninhoTrocador.dir/linkLibs.rsp
ToninhoTrocador.exe: CMakeFiles/ToninhoTrocador.dir/objects1.rsp
ToninhoTrocador.exe: CMakeFiles/ToninhoTrocador.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ToninhoTrocador.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ToninhoTrocador.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ToninhoTrocador.dir/build: ToninhoTrocador.exe
.PHONY : CMakeFiles/ToninhoTrocador.dir/build

CMakeFiles/ToninhoTrocador.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ToninhoTrocador.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ToninhoTrocador.dir/clean

CMakeFiles/ToninhoTrocador.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug C:\Users\08184638132\Documents\uft\algorithms\cmake-build-debug\CMakeFiles\ToninhoTrocador.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ToninhoTrocador.dir/depend

