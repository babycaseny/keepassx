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
include tests/CMakeFiles/testautotype.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testautotype.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testautotype.dir/flags.make

tests/moc_TestAutoType.cxx: ../tests/TestAutoType.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestAutoType.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestAutoType.cxx_parameters

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o: tests/CMakeFiles/testautotype.dir/flags.make
tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o: ../tests/TestAutoType.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testautotype.dir/TestAutoType.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestAutoType.cpp

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testautotype.dir/TestAutoType.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestAutoType.cpp > CMakeFiles/testautotype.dir/TestAutoType.cpp.i

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testautotype.dir/TestAutoType.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestAutoType.cpp -o CMakeFiles/testautotype.dir/TestAutoType.cpp.s

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.requires:
.PHONY : tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.requires

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.provides: tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testautotype.dir/build.make tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.provides

tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.provides.build: tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o: tests/CMakeFiles/testautotype.dir/flags.make
tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o: tests/moc_TestAutoType.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestAutoType.cxx

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestAutoType.cxx > CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.i

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestAutoType.cxx -o CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.s

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.requires:
.PHONY : tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.requires

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.provides: tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testautotype.dir/build.make tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.provides

tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.provides.build: tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o

# Object files for target testautotype
testautotype_OBJECTS = \
"CMakeFiles/testautotype.dir/TestAutoType.cpp.o" \
"CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o"

# External object files for target testautotype
testautotype_EXTERNAL_OBJECTS =

tests/testautotype: tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o
tests/testautotype: tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o
tests/testautotype: tests/CMakeFiles/testautotype.dir/build.make
tests/testautotype: src/libkeepassx_core.a
tests/testautotype: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testautotype: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testautotype: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testautotype: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testautotype: /usr/lib/x86_64-linux-gnu/libz.so
tests/testautotype: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testautotype: tests/CMakeFiles/testautotype.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testautotype"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testautotype.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testautotype.dir/build: tests/testautotype
.PHONY : tests/CMakeFiles/testautotype.dir/build

tests/CMakeFiles/testautotype.dir/requires: tests/CMakeFiles/testautotype.dir/TestAutoType.cpp.o.requires
tests/CMakeFiles/testautotype.dir/requires: tests/CMakeFiles/testautotype.dir/moc_TestAutoType.cxx.o.requires
.PHONY : tests/CMakeFiles/testautotype.dir/requires

tests/CMakeFiles/testautotype.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testautotype.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testautotype.dir/clean

tests/CMakeFiles/testautotype.dir/depend: tests/moc_TestAutoType.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testautotype.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testautotype.dir/depend

