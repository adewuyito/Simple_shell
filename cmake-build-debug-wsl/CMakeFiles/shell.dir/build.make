# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adewuyito/dev/simple_shell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adewuyito/dev/simple_shell/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/shell.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/shell.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/shell.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shell.dir/flags.make

CMakeFiles/shell.dir/builtin.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/builtin.c.o: /home/adewuyito/dev/simple_shell/builtin.c
CMakeFiles/shell.dir/builtin.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/shell.dir/builtin.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/builtin.c.o -MF CMakeFiles/shell.dir/builtin.c.o.d -o CMakeFiles/shell.dir/builtin.c.o -c /home/adewuyito/dev/simple_shell/builtin.c

CMakeFiles/shell.dir/builtin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/builtin.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/builtin.c > CMakeFiles/shell.dir/builtin.c.i

CMakeFiles/shell.dir/builtin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/builtin.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/builtin.c -o CMakeFiles/shell.dir/builtin.c.s

CMakeFiles/shell.dir/builtin_functions.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/builtin_functions.c.o: /home/adewuyito/dev/simple_shell/builtin_functions.c
CMakeFiles/shell.dir/builtin_functions.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/shell.dir/builtin_functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/builtin_functions.c.o -MF CMakeFiles/shell.dir/builtin_functions.c.o.d -o CMakeFiles/shell.dir/builtin_functions.c.o -c /home/adewuyito/dev/simple_shell/builtin_functions.c

CMakeFiles/shell.dir/builtin_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/builtin_functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/builtin_functions.c > CMakeFiles/shell.dir/builtin_functions.c.i

CMakeFiles/shell.dir/builtin_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/builtin_functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/builtin_functions.c -o CMakeFiles/shell.dir/builtin_functions.c.s

CMakeFiles/shell.dir/clear_screen.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/clear_screen.c.o: /home/adewuyito/dev/simple_shell/clear_screen.c
CMakeFiles/shell.dir/clear_screen.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/shell.dir/clear_screen.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/clear_screen.c.o -MF CMakeFiles/shell.dir/clear_screen.c.o.d -o CMakeFiles/shell.dir/clear_screen.c.o -c /home/adewuyito/dev/simple_shell/clear_screen.c

CMakeFiles/shell.dir/clear_screen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/clear_screen.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/clear_screen.c > CMakeFiles/shell.dir/clear_screen.c.i

CMakeFiles/shell.dir/clear_screen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/clear_screen.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/clear_screen.c -o CMakeFiles/shell.dir/clear_screen.c.s

CMakeFiles/shell.dir/cmd_utils.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/cmd_utils.c.o: /home/adewuyito/dev/simple_shell/cmd_utils.c
CMakeFiles/shell.dir/cmd_utils.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/shell.dir/cmd_utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/cmd_utils.c.o -MF CMakeFiles/shell.dir/cmd_utils.c.o.d -o CMakeFiles/shell.dir/cmd_utils.c.o -c /home/adewuyito/dev/simple_shell/cmd_utils.c

CMakeFiles/shell.dir/cmd_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/cmd_utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/cmd_utils.c > CMakeFiles/shell.dir/cmd_utils.c.i

CMakeFiles/shell.dir/cmd_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/cmd_utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/cmd_utils.c -o CMakeFiles/shell.dir/cmd_utils.c.s

CMakeFiles/shell.dir/debug.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/debug.c.o: /home/adewuyito/dev/simple_shell/debug.c
CMakeFiles/shell.dir/debug.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/shell.dir/debug.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/debug.c.o -MF CMakeFiles/shell.dir/debug.c.o.d -o CMakeFiles/shell.dir/debug.c.o -c /home/adewuyito/dev/simple_shell/debug.c

CMakeFiles/shell.dir/debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/debug.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/debug.c > CMakeFiles/shell.dir/debug.c.i

CMakeFiles/shell.dir/debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/debug.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/debug.c -o CMakeFiles/shell.dir/debug.c.s

CMakeFiles/shell.dir/environ.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/environ.c.o: /home/adewuyito/dev/simple_shell/environ.c
CMakeFiles/shell.dir/environ.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/shell.dir/environ.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/environ.c.o -MF CMakeFiles/shell.dir/environ.c.o.d -o CMakeFiles/shell.dir/environ.c.o -c /home/adewuyito/dev/simple_shell/environ.c

CMakeFiles/shell.dir/environ.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/environ.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/environ.c > CMakeFiles/shell.dir/environ.c.i

CMakeFiles/shell.dir/environ.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/environ.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/environ.c -o CMakeFiles/shell.dir/environ.c.s

CMakeFiles/shell.dir/execute_cmd.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/execute_cmd.c.o: /home/adewuyito/dev/simple_shell/execute_cmd.c
CMakeFiles/shell.dir/execute_cmd.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/shell.dir/execute_cmd.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/execute_cmd.c.o -MF CMakeFiles/shell.dir/execute_cmd.c.o.d -o CMakeFiles/shell.dir/execute_cmd.c.o -c /home/adewuyito/dev/simple_shell/execute_cmd.c

CMakeFiles/shell.dir/execute_cmd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/execute_cmd.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/execute_cmd.c > CMakeFiles/shell.dir/execute_cmd.c.i

CMakeFiles/shell.dir/execute_cmd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/execute_cmd.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/execute_cmd.c -o CMakeFiles/shell.dir/execute_cmd.c.s

CMakeFiles/shell.dir/initsh.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/initsh.c.o: /home/adewuyito/dev/simple_shell/initsh.c
CMakeFiles/shell.dir/initsh.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/shell.dir/initsh.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/initsh.c.o -MF CMakeFiles/shell.dir/initsh.c.o.d -o CMakeFiles/shell.dir/initsh.c.o -c /home/adewuyito/dev/simple_shell/initsh.c

CMakeFiles/shell.dir/initsh.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/initsh.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/initsh.c > CMakeFiles/shell.dir/initsh.c.i

CMakeFiles/shell.dir/initsh.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/initsh.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/initsh.c -o CMakeFiles/shell.dir/initsh.c.s

CMakeFiles/shell.dir/main.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/main.c.o: /home/adewuyito/dev/simple_shell/main.c
CMakeFiles/shell.dir/main.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/shell.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/main.c.o -MF CMakeFiles/shell.dir/main.c.o.d -o CMakeFiles/shell.dir/main.c.o -c /home/adewuyito/dev/simple_shell/main.c

CMakeFiles/shell.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/main.c > CMakeFiles/shell.dir/main.c.i

CMakeFiles/shell.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/main.c -o CMakeFiles/shell.dir/main.c.s

CMakeFiles/shell.dir/node.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/node.c.o: /home/adewuyito/dev/simple_shell/node.c
CMakeFiles/shell.dir/node.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/shell.dir/node.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/node.c.o -MF CMakeFiles/shell.dir/node.c.o.d -o CMakeFiles/shell.dir/node.c.o -c /home/adewuyito/dev/simple_shell/node.c

CMakeFiles/shell.dir/node.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/node.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/node.c > CMakeFiles/shell.dir/node.c.i

CMakeFiles/shell.dir/node.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/node.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/node.c -o CMakeFiles/shell.dir/node.c.s

CMakeFiles/shell.dir/prompt.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/prompt.c.o: /home/adewuyito/dev/simple_shell/prompt.c
CMakeFiles/shell.dir/prompt.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/shell.dir/prompt.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/prompt.c.o -MF CMakeFiles/shell.dir/prompt.c.o.d -o CMakeFiles/shell.dir/prompt.c.o -c /home/adewuyito/dev/simple_shell/prompt.c

CMakeFiles/shell.dir/prompt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/prompt.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/prompt.c > CMakeFiles/shell.dir/prompt.c.i

CMakeFiles/shell.dir/prompt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/prompt.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/prompt.c -o CMakeFiles/shell.dir/prompt.c.s

CMakeFiles/shell.dir/shell_functions.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/shell_functions.c.o: /home/adewuyito/dev/simple_shell/shell_functions.c
CMakeFiles/shell.dir/shell_functions.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/shell.dir/shell_functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/shell_functions.c.o -MF CMakeFiles/shell.dir/shell_functions.c.o.d -o CMakeFiles/shell.dir/shell_functions.c.o -c /home/adewuyito/dev/simple_shell/shell_functions.c

CMakeFiles/shell.dir/shell_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/shell_functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/shell_functions.c > CMakeFiles/shell.dir/shell_functions.c.i

CMakeFiles/shell.dir/shell_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/shell_functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/shell_functions.c -o CMakeFiles/shell.dir/shell_functions.c.s

CMakeFiles/shell.dir/strtok.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/strtok.c.o: /home/adewuyito/dev/simple_shell/strtok.c
CMakeFiles/shell.dir/strtok.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/shell.dir/strtok.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/strtok.c.o -MF CMakeFiles/shell.dir/strtok.c.o.d -o CMakeFiles/shell.dir/strtok.c.o -c /home/adewuyito/dev/simple_shell/strtok.c

CMakeFiles/shell.dir/strtok.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/strtok.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/strtok.c > CMakeFiles/shell.dir/strtok.c.i

CMakeFiles/shell.dir/strtok.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/strtok.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/strtok.c -o CMakeFiles/shell.dir/strtok.c.s

CMakeFiles/shell.dir/symtab.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/symtab.c.o: /home/adewuyito/dev/simple_shell/symtab.c
CMakeFiles/shell.dir/symtab.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/shell.dir/symtab.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/symtab.c.o -MF CMakeFiles/shell.dir/symtab.c.o.d -o CMakeFiles/shell.dir/symtab.c.o -c /home/adewuyito/dev/simple_shell/symtab.c

CMakeFiles/shell.dir/symtab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/symtab.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/symtab.c > CMakeFiles/shell.dir/symtab.c.i

CMakeFiles/shell.dir/symtab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/symtab.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/symtab.c -o CMakeFiles/shell.dir/symtab.c.s

CMakeFiles/shell.dir/symtab_2.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/symtab_2.c.o: /home/adewuyito/dev/simple_shell/symtab_2.c
CMakeFiles/shell.dir/symtab_2.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/shell.dir/symtab_2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/symtab_2.c.o -MF CMakeFiles/shell.dir/symtab_2.c.o.d -o CMakeFiles/shell.dir/symtab_2.c.o -c /home/adewuyito/dev/simple_shell/symtab_2.c

CMakeFiles/shell.dir/symtab_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/symtab_2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/symtab_2.c > CMakeFiles/shell.dir/symtab_2.c.i

CMakeFiles/shell.dir/symtab_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/symtab_2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/symtab_2.c -o CMakeFiles/shell.dir/symtab_2.c.s

CMakeFiles/shell.dir/symtab_stack.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/symtab_stack.c.o: /home/adewuyito/dev/simple_shell/symtab_stack.c
CMakeFiles/shell.dir/symtab_stack.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/shell.dir/symtab_stack.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/symtab_stack.c.o -MF CMakeFiles/shell.dir/symtab_stack.c.o.d -o CMakeFiles/shell.dir/symtab_stack.c.o -c /home/adewuyito/dev/simple_shell/symtab_stack.c

CMakeFiles/shell.dir/symtab_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/symtab_stack.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/symtab_stack.c > CMakeFiles/shell.dir/symtab_stack.c.i

CMakeFiles/shell.dir/symtab_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/symtab_stack.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/symtab_stack.c -o CMakeFiles/shell.dir/symtab_stack.c.s

CMakeFiles/shell.dir/symtab_stack_2.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/symtab_stack_2.c.o: /home/adewuyito/dev/simple_shell/symtab_stack_2.c
CMakeFiles/shell.dir/symtab_stack_2.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/shell.dir/symtab_stack_2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/symtab_stack_2.c.o -MF CMakeFiles/shell.dir/symtab_stack_2.c.o.d -o CMakeFiles/shell.dir/symtab_stack_2.c.o -c /home/adewuyito/dev/simple_shell/symtab_stack_2.c

CMakeFiles/shell.dir/symtab_stack_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/symtab_stack_2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/symtab_stack_2.c > CMakeFiles/shell.dir/symtab_stack_2.c.i

CMakeFiles/shell.dir/symtab_stack_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/symtab_stack_2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/symtab_stack_2.c -o CMakeFiles/shell.dir/symtab_stack_2.c.s

CMakeFiles/shell.dir/util_functions_2.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/util_functions_2.c.o: /home/adewuyito/dev/simple_shell/util_functions_2.c
CMakeFiles/shell.dir/util_functions_2.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/shell.dir/util_functions_2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/util_functions_2.c.o -MF CMakeFiles/shell.dir/util_functions_2.c.o.d -o CMakeFiles/shell.dir/util_functions_2.c.o -c /home/adewuyito/dev/simple_shell/util_functions_2.c

CMakeFiles/shell.dir/util_functions_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/util_functions_2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/util_functions_2.c > CMakeFiles/shell.dir/util_functions_2.c.i

CMakeFiles/shell.dir/util_functions_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/util_functions_2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/util_functions_2.c -o CMakeFiles/shell.dir/util_functions_2.c.s

CMakeFiles/shell.dir/util_funtions.c.o: CMakeFiles/shell.dir/flags.make
CMakeFiles/shell.dir/util_funtions.c.o: /home/adewuyito/dev/simple_shell/util_funtions.c
CMakeFiles/shell.dir/util_funtions.c.o: CMakeFiles/shell.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/shell.dir/util_funtions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/shell.dir/util_funtions.c.o -MF CMakeFiles/shell.dir/util_funtions.c.o.d -o CMakeFiles/shell.dir/util_funtions.c.o -c /home/adewuyito/dev/simple_shell/util_funtions.c

CMakeFiles/shell.dir/util_funtions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/shell.dir/util_funtions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adewuyito/dev/simple_shell/util_funtions.c > CMakeFiles/shell.dir/util_funtions.c.i

CMakeFiles/shell.dir/util_funtions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/shell.dir/util_funtions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adewuyito/dev/simple_shell/util_funtions.c -o CMakeFiles/shell.dir/util_funtions.c.s

# Object files for target shell
shell_OBJECTS = \
"CMakeFiles/shell.dir/builtin.c.o" \
"CMakeFiles/shell.dir/builtin_functions.c.o" \
"CMakeFiles/shell.dir/clear_screen.c.o" \
"CMakeFiles/shell.dir/cmd_utils.c.o" \
"CMakeFiles/shell.dir/debug.c.o" \
"CMakeFiles/shell.dir/environ.c.o" \
"CMakeFiles/shell.dir/execute_cmd.c.o" \
"CMakeFiles/shell.dir/initsh.c.o" \
"CMakeFiles/shell.dir/main.c.o" \
"CMakeFiles/shell.dir/node.c.o" \
"CMakeFiles/shell.dir/prompt.c.o" \
"CMakeFiles/shell.dir/shell_functions.c.o" \
"CMakeFiles/shell.dir/strtok.c.o" \
"CMakeFiles/shell.dir/symtab.c.o" \
"CMakeFiles/shell.dir/symtab_2.c.o" \
"CMakeFiles/shell.dir/symtab_stack.c.o" \
"CMakeFiles/shell.dir/symtab_stack_2.c.o" \
"CMakeFiles/shell.dir/util_functions_2.c.o" \
"CMakeFiles/shell.dir/util_funtions.c.o"

# External object files for target shell
shell_EXTERNAL_OBJECTS =

shell: CMakeFiles/shell.dir/builtin.c.o
shell: CMakeFiles/shell.dir/builtin_functions.c.o
shell: CMakeFiles/shell.dir/clear_screen.c.o
shell: CMakeFiles/shell.dir/cmd_utils.c.o
shell: CMakeFiles/shell.dir/debug.c.o
shell: CMakeFiles/shell.dir/environ.c.o
shell: CMakeFiles/shell.dir/execute_cmd.c.o
shell: CMakeFiles/shell.dir/initsh.c.o
shell: CMakeFiles/shell.dir/main.c.o
shell: CMakeFiles/shell.dir/node.c.o
shell: CMakeFiles/shell.dir/prompt.c.o
shell: CMakeFiles/shell.dir/shell_functions.c.o
shell: CMakeFiles/shell.dir/strtok.c.o
shell: CMakeFiles/shell.dir/symtab.c.o
shell: CMakeFiles/shell.dir/symtab_2.c.o
shell: CMakeFiles/shell.dir/symtab_stack.c.o
shell: CMakeFiles/shell.dir/symtab_stack_2.c.o
shell: CMakeFiles/shell.dir/util_functions_2.c.o
shell: CMakeFiles/shell.dir/util_funtions.c.o
shell: CMakeFiles/shell.dir/build.make
shell: CMakeFiles/shell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking C executable shell"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shell.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shell.dir/build: shell
.PHONY : CMakeFiles/shell.dir/build

CMakeFiles/shell.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shell.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shell.dir/clean

CMakeFiles/shell.dir/depend:
	cd /home/adewuyito/dev/simple_shell/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adewuyito/dev/simple_shell /home/adewuyito/dev/simple_shell /home/adewuyito/dev/simple_shell/cmake-build-debug-wsl /home/adewuyito/dev/simple_shell/cmake-build-debug-wsl /home/adewuyito/dev/simple_shell/cmake-build-debug-wsl/CMakeFiles/shell.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/shell.dir/depend

