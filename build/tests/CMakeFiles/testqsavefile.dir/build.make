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
include tests/CMakeFiles/testqsavefile.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testqsavefile.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testqsavefile.dir/flags.make

tests/moc_TestQSaveFile.cxx: ../tests/TestQSaveFile.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestQSaveFile.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestQSaveFile.cxx_parameters

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o: tests/CMakeFiles/testqsavefile.dir/flags.make
tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o: ../tests/TestQSaveFile.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestQSaveFile.cpp

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestQSaveFile.cpp > CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.i

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestQSaveFile.cpp -o CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.s

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.requires:
.PHONY : tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.requires

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.provides: tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testqsavefile.dir/build.make tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.provides

tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.provides.build: tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o: tests/CMakeFiles/testqsavefile.dir/flags.make
tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o: tests/moc_TestQSaveFile.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQSaveFile.cxx

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQSaveFile.cxx > CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.i

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQSaveFile.cxx -o CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.s

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.requires:
.PHONY : tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.requires

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.provides: tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testqsavefile.dir/build.make tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.provides

tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.provides.build: tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o

# Object files for target testqsavefile
testqsavefile_OBJECTS = \
"CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o" \
"CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o"

# External object files for target testqsavefile
testqsavefile_EXTERNAL_OBJECTS =

tests/testqsavefile: tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o
tests/testqsavefile: tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o
tests/testqsavefile: tests/CMakeFiles/testqsavefile.dir/build.make
tests/testqsavefile: src/libkeepassx_core.a
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libz.so
tests/testqsavefile: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testqsavefile: tests/CMakeFiles/testqsavefile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testqsavefile"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testqsavefile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testqsavefile.dir/build: tests/testqsavefile
.PHONY : tests/CMakeFiles/testqsavefile.dir/build

tests/CMakeFiles/testqsavefile.dir/requires: tests/CMakeFiles/testqsavefile.dir/TestQSaveFile.cpp.o.requires
tests/CMakeFiles/testqsavefile.dir/requires: tests/CMakeFiles/testqsavefile.dir/moc_TestQSaveFile.cxx.o.requires
.PHONY : tests/CMakeFiles/testqsavefile.dir/requires

tests/CMakeFiles/testqsavefile.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testqsavefile.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testqsavefile.dir/clean

tests/CMakeFiles/testqsavefile.dir/depend: tests/moc_TestQSaveFile.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testqsavefile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testqsavefile.dir/depend

