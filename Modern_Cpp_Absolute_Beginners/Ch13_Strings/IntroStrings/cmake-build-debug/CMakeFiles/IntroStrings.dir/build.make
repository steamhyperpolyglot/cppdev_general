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
CMAKE_SOURCE_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\IntroStrings.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\IntroStrings.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\IntroStrings.dir\flags.make

CMakeFiles\IntroStrings.dir\main.cpp.obj: CMakeFiles\IntroStrings.dir\flags.make
CMakeFiles\IntroStrings.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IntroStrings.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\IntroStrings.dir\main.cpp.obj /FdCMakeFiles\IntroStrings.dir\ /FS -c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\main.cpp
<<

CMakeFiles\IntroStrings.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IntroStrings.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe > CMakeFiles\IntroStrings.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\main.cpp
<<

CMakeFiles\IntroStrings.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IntroStrings.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\IntroStrings.dir\main.cpp.s /c D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\main.cpp
<<

# Object files for target IntroStrings
IntroStrings_OBJECTS = \
"CMakeFiles\IntroStrings.dir\main.cpp.obj"

# External object files for target IntroStrings
IntroStrings_EXTERNAL_OBJECTS =

IntroStrings.exe: CMakeFiles\IntroStrings.dir\main.cpp.obj
IntroStrings.exe: CMakeFiles\IntroStrings.dir\build.make
IntroStrings.exe: CMakeFiles\IntroStrings.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IntroStrings.exe"
	D:\Jetbrains\apps\CLion\ch-0\202.8194.17\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\IntroStrings.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x64\mt.exe --manifests  -- C:\PROGRA~2\MICROS~3\2019\COMMUN~1\VC\Tools\MSVC\1428~1.293\bin\Hostx64\x64\link.exe /nologo @CMakeFiles\IntroStrings.dir\objects1.rsp @<<
 /out:IntroStrings.exe /implib:IntroStrings.lib /pdb:D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug\IntroStrings.pdb /version:0.0  /machine:x64 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\IntroStrings.dir\build: IntroStrings.exe

.PHONY : CMakeFiles\IntroStrings.dir\build

CMakeFiles\IntroStrings.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\IntroStrings.dir\cmake_clean.cmake
.PHONY : CMakeFiles\IntroStrings.dir\clean

CMakeFiles\IntroStrings.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug D:\RnD\cppdev_general\Modern_Cpp_Absolute_Beginners\Ch13_Strings\IntroStrings\cmake-build-debug\CMakeFiles\IntroStrings.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\IntroStrings.dir\depend

