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
include tests/CMakeFiles/testdeletedobjects.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testdeletedobjects.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testdeletedobjects.dir/flags.make

tests/moc_TestDeletedObjects.cxx: ../tests/TestDeletedObjects.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating moc_TestDeletedObjects.cxx"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/tom/Desktop/Development/keepassx/build/tests/moc_TestDeletedObjects.cxx_parameters

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o: tests/CMakeFiles/testdeletedobjects.dir/flags.make
tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o: ../tests/TestDeletedObjects.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o -c /home/tom/Desktop/Development/keepassx/tests/TestDeletedObjects.cpp

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/tests/TestDeletedObjects.cpp > CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.i

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/tests/TestDeletedObjects.cpp -o CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.s

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.requires:
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.requires

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.provides: tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testdeletedobjects.dir/build.make tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.provides

tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.provides.build: tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o: tests/CMakeFiles/testdeletedobjects.dir/flags.make
tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o: tests/moc_TestDeletedObjects.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/tom/Desktop/Development/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o -c /home/tom/Desktop/Development/keepassx/build/tests/moc_TestDeletedObjects.cxx

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.i"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/tom/Desktop/Development/keepassx/build/tests/moc_TestDeletedObjects.cxx > CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.i

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.s"
	cd /home/tom/Desktop/Development/keepassx/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/tom/Desktop/Development/keepassx/build/tests/moc_TestDeletedObjects.cxx -o CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.s

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.requires:
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.requires

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.provides: tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/testdeletedobjects.dir/build.make tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.provides.build
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.provides

tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.provides.build: tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o

# Object files for target testdeletedobjects
testdeletedobjects_OBJECTS = \
"CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o" \
"CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o"

# External object files for target testdeletedobjects
testdeletedobjects_EXTERNAL_OBJECTS =

tests/testdeletedobjects: tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o
tests/testdeletedobjects: tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o
tests/testdeletedobjects: tests/CMakeFiles/testdeletedobjects.dir/build.make
tests/testdeletedobjects: src/libkeepassx_core.a
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libQtCore.so
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libQtGui.so
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libQtTest.so
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libgcrypt.so
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libz.so
tests/testdeletedobjects: /usr/lib/x86_64-linux-gnu/libQtDBus.so
tests/testdeletedobjects: tests/CMakeFiles/testdeletedobjects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable testdeletedobjects"
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testdeletedobjects.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testdeletedobjects.dir/build: tests/testdeletedobjects
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/build

tests/CMakeFiles/testdeletedobjects.dir/requires: tests/CMakeFiles/testdeletedobjects.dir/TestDeletedObjects.cpp.o.requires
tests/CMakeFiles/testdeletedobjects.dir/requires: tests/CMakeFiles/testdeletedobjects.dir/moc_TestDeletedObjects.cxx.o.requires
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/requires

tests/CMakeFiles/testdeletedobjects.dir/clean:
	cd /home/tom/Desktop/Development/keepassx/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testdeletedobjects.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/clean

tests/CMakeFiles/testdeletedobjects.dir/depend: tests/moc_TestDeletedObjects.cxx
	cd /home/tom/Desktop/Development/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tom/Desktop/Development/keepassx /home/tom/Desktop/Development/keepassx/tests /home/tom/Desktop/Development/keepassx/build /home/tom/Desktop/Development/keepassx/build/tests /home/tom/Desktop/Development/keepassx/build/tests/CMakeFiles/testdeletedobjects.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testdeletedobjects.dir/depend

