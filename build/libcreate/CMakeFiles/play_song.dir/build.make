# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shiozaki/ros2/src/libcreate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shiozaki/ros2/build/libcreate

# Include any dependencies generated for this target.
include CMakeFiles/play_song.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/play_song.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/play_song.dir/flags.make

CMakeFiles/play_song.dir/examples/play_song.cpp.o: CMakeFiles/play_song.dir/flags.make
CMakeFiles/play_song.dir/examples/play_song.cpp.o: /home/shiozaki/ros2/src/libcreate/examples/play_song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shiozaki/ros2/build/libcreate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/play_song.dir/examples/play_song.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/play_song.dir/examples/play_song.cpp.o -c /home/shiozaki/ros2/src/libcreate/examples/play_song.cpp

CMakeFiles/play_song.dir/examples/play_song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/play_song.dir/examples/play_song.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shiozaki/ros2/src/libcreate/examples/play_song.cpp > CMakeFiles/play_song.dir/examples/play_song.cpp.i

CMakeFiles/play_song.dir/examples/play_song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/play_song.dir/examples/play_song.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shiozaki/ros2/src/libcreate/examples/play_song.cpp -o CMakeFiles/play_song.dir/examples/play_song.cpp.s

CMakeFiles/play_song.dir/examples/play_song.cpp.o.requires:

.PHONY : CMakeFiles/play_song.dir/examples/play_song.cpp.o.requires

CMakeFiles/play_song.dir/examples/play_song.cpp.o.provides: CMakeFiles/play_song.dir/examples/play_song.cpp.o.requires
	$(MAKE) -f CMakeFiles/play_song.dir/build.make CMakeFiles/play_song.dir/examples/play_song.cpp.o.provides.build
.PHONY : CMakeFiles/play_song.dir/examples/play_song.cpp.o.provides

CMakeFiles/play_song.dir/examples/play_song.cpp.o.provides.build: CMakeFiles/play_song.dir/examples/play_song.cpp.o


# Object files for target play_song
play_song_OBJECTS = \
"CMakeFiles/play_song.dir/examples/play_song.cpp.o"

# External object files for target play_song
play_song_EXTERNAL_OBJECTS =

play_song: CMakeFiles/play_song.dir/examples/play_song.cpp.o
play_song: CMakeFiles/play_song.dir/build.make
play_song: /usr/lib/x86_64-linux-gnu/libboost_system.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_thread.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
play_song: /usr/lib/x86_64-linux-gnu/libpthread.so
play_song: libcreate.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_system.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_thread.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
play_song: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
play_song: /usr/lib/x86_64-linux-gnu/libpthread.so
play_song: CMakeFiles/play_song.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shiozaki/ros2/build/libcreate/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable play_song"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/play_song.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/play_song.dir/build: play_song

.PHONY : CMakeFiles/play_song.dir/build

CMakeFiles/play_song.dir/requires: CMakeFiles/play_song.dir/examples/play_song.cpp.o.requires

.PHONY : CMakeFiles/play_song.dir/requires

CMakeFiles/play_song.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/play_song.dir/cmake_clean.cmake
.PHONY : CMakeFiles/play_song.dir/clean

CMakeFiles/play_song.dir/depend:
	cd /home/shiozaki/ros2/build/libcreate && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shiozaki/ros2/src/libcreate /home/shiozaki/ros2/src/libcreate /home/shiozaki/ros2/build/libcreate /home/shiozaki/ros2/build/libcreate /home/shiozaki/ros2/build/libcreate/CMakeFiles/play_song.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/play_song.dir/depend
