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
CMAKE_COMMAND = D:\Jetbrains\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\Jetbrains\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\TypeModifiers.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\TypeModifiers.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\TypeModifiers.dir\flags.make

CMakeFiles\TypeModifiers.dir\main.cpp.obj: CMakeFiles\TypeModifiers.dir\flags.make
CMakeFiles\TypeModifiers.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TypeModifiers.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TypeModifiers.dir\main.cpp.obj /FdCMakeFiles\TypeModifiers.dir\ /FS -c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\main.cpp
<<

CMakeFiles\TypeModifiers.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TypeModifiers.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe > CMakeFiles\TypeModifiers.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\main.cpp
<<

CMakeFiles\TypeModifiers.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TypeModifiers.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TypeModifiers.dir\main.cpp.s /c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\main.cpp
<<

# Object files for target TypeModifiers
TypeModifiers_OBJECTS = \
"CMakeFiles\TypeModifiers.dir\main.cpp.obj"

# External object files for target TypeModifiers
TypeModifiers_EXTERNAL_OBJECTS =

TypeModifiers.exe: CMakeFiles\TypeModifiers.dir\main.cpp.obj
TypeModifiers.exe: CMakeFiles\TypeModifiers.dir\build.make
TypeModifiers.exe: CMakeFiles\TypeModifiers.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TypeModifiers.exe"
	D:\Jetbrains\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\TypeModifiers.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\TypeModifiers.dir\objects1.rsp @<<
 /out:TypeModifiers.exe /implib:TypeModifiers.lib /pdb:D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug\TypeModifiers.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\TypeModifiers.dir\build: TypeModifiers.exe

.PHONY : CMakeFiles\TypeModifiers.dir\build

CMakeFiles\TypeModifiers.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TypeModifiers.dir\cmake_clean.cmake
.PHONY : CMakeFiles\TypeModifiers.dir\clean

CMakeFiles\TypeModifiers.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch05_Types\TypeModifiers\cmake-build-debug\CMakeFiles\TypeModifiers.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\TypeModifiers.dir\depend

