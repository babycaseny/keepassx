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
include tests/CMakeFiles/testmodified.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testmodified.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testmodified.dir/flags.make

tests/moc_TestModified.cxx: ../tests/TestModified.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestModified.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestModified.cxx_parameters

tests/CMakeFiles/testmodified.dir/TestModified.cpp.o: tests/CMakeFiles/testmodified.dir/flags.make
tests/CMakeFiles/testmodified.dir/TestModified.cpp.o: ../tests/TestModified.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testmodified.dir/TestModified.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testmodified.dir/TestModified.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestModified.cpp

tests/CMakeFiles/testmodified.dir/TestModified.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testmodified.dir/TestModified.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestModified.cpp > CMakeFiles/testmodified.dir/TestModified.cpp.i

tests/CMakeFiles/testmodified.dir/TestModified.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testmodified.dir/TestModified.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestModified.cpp -o CMakeFiles/testmodified.dir/TestModified.cpp.s

tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.requires:
.PHONY : tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.requires

tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.provides: tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testmodified.dir/build.make tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.provides

tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.provides.build: tests/CMakeFiles/testmodified.dir/TestModified.cpp.o

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o: tests/CMakeFiles/testmodified.dir/flags.make
tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o: tests/moc_TestModified.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testmodified.dir/moc_TestModified.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestModified.cxx

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testmodified.dir/moc_TestModified.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestModified.cxx > CMakeFiles/testmodified.dir/moc_TestModified.cxx.i

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testmodified.dir/moc_TestModified.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestModified.cxx -o CMakeFiles/testmodified.dir/moc_TestModified.cxx.s

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.requires:
.PHONY : tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.requires

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.provides: tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testmodified.dir/build.make tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.provides

tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.provides.build: tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o

# Object files for target testmodified
testmodified_OBJECTS = \
"CMakeFiles/testmodified.dir/TestModified.cpp.o" \
"CMakeFiles/testmodified.dir/moc_TestModified.cxx.o"

# External object files for target testmodified
testmodified_EXTERNAL_OBJECTS =

tests/testmodified: tests/CMakeFiles/testmodified.dir/TestModified.cpp.o
tests/testmodified: tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o
tests/testmodified: tests/CMakeFiles/testmodified.dir/build.make
tests/testmodified: src/libkeepassx_core.a
tests/testmodified: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testmodified: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testmodified: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testmodified: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testmodified: /usr/lib/x86_64-linux-gnu/libz.so
tests/testmodified: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testmodified: tests/CMakeFiles/testmodified.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testmodified"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testmodified.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testmodified.dir/build: tests/testmodified
.PHONY : tests/CMakeFiles/testmodified.dir/build

tests/CMakeFiles/testmodified.dir/requires: tests/CMakeFiles/testmodified.dir/TestModified.cpp.o.requires
tests/CMakeFiles/testmodified.dir/requires: tests/CMakeFiles/testmodified.dir/moc_TestModified.cxx.o.requires
.PHONY : tests/CMakeFiles/testmodified.dir/requires

tests/CMakeFiles/testmodified.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testmodified.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testmodified.dir/clean

tests/CMakeFiles/testmodified.dir/depend: tests/moc_TestModified.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testmodified.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testmodified.dir/depend
