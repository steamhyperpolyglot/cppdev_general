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
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\202.8194.17\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\202.8194.17\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\IfStatements.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\IfStatements.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\IfStatements.dir\flags.make

CMakeFiles\IfStatements.dir\main.cpp.obj: CMakeFiles\IfStatements.dir\flags.make
CMakeFiles\IfStatements.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IfStatements.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\IfStatements.dir\main.cpp.obj /FdCMakeFiles\IfStatements.dir\ /FS -c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\main.cpp
<<

CMakeFiles\IfStatements.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IfStatements.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe > CMakeFiles\IfStatements.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\main.cpp
<<

CMakeFiles\IfStatements.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IfStatements.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\IfStatements.dir\main.cpp.s /c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\main.cpp
<<

# Object files for target IfStatements
IfStatements_OBJECTS = \
"CMakeFiles\IfStatements.dir\main.cpp.obj"

# External object files for target IfStatements
IfStatements_EXTERNAL_OBJECTS =

IfStatements.exe: CMakeFiles\IfStatements.dir\main.cpp.obj
IfStatements.exe: CMakeFiles\IfStatements.dir\build.make
IfStatements.exe: CMakeFiles\IfStatements.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IfStatements.exe"
	D:\Jetbrains\apps\CLion\ch-0\202.8194.17\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\IfStatements.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\IfStatements.dir\objects1.rsp @<<
 /out:IfStatements.exe /implib:IfStatements.lib /pdb:D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug\IfStatements.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\IfStatements.dir\build: IfStatements.exe

.PHONY : CMakeFiles\IfStatements.dir\build

CMakeFiles\IfStatements.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\IfStatements.dir\cmake_clean.cmake
.PHONY : CMakeFiles\IfStatements.dir\clean

CMakeFiles\IfStatements.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch18_Exercises\IfStatements\cmake-build-debug\CMakeFiles\IfStatements.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\IfStatements.dir\depend

