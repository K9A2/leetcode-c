# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/stormlin/program/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/stormlin/program/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/stormlin/project/leetcode-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stormlin/project/leetcode-c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode.dir/flags.make

CMakeFiles/leetcode.dir/main.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/leetcode.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/main.c.o   -c /home/stormlin/project/leetcode-c/main.c

CMakeFiles/leetcode.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/main.c > CMakeFiles/leetcode.dir/main.c.i

CMakeFiles/leetcode.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/main.c -o CMakeFiles/leetcode.dir/main.c.s

CMakeFiles/leetcode.dir/main.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/main.c.o.requires

CMakeFiles/leetcode.dir/main.c.o.provides: CMakeFiles/leetcode.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/main.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/main.c.o.provides

CMakeFiles/leetcode.dir/main.c.o.provides.build: CMakeFiles/leetcode.dir/main.c.o


CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o: ../BinaryTree/BinaryTree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o   -c /home/stormlin/project/leetcode-c/BinaryTree/BinaryTree.c

CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/BinaryTree/BinaryTree.c > CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.i

CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/BinaryTree/BinaryTree.c -o CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.s

CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.requires

CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.provides: CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.provides

CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.provides.build: CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o


CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o: ../LinkedList/LinkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o   -c /home/stormlin/project/leetcode-c/LinkedList/LinkedList.c

CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/LinkedList/LinkedList.c > CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.i

CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/LinkedList/LinkedList.c -o CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.s

CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.requires

CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.provides: CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.provides

CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.provides.build: CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o


CMakeFiles/leetcode.dir/HashMap/HashMap.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/HashMap/HashMap.c.o: ../HashMap/HashMap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/leetcode.dir/HashMap/HashMap.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/HashMap/HashMap.c.o   -c /home/stormlin/project/leetcode-c/HashMap/HashMap.c

CMakeFiles/leetcode.dir/HashMap/HashMap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/HashMap/HashMap.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/HashMap/HashMap.c > CMakeFiles/leetcode.dir/HashMap/HashMap.c.i

CMakeFiles/leetcode.dir/HashMap/HashMap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/HashMap/HashMap.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/HashMap/HashMap.c -o CMakeFiles/leetcode.dir/HashMap/HashMap.c.s

CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.requires

CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.provides: CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.provides

CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.provides.build: CMakeFiles/leetcode.dir/HashMap/HashMap.c.o


CMakeFiles/leetcode.dir/Util/Util.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/Util/Util.c.o: ../Util/Util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/leetcode.dir/Util/Util.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/Util/Util.c.o   -c /home/stormlin/project/leetcode-c/Util/Util.c

CMakeFiles/leetcode.dir/Util/Util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/Util/Util.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/Util/Util.c > CMakeFiles/leetcode.dir/Util/Util.c.i

CMakeFiles/leetcode.dir/Util/Util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/Util/Util.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/Util/Util.c -o CMakeFiles/leetcode.dir/Util/Util.c.s

CMakeFiles/leetcode.dir/Util/Util.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/Util/Util.c.o.requires

CMakeFiles/leetcode.dir/Util/Util.c.o.provides: CMakeFiles/leetcode.dir/Util/Util.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/Util/Util.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/Util/Util.c.o.provides

CMakeFiles/leetcode.dir/Util/Util.c.o.provides.build: CMakeFiles/leetcode.dir/Util/Util.c.o


CMakeFiles/leetcode.dir/Stack/Stack.c.o: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/Stack/Stack.c.o: ../Stack/Stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/leetcode.dir/Stack/Stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/leetcode.dir/Stack/Stack.c.o   -c /home/stormlin/project/leetcode-c/Stack/Stack.c

CMakeFiles/leetcode.dir/Stack/Stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/Stack/Stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/stormlin/project/leetcode-c/Stack/Stack.c > CMakeFiles/leetcode.dir/Stack/Stack.c.i

CMakeFiles/leetcode.dir/Stack/Stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/Stack/Stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/stormlin/project/leetcode-c/Stack/Stack.c -o CMakeFiles/leetcode.dir/Stack/Stack.c.s

CMakeFiles/leetcode.dir/Stack/Stack.c.o.requires:

.PHONY : CMakeFiles/leetcode.dir/Stack/Stack.c.o.requires

CMakeFiles/leetcode.dir/Stack/Stack.c.o.provides: CMakeFiles/leetcode.dir/Stack/Stack.c.o.requires
	$(MAKE) -f CMakeFiles/leetcode.dir/build.make CMakeFiles/leetcode.dir/Stack/Stack.c.o.provides.build
.PHONY : CMakeFiles/leetcode.dir/Stack/Stack.c.o.provides

CMakeFiles/leetcode.dir/Stack/Stack.c.o.provides.build: CMakeFiles/leetcode.dir/Stack/Stack.c.o


# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/main.c.o" \
"CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o" \
"CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o" \
"CMakeFiles/leetcode.dir/HashMap/HashMap.c.o" \
"CMakeFiles/leetcode.dir/Util/Util.c.o" \
"CMakeFiles/leetcode.dir/Stack/Stack.c.o"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

leetcode: CMakeFiles/leetcode.dir/main.c.o
leetcode: CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o
leetcode: CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o
leetcode: CMakeFiles/leetcode.dir/HashMap/HashMap.c.o
leetcode: CMakeFiles/leetcode.dir/Util/Util.c.o
leetcode: CMakeFiles/leetcode.dir/Stack/Stack.c.o
leetcode: CMakeFiles/leetcode.dir/build.make
leetcode: CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable leetcode"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode.dir/build: leetcode

.PHONY : CMakeFiles/leetcode.dir/build

CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/main.c.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/BinaryTree/BinaryTree.c.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/LinkedList/LinkedList.c.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/HashMap/HashMap.c.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/Util/Util.c.o.requires
CMakeFiles/leetcode.dir/requires: CMakeFiles/leetcode.dir/Stack/Stack.c.o.requires

.PHONY : CMakeFiles/leetcode.dir/requires

CMakeFiles/leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode.dir/clean

CMakeFiles/leetcode.dir/depend:
	cd /home/stormlin/project/leetcode-c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stormlin/project/leetcode-c /home/stormlin/project/leetcode-c /home/stormlin/project/leetcode-c/cmake-build-debug /home/stormlin/project/leetcode-c/cmake-build-debug /home/stormlin/project/leetcode-c/cmake-build-debug/CMakeFiles/leetcode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode.dir/depend

