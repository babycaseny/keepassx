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
include tests/CMakeFiles/testqcommandlineparser.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testqcommandlineparser.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testqcommandlineparser.dir/flags.make

tests/moc_TestQCommandLineParser.cxx: ../tests/TestQCommandLineParser.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestQCommandLineParser.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestQCommandLineParser.cxx_parameters

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o: tests/CMakeFiles/testqcommandlineparser.dir/flags.make
tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o: ../tests/TestQCommandLineParser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestQCommandLineParser.cpp

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestQCommandLineParser.cpp > CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.i

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestQCommandLineParser.cpp -o CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.s

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.requires:
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.requires

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.provides: tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testqcommandlineparser.dir/build.make tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.provides

tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.provides.build: tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o: tests/CMakeFiles/testqcommandlineparser.dir/flags.make
tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o: tests/moc_TestQCommandLineParser.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQCommandLineParser.cxx

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQCommandLineParser.cxx > CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.i

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestQCommandLineParser.cxx -o CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.s

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.requires:
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.requires

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.provides: tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testqcommandlineparser.dir/build.make tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.provides

tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.provides.build: tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o

# Object files for target testqcommandlineparser
testqcommandlineparser_OBJECTS = \
"CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o" \
"CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o"

# External object files for target testqcommandlineparser
testqcommandlineparser_EXTERNAL_OBJECTS =

tests/testqcommandlineparser: tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o
tests/testqcommandlineparser: tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o
tests/testqcommandlineparser: tests/CMakeFiles/testqcommandlineparser.dir/build.make
tests/testqcommandlineparser: src/libkeepassx_core.a
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libz.so
tests/testqcommandlineparser: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testqcommandlineparser: tests/CMakeFiles/testqcommandlineparser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testqcommandlineparser"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testqcommandlineparser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testqcommandlineparser.dir/build: tests/testqcommandlineparser
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/build

tests/CMakeFiles/testqcommandlineparser.dir/requires: tests/CMakeFiles/testqcommandlineparser.dir/TestQCommandLineParser.cpp.o.requires
tests/CMakeFiles/testqcommandlineparser.dir/requires: tests/CMakeFiles/testqcommandlineparser.dir/moc_TestQCommandLineParser.cxx.o.requires
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/requires

tests/CMakeFiles/testqcommandlineparser.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testqcommandlineparser.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/clean

tests/CMakeFiles/testqcommandlineparser.dir/depend: tests/moc_TestQCommandLineParser.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testqcommandlineparser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testqcommandlineparser.dir/depend

