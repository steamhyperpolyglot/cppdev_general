# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Ex49LifetimeDemo.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Ex49LifetimeDemo.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Ex49LifetimeDemo.dir\flags.make

CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.obj: CMakeFiles\Ex49LifetimeDemo.dir\flags.make
CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ex49LifetimeDemo.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Ex49LifetimeDemo.dir\main.cpp.obj /FdCMakeFiles\Ex49LifetimeDemo.dir\ /FS -c F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\main.cpp
<<

CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ex49LifetimeDemo.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe > CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\main.cpp
<<

CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ex49LifetimeDemo.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Ex49LifetimeDemo.dir\main.cpp.s /c F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\main.cpp
<<

# Object files for target Ex49LifetimeDemo
Ex49LifetimeDemo_OBJECTS = \
"CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.obj"

# External object files for target Ex49LifetimeDemo
Ex49LifetimeDemo_EXTERNAL_OBJECTS =

Ex49LifetimeDemo.exe: CMakeFiles\Ex49LifetimeDemo.dir\main.cpp.obj
Ex49LifetimeDemo.exe: CMakeFiles\Ex49LifetimeDemo.dir\build.make
Ex49LifetimeDemo.exe: CMakeFiles\Ex49LifetimeDemo.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ex49LifetimeDemo.exe"
	D:\Jetbrains\apps\CLion\ch-0\203.5981.166\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\Ex49LifetimeDemo.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\Ex49LifetimeDemo.dir\objects1.rsp @<<
 /out:Ex49LifetimeDemo.exe /implib:Ex49LifetimeDemo.lib /pdb:F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug\Ex49LifetimeDemo.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Ex49LifetimeDemo.dir\build: Ex49LifetimeDemo.exe

.PHONY : CMakeFiles\Ex49LifetimeDemo.dir\build

CMakeFiles\Ex49LifetimeDemo.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ex49LifetimeDemo.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Ex49LifetimeDemo.dir\clean

CMakeFiles\Ex49LifetimeDemo.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug F:\RnD\cppdev_general\The_Cpp_Workshop\Ch07_Ownership_Lifetime\Ex49LifetimeDemo\cmake-build-debug\CMakeFiles\Ex49LifetimeDemo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Ex49LifetimeDemo.dir\depend

