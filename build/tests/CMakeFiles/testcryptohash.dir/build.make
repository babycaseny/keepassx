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
include tests/CMakeFiles/testcryptohash.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testcryptohash.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testcryptohash.dir/flags.make

tests/moc_TestCryptoHash.cxx: ../tests/TestCryptoHash.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestCryptoHash.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestCryptoHash.cxx_parameters

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o: tests/CMakeFiles/testcryptohash.dir/flags.make
tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o: ../tests/TestCryptoHash.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestCryptoHash.cpp

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestCryptoHash.cpp > CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.i

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestCryptoHash.cpp -o CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.s

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.requires:
.PHONY : tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.requires

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.provides: tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testcryptohash.dir/build.make tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.provides

tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.provides.build: tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o: tests/CMakeFiles/testcryptohash.dir/flags.make
tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o: tests/moc_TestCryptoHash.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestCryptoHash.cxx

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestCryptoHash.cxx > CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.i

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestCryptoHash.cxx -o CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.s

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.requires:
.PHONY : tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.requires

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.provides: tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testcryptohash.dir/build.make tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.provides

tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.provides.build: tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o

# Object files for target testcryptohash
testcryptohash_OBJECTS = \
"CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o" \
"CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o"

# External object files for target testcryptohash
testcryptohash_EXTERNAL_OBJECTS =

tests/testcryptohash: tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o
tests/testcryptohash: tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o
tests/testcryptohash: tests/CMakeFiles/testcryptohash.dir/build.make
tests/testcryptohash: src/libkeepassx_core.a
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libz.so
tests/testcryptohash: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testcryptohash: tests/CMakeFiles/testcryptohash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testcryptohash"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testcryptohash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testcryptohash.dir/build: tests/testcryptohash
.PHONY : tests/CMakeFiles/testcryptohash.dir/build

tests/CMakeFiles/testcryptohash.dir/requires: tests/CMakeFiles/testcryptohash.dir/TestCryptoHash.cpp.o.requires
tests/CMakeFiles/testcryptohash.dir/requires: tests/CMakeFiles/testcryptohash.dir/moc_TestCryptoHash.cxx.o.requires
.PHONY : tests/CMakeFiles/testcryptohash.dir/requires

tests/CMakeFiles/testcryptohash.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testcryptohash.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testcryptohash.dir/clean

tests/CMakeFiles/testcryptohash.dir/depend: tests/moc_TestCryptoHash.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testcryptohash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testcryptohash.dir/depend

