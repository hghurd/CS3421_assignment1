# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /snap/clion/206/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/206/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hghurd/CLionProjects/CS3421_assignment1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Assignment1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment1.dir/flags.make

CMakeFiles/Assignment1.dir/cpu.c.o: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/cpu.c.o: ../cpu.c
CMakeFiles/Assignment1.dir/cpu.c.o: CMakeFiles/Assignment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment1.dir/cpu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Assignment1.dir/cpu.c.o -MF CMakeFiles/Assignment1.dir/cpu.c.o.d -o CMakeFiles/Assignment1.dir/cpu.c.o -c /home/hghurd/CLionProjects/CS3421_assignment1/cpu.c

CMakeFiles/Assignment1.dir/cpu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment1.dir/cpu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hghurd/CLionProjects/CS3421_assignment1/cpu.c > CMakeFiles/Assignment1.dir/cpu.c.i

CMakeFiles/Assignment1.dir/cpu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment1.dir/cpu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hghurd/CLionProjects/CS3421_assignment1/cpu.c -o CMakeFiles/Assignment1.dir/cpu.c.s

CMakeFiles/Assignment1.dir/memory.c.o: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/memory.c.o: ../memory.c
CMakeFiles/Assignment1.dir/memory.c.o: CMakeFiles/Assignment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Assignment1.dir/memory.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Assignment1.dir/memory.c.o -MF CMakeFiles/Assignment1.dir/memory.c.o.d -o CMakeFiles/Assignment1.dir/memory.c.o -c /home/hghurd/CLionProjects/CS3421_assignment1/memory.c

CMakeFiles/Assignment1.dir/memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment1.dir/memory.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hghurd/CLionProjects/CS3421_assignment1/memory.c > CMakeFiles/Assignment1.dir/memory.c.i

CMakeFiles/Assignment1.dir/memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment1.dir/memory.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hghurd/CLionProjects/CS3421_assignment1/memory.c -o CMakeFiles/Assignment1.dir/memory.c.s

CMakeFiles/Assignment1.dir/clock.c.o: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/clock.c.o: ../clock.c
CMakeFiles/Assignment1.dir/clock.c.o: CMakeFiles/Assignment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Assignment1.dir/clock.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Assignment1.dir/clock.c.o -MF CMakeFiles/Assignment1.dir/clock.c.o.d -o CMakeFiles/Assignment1.dir/clock.c.o -c /home/hghurd/CLionProjects/CS3421_assignment1/clock.c

CMakeFiles/Assignment1.dir/clock.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment1.dir/clock.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hghurd/CLionProjects/CS3421_assignment1/clock.c > CMakeFiles/Assignment1.dir/clock.c.i

CMakeFiles/Assignment1.dir/clock.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment1.dir/clock.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hghurd/CLionProjects/CS3421_assignment1/clock.c -o CMakeFiles/Assignment1.dir/clock.c.s

CMakeFiles/Assignment1.dir/cs3421_emul.c.o: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/cs3421_emul.c.o: ../cs3421_emul.c
CMakeFiles/Assignment1.dir/cs3421_emul.c.o: CMakeFiles/Assignment1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Assignment1.dir/cs3421_emul.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Assignment1.dir/cs3421_emul.c.o -MF CMakeFiles/Assignment1.dir/cs3421_emul.c.o.d -o CMakeFiles/Assignment1.dir/cs3421_emul.c.o -c /home/hghurd/CLionProjects/CS3421_assignment1/cs3421_emul.c

CMakeFiles/Assignment1.dir/cs3421_emul.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment1.dir/cs3421_emul.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hghurd/CLionProjects/CS3421_assignment1/cs3421_emul.c > CMakeFiles/Assignment1.dir/cs3421_emul.c.i

CMakeFiles/Assignment1.dir/cs3421_emul.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment1.dir/cs3421_emul.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hghurd/CLionProjects/CS3421_assignment1/cs3421_emul.c -o CMakeFiles/Assignment1.dir/cs3421_emul.c.s

# Object files for target Assignment1
Assignment1_OBJECTS = \
"CMakeFiles/Assignment1.dir/cpu.c.o" \
"CMakeFiles/Assignment1.dir/memory.c.o" \
"CMakeFiles/Assignment1.dir/clock.c.o" \
"CMakeFiles/Assignment1.dir/cs3421_emul.c.o"

# External object files for target Assignment1
Assignment1_EXTERNAL_OBJECTS =

Assignment1: CMakeFiles/Assignment1.dir/cpu.c.o
Assignment1: CMakeFiles/Assignment1.dir/memory.c.o
Assignment1: CMakeFiles/Assignment1.dir/clock.c.o
Assignment1: CMakeFiles/Assignment1.dir/cs3421_emul.c.o
Assignment1: CMakeFiles/Assignment1.dir/build.make
Assignment1: CMakeFiles/Assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Assignment1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment1.dir/build: Assignment1
.PHONY : CMakeFiles/Assignment1.dir/build

CMakeFiles/Assignment1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment1.dir/clean

CMakeFiles/Assignment1.dir/depend:
	cd /home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hghurd/CLionProjects/CS3421_assignment1 /home/hghurd/CLionProjects/CS3421_assignment1 /home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug /home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug /home/hghurd/CLionProjects/CS3421_assignment1/cmake-build-debug/CMakeFiles/Assignment1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment1.dir/depend

