# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/development/src/github.com/journeyman32/tinyc_apps

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/tinyc_apps.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tinyc_apps.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tinyc_apps.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tinyc_apps.dir/flags.make

CMakeFiles/tinyc_apps.dir/nato02.c.o: CMakeFiles/tinyc_apps.dir/flags.make
CMakeFiles/tinyc_apps.dir/nato02.c.o: ../nato02.c
CMakeFiles/tinyc_apps.dir/nato02.c.o: CMakeFiles/tinyc_apps.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/tinyc_apps.dir/nato02.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/tinyc_apps.dir/nato02.c.o -MF CMakeFiles/tinyc_apps.dir/nato02.c.o.d -o CMakeFiles/tinyc_apps.dir/nato02.c.o -c /mnt/d/development/src/github.com/journeyman32/tinyc_apps/nato02.c

CMakeFiles/tinyc_apps.dir/nato02.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tinyc_apps.dir/nato02.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/development/src/github.com/journeyman32/tinyc_apps/nato02.c > CMakeFiles/tinyc_apps.dir/nato02.c.i

CMakeFiles/tinyc_apps.dir/nato02.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tinyc_apps.dir/nato02.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/development/src/github.com/journeyman32/tinyc_apps/nato02.c -o CMakeFiles/tinyc_apps.dir/nato02.c.s

# Object files for target tinyc_apps
tinyc_apps_OBJECTS = \
"CMakeFiles/tinyc_apps.dir/nato02.c.o"

# External object files for target tinyc_apps
tinyc_apps_EXTERNAL_OBJECTS =

tinyc_apps: CMakeFiles/tinyc_apps.dir/nato02.c.o
tinyc_apps: CMakeFiles/tinyc_apps.dir/build.make
tinyc_apps: CMakeFiles/tinyc_apps.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable tinyc_apps"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tinyc_apps.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tinyc_apps.dir/build: tinyc_apps
.PHONY : CMakeFiles/tinyc_apps.dir/build

CMakeFiles/tinyc_apps.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tinyc_apps.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tinyc_apps.dir/clean

CMakeFiles/tinyc_apps.dir/depend:
	cd /mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/development/src/github.com/journeyman32/tinyc_apps /mnt/d/development/src/github.com/journeyman32/tinyc_apps /mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl /mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl /mnt/d/development/src/github.com/journeyman32/tinyc_apps/cmake-build-debug-wsl/CMakeFiles/tinyc_apps.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tinyc_apps.dir/depend

