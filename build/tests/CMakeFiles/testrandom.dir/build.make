# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/tom/Desktop/Development/keepassx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tom/Desktop/Development/keepassx/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/testrandom.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testrandom.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testrandom.dir/flags.make

tests/moc_TestRandom.cxx: ../tests/TestRandom.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestRandom.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestRandom.cxx_parameters

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o: tests/CMakeFiles/testrandom.dir/flags.make
tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o: ../tests/TestRandom.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testrandom.dir/TestRandom.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestRandom.cpp

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrandom.dir/TestRandom.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestRandom.cpp > CMakeFiles/testrandom.dir/TestRandom.cpp.i

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrandom.dir/TestRandom.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestRandom.cpp -o CMakeFiles/testrandom.dir/TestRandom.cpp.s

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.requires:
.PHONY : tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.requires

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.provides: tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testrandom.dir/build.make tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.provides

tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.provides.build: tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o: tests/CMakeFiles/testrandom.dir/flags.make
tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o: tests/moc_TestRandom.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestRandom.cxx

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testrandom.dir/moc_TestRandom.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestRandom.cxx > CMakeFiles/testrandom.dir/moc_TestRandom.cxx.i

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testrandom.dir/moc_TestRandom.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestRandom.cxx -o CMakeFiles/testrandom.dir/moc_TestRandom.cxx.s

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.requires:
.PHONY : tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.requires

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.provides: tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testrandom.dir/build.make tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.provides

tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.provides.build: tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o

# Object files for target testrandom
testrandom_OBJECTS = \
"CMakeFiles/testrandom.dir/TestRandom.cpp.o" \
"CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o"

# External object files for target testrandom
testrandom_EXTERNAL_OBJECTS =

tests/testrandom: tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o
tests/testrandom: tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o
tests/testrandom: tests/CMakeFiles/testrandom.dir/build.make
tests/testrandom: src/libkeepassx_core.a
tests/testrandom: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testrandom: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testrandom: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testrandom: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testrandom: /usr/lib/x86_64-linux-gnu/libz.so
tests/testrandom: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testrandom: tests/CMakeFiles/testrandom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testrandom"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testrandom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testrandom.dir/build: tests/testrandom
.PHONY : tests/CMakeFiles/testrandom.dir/build

tests/CMakeFiles/testrandom.dir/requires: tests/CMakeFiles/testrandom.dir/TestRandom.cpp.o.requires
tests/CMakeFiles/testrandom.dir/requires: tests/CMakeFiles/testrandom.dir/moc_TestRandom.cxx.o.requires
.PHONY : tests/CMakeFiles/testrandom.dir/requires

tests/CMakeFiles/testrandom.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testrandom.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testrandom.dir/clean

tests/CMakeFiles/testrandom.dir/depend: tests/moc_TestRandom.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testrandom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testrandom.dir/depend

