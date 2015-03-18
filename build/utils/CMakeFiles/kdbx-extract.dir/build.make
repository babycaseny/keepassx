# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.2.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.2.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nma/Source/keepassx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nma/Source/keepassx/build

# Include any dependencies generated for this target.
include utils/CMakeFiles/kdbx-extract.dir/depend.make

# Include the progress variables for this target.
include utils/CMakeFiles/kdbx-extract.dir/progress.make

# Include the compile flags for this target's objects.
include utils/CMakeFiles/kdbx-extract.dir/flags.make

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o: utils/CMakeFiles/kdbx-extract.dir/flags.make
utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o: ../utils/kdbx-extract.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/nma/Source/keepassx/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o"
	cd /Users/nma/Source/keepassx/build/utils && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o -c /Users/nma/Source/keepassx/utils/kdbx-extract.cpp

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.i"
	cd /Users/nma/Source/keepassx/build/utils && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/nma/Source/keepassx/utils/kdbx-extract.cpp > CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.i

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.s"
	cd /Users/nma/Source/keepassx/build/utils && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/nma/Source/keepassx/utils/kdbx-extract.cpp -o CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.s

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.requires:
.PHONY : utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.requires

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.provides: utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.requires
	$(MAKE) -f utils/CMakeFiles/kdbx-extract.dir/build.make utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.provides.build
.PHONY : utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.provides

utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.provides.build: utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o

# Object files for target kdbx-extract
kdbx__extract_OBJECTS = \
"CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o"

# External object files for target kdbx-extract
kdbx__extract_EXTERNAL_OBJECTS =

utils/kdbx-extract: utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o
utils/kdbx-extract: utils/CMakeFiles/kdbx-extract.dir/build.make
utils/kdbx-extract: src/libkeepassx_core.a
utils/kdbx-extract: /usr/local/lib/libgcrypt.dylib
utils/kdbx-extract: /usr/lib/libz.dylib
utils/kdbx-extract: utils/CMakeFiles/kdbx-extract.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable kdbx-extract"
	cd /Users/nma/Source/keepassx/build/utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kdbx-extract.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/CMakeFiles/kdbx-extract.dir/build: utils/kdbx-extract
.PHONY : utils/CMakeFiles/kdbx-extract.dir/build

utils/CMakeFiles/kdbx-extract.dir/requires: utils/CMakeFiles/kdbx-extract.dir/kdbx-extract.cpp.o.requires
.PHONY : utils/CMakeFiles/kdbx-extract.dir/requires

utils/CMakeFiles/kdbx-extract.dir/clean:
	cd /Users/nma/Source/keepassx/build/utils && $(CMAKE_COMMAND) -P CMakeFiles/kdbx-extract.dir/cmake_clean.cmake
.PHONY : utils/CMakeFiles/kdbx-extract.dir/clean

utils/CMakeFiles/kdbx-extract.dir/depend:
	cd /Users/nma/Source/keepassx/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nma/Source/keepassx /Users/nma/Source/keepassx/utils /Users/nma/Source/keepassx/build /Users/nma/Source/keepassx/build/utils /Users/nma/Source/keepassx/build/utils/CMakeFiles/kdbx-extract.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/CMakeFiles/kdbx-extract.dir/depend

