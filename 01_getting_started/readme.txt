cc -g {files}
	Compile the program with the -g flag

gdb {program_name}
	Run gdb

layout src
	Go to the source layout, so you can see the code while you debug

quit/q
	Quit gdb

Start with starting.c: compile it, open it in gdb, lay src, run, quit.
Once that feels natural, move on to main.c below and try breakpoints.

break/b {func_name}
break/b {line_number}
break/b {file_name}:{line_number}
	Create a breakpoint on a certain function or line in a file
	Breakpoints tell the debugger when to stop running the code and
	go into step-by-step mode

run/r {cmd_arg1} {cmd_arg2} {cmd_arg...}
	Start running the program
	If you want program arguments you can give them here

next/n
	Run the current line and stop again on the next one

kill
	Stop the currently running program

If you want to rerun the program from the start, just use run/r again.

# TIP: to repeat the last command, just press enter without typing anything
