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
include tests/CMakeFiles/testkeepass1reader.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testkeepass1reader.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testkeepass1reader.dir/flags.make

tests/moc_TestKeePass1Reader.cxx: ../tests/TestKeePass1Reader.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestKeePass1Reader.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass1Reader.cxx_parameters

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o: tests/CMakeFiles/testkeepass1reader.dir/flags.make
tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o: ../tests/TestKeePass1Reader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestKeePass1Reader.cpp

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestKeePass1Reader.cpp > CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestKeePass1Reader.cpp -o CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires:
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass1reader.dir/build.make tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides.build: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o: tests/CMakeFiles/testkeepass1reader.dir/flags.make
tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o: tests/moc_TestKeePass1Reader.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass1Reader.cxx

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass1Reader.cxx > CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.i

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestKeePass1Reader.cxx -o CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.s

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.requires:
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.requires

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.provides: tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass1reader.dir/build.make tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.provides

tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.provides.build: tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o

# Object files for target testkeepass1reader
testkeepass1reader_OBJECTS = \
"CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o" \
"CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o"

# External object files for target testkeepass1reader
testkeepass1reader_EXTERNAL_OBJECTS =

tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/build.make
tests/testkeepass1reader: src/libkeepassx_core.a
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libz.so
tests/testkeepass1reader: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testkeepass1reader"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testkeepass1reader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testkeepass1reader.dir/build: tests/testkeepass1reader
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/build

tests/CMakeFiles/testkeepass1reader.dir/requires: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires
tests/CMakeFiles/testkeepass1reader.dir/requires: tests/CMakeFiles/testkeepass1reader.dir/moc_TestKeePass1Reader.cxx.o.requires
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/requires

tests/CMakeFiles/testkeepass1reader.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testkeepass1reader.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/clean

tests/CMakeFiles/testkeepass1reader.dir/depend: tests/moc_TestKeePass1Reader.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testkeepass1reader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/depend
