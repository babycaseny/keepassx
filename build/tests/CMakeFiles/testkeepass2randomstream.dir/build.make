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
include tests/CMakeFiles/testkeepass2randomstream.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testkeepass2randomstream.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testkeepass2randomstream.dir/flags.make

tests/moc_TestKeePass2RandomStream.cxx: ../tests/TestKeePass2RandomStream.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestKeePass2RandomStream.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass2RandomStream.cxx_parameters

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o: tests/CMakeFiles/testkeepass2randomstream.dir/flags.make
tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o: ../tests/TestKeePass2RandomStream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestKeePass2RandomStream.cpp

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestKeePass2RandomStream.cpp > CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.i

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestKeePass2RandomStream.cpp -o CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.s

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.requires:
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.requires

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.provides: tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass2randomstream.dir/build.make tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.provides

tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.provides.build: tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o: tests/CMakeFiles/testkeepass2randomstream.dir/flags.make
tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o: tests/moc_TestKeePass2RandomStream.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass2RandomStream.cxx

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass2RandomStream.cxx > CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.i

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass2RandomStream.cxx -o CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.s

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.requires:
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.requires

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.provides: tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass2randomstream.dir/build.make tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.provides

tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.provides.build: tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o

# Object files for target testkeepass2randomstream
testkeepass2randomstream_OBJECTS = \
"CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o" \
"CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o"

# External object files for target testkeepass2randomstream
testkeepass2randomstream_EXTERNAL_OBJECTS =

tests/testkeepass2randomstream: tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o
tests/testkeepass2randomstream: tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o
tests/testkeepass2randomstream: tests/CMakeFiles/testkeepass2randomstream.dir/build.make
tests/testkeepass2randomstream: src/libkeepassx_core.a
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libz.so
tests/testkeepass2randomstream: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testkeepass2randomstream: tests/CMakeFiles/testkeepass2randomstream.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testkeepass2randomstream"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testkeepass2randomstream.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testkeepass2randomstream.dir/build: tests/testkeepass2randomstream
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/build

tests/CMakeFiles/testkeepass2randomstream.dir/requires: tests/CMakeFiles/testkeepass2randomstream.dir/TestKeePass2RandomStream.cpp.o.requires
tests/CMakeFiles/testkeepass2randomstream.dir/requires: tests/CMakeFiles/testkeepass2randomstream.dir/moc_TestKeePass2RandomStream.cxx.o.requires
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/requires

tests/CMakeFiles/testkeepass2randomstream.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testkeepass2randomstream.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/clean

tests/CMakeFiles/testkeepass2randomstream.dir/depend: tests/moc_TestKeePass2RandomStream.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testkeepass2randomstream.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testkeepass2randomstream.dir/depend

