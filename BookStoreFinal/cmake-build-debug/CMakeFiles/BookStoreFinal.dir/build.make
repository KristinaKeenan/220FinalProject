# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BookStoreFinal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BookStoreFinal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BookStoreFinal.dir/flags.make

CMakeFiles/BookStoreFinal.dir/main.cpp.o: CMakeFiles/BookStoreFinal.dir/flags.make
CMakeFiles/BookStoreFinal.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BookStoreFinal.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BookStoreFinal.dir/main.cpp.o -c /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/main.cpp

CMakeFiles/BookStoreFinal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookStoreFinal.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/main.cpp > CMakeFiles/BookStoreFinal.dir/main.cpp.i

CMakeFiles/BookStoreFinal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookStoreFinal.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/main.cpp -o CMakeFiles/BookStoreFinal.dir/main.cpp.s

CMakeFiles/BookStoreFinal.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BookStoreFinal.dir/main.cpp.o.requires

CMakeFiles/BookStoreFinal.dir/main.cpp.o.provides: CMakeFiles/BookStoreFinal.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BookStoreFinal.dir/build.make CMakeFiles/BookStoreFinal.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BookStoreFinal.dir/main.cpp.o.provides

CMakeFiles/BookStoreFinal.dir/main.cpp.o.provides.build: CMakeFiles/BookStoreFinal.dir/main.cpp.o


CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o: CMakeFiles/BookStoreFinal.dir/flags.make
CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o: ../Inventory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o -c /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Inventory.cpp

CMakeFiles/BookStoreFinal.dir/Inventory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookStoreFinal.dir/Inventory.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Inventory.cpp > CMakeFiles/BookStoreFinal.dir/Inventory.cpp.i

CMakeFiles/BookStoreFinal.dir/Inventory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookStoreFinal.dir/Inventory.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Inventory.cpp -o CMakeFiles/BookStoreFinal.dir/Inventory.cpp.s

CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.requires:

.PHONY : CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.requires

CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.provides: CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.requires
	$(MAKE) -f CMakeFiles/BookStoreFinal.dir/build.make CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.provides.build
.PHONY : CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.provides

CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.provides.build: CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o


CMakeFiles/BookStoreFinal.dir/Book.cpp.o: CMakeFiles/BookStoreFinal.dir/flags.make
CMakeFiles/BookStoreFinal.dir/Book.cpp.o: ../Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BookStoreFinal.dir/Book.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BookStoreFinal.dir/Book.cpp.o -c /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Book.cpp

CMakeFiles/BookStoreFinal.dir/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookStoreFinal.dir/Book.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Book.cpp > CMakeFiles/BookStoreFinal.dir/Book.cpp.i

CMakeFiles/BookStoreFinal.dir/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookStoreFinal.dir/Book.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/Book.cpp -o CMakeFiles/BookStoreFinal.dir/Book.cpp.s

CMakeFiles/BookStoreFinal.dir/Book.cpp.o.requires:

.PHONY : CMakeFiles/BookStoreFinal.dir/Book.cpp.o.requires

CMakeFiles/BookStoreFinal.dir/Book.cpp.o.provides: CMakeFiles/BookStoreFinal.dir/Book.cpp.o.requires
	$(MAKE) -f CMakeFiles/BookStoreFinal.dir/build.make CMakeFiles/BookStoreFinal.dir/Book.cpp.o.provides.build
.PHONY : CMakeFiles/BookStoreFinal.dir/Book.cpp.o.provides

CMakeFiles/BookStoreFinal.dir/Book.cpp.o.provides.build: CMakeFiles/BookStoreFinal.dir/Book.cpp.o


CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o: CMakeFiles/BookStoreFinal.dir/flags.make
CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o: ../WaitList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o -c /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/WaitList.cpp

CMakeFiles/BookStoreFinal.dir/WaitList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BookStoreFinal.dir/WaitList.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/WaitList.cpp > CMakeFiles/BookStoreFinal.dir/WaitList.cpp.i

CMakeFiles/BookStoreFinal.dir/WaitList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BookStoreFinal.dir/WaitList.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/WaitList.cpp -o CMakeFiles/BookStoreFinal.dir/WaitList.cpp.s

CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.requires:

.PHONY : CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.requires

CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.provides: CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.requires
	$(MAKE) -f CMakeFiles/BookStoreFinal.dir/build.make CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.provides.build
.PHONY : CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.provides

CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.provides.build: CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o


# Object files for target BookStoreFinal
BookStoreFinal_OBJECTS = \
"CMakeFiles/BookStoreFinal.dir/main.cpp.o" \
"CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o" \
"CMakeFiles/BookStoreFinal.dir/Book.cpp.o" \
"CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o"

# External object files for target BookStoreFinal
BookStoreFinal_EXTERNAL_OBJECTS =

BookStoreFinal: CMakeFiles/BookStoreFinal.dir/main.cpp.o
BookStoreFinal: CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o
BookStoreFinal: CMakeFiles/BookStoreFinal.dir/Book.cpp.o
BookStoreFinal: CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o
BookStoreFinal: CMakeFiles/BookStoreFinal.dir/build.make
BookStoreFinal: CMakeFiles/BookStoreFinal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable BookStoreFinal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BookStoreFinal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BookStoreFinal.dir/build: BookStoreFinal

.PHONY : CMakeFiles/BookStoreFinal.dir/build

CMakeFiles/BookStoreFinal.dir/requires: CMakeFiles/BookStoreFinal.dir/main.cpp.o.requires
CMakeFiles/BookStoreFinal.dir/requires: CMakeFiles/BookStoreFinal.dir/Inventory.cpp.o.requires
CMakeFiles/BookStoreFinal.dir/requires: CMakeFiles/BookStoreFinal.dir/Book.cpp.o.requires
CMakeFiles/BookStoreFinal.dir/requires: CMakeFiles/BookStoreFinal.dir/WaitList.cpp.o.requires

.PHONY : CMakeFiles/BookStoreFinal.dir/requires

CMakeFiles/BookStoreFinal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BookStoreFinal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BookStoreFinal.dir/clean

CMakeFiles/BookStoreFinal.dir/depend:
	cd /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug /Users/kriskee23/Desktop/220FinalProject/BookStoreFinal/cmake-build-debug/CMakeFiles/BookStoreFinal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BookStoreFinal.dir/depend

