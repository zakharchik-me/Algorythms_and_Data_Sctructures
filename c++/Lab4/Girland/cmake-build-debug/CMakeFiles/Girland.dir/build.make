# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Girland.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Girland.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Girland.dir/flags.make

CMakeFiles/Girland.dir/main.cpp.obj: CMakeFiles/Girland.dir/flags.make
CMakeFiles/Girland.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Girland.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Girland.dir\main.cpp.obj -c "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\main.cpp"

CMakeFiles/Girland.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Girland.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\main.cpp" > CMakeFiles\Girland.dir\main.cpp.i

CMakeFiles/Girland.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Girland.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\main.cpp" -o CMakeFiles\Girland.dir\main.cpp.s

# Object files for target Girland
Girland_OBJECTS = \
"CMakeFiles/Girland.dir/main.cpp.obj"

# External object files for target Girland
Girland_EXTERNAL_OBJECTS =

Girland.exe: CMakeFiles/Girland.dir/main.cpp.obj
Girland.exe: CMakeFiles/Girland.dir/build.make
Girland.exe: CMakeFiles/Girland.dir/linklibs.rsp
Girland.exe: CMakeFiles/Girland.dir/objects1.rsp
Girland.exe: CMakeFiles/Girland.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Girland.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Girland.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Girland.dir/build: Girland.exe
.PHONY : CMakeFiles/Girland.dir/build

CMakeFiles/Girland.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Girland.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Girland.dir/clean

CMakeFiles/Girland.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland" "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland" "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug" "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug" "C:\Users\Anton Zakharov\Desktop\Dan\Study\Practics\A&DS\c++\Lab4\Girland\cmake-build-debug\CMakeFiles\Girland.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Girland.dir/depend

