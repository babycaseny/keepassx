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
include src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/depend.make

# Include the progress variables for this target.
include src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/progress.make

# Include the compile flags for this target's objects.
include src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/flags.make

src/autotype/test/moc_AutoTypeTest.cxx: ../src/autotype/test/AutoTypeTest.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_AutoTypeTest.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/src/autotype/test/moc_AutoTypeTest.cxx_parameters

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/flags.make
src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o: ../src/autotype/test/AutoTypeTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o -c /home/tom/Desktop/Development/keepassx/src/autotype/test/AutoTypeTest.cpp

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/src/autotype/test/AutoTypeTest.cpp > CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.i

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/src/autotype/test/AutoTypeTest.cpp -o CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.s

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.requires:
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.requires

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.provides: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.requires
	$(MAKE) -f src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/build.make src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.provides.build
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.provides

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.provides.build: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/flags.make
src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o: src/autotype/test/moc_AutoTypeTest.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o -c /home/tom/Desktop/Development/keepassx/build/src/autotype/test/moc_AutoTypeTest.cxx

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/src/autotype/test/moc_AutoTypeTest.cxx > CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.i

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/src/autotype/test/moc_AutoTypeTest.cxx -o CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.s

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.requires:
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.requires

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.provides: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.requires
	$(MAKE) -f src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/build.make src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.provides.build
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.provides

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.provides.build: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o

# Object files for target keepassx-autotype-test
keepassx__autotype__test_OBJECTS = \
"CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o" \
"CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o"

# External object files for target keepassx-autotype-test
keepassx__autotype__test_EXTERNAL_OBJECTS =

src/autotype/test/libkeepassx-autotype-test.so: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o
src/autotype/test/libkeepassx-autotype-test.so: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o
src/autotype/test/libkeepassx-autotype-test.so: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/build.make
src/autotype/test/libkeepassx-autotype-test.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
src/autotype/test/libkeepassx-autotype-test.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
src/autotype/test/libkeepassx-autotype-test.so: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared module libkeepassx-autotype-test.so"
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/keepassx-autotype-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/build: src/autotype/test/libkeepassx-autotype-test.so
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/build

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/requires: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/AutoTypeTest.cpp.o.requires
src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/requires: src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/moc_AutoTypeTest.cxx.o.requires
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/requires

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/src/autotype/test && $(CMAKE_COMMAND) -P CMakeFiles/keepassx-autotype-test.dir/cmake_clean.cmake
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/clean

src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/depend: src/autotype/test/moc_AutoTypeTest.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/src/autotype/test /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/src/autotype/test /home/tom/Desktop/Development/keepassx/build/src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/autotype/test/CMakeFiles/keepassx-autotype-test.dir/depend

