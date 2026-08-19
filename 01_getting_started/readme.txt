cc -g {files}
	Compile the program with the -g flag

gdb {program_name}
	Run gdb

layout src
	Go to the source layout, so you can see the code while you debug

run/r {arg1} {arg2} {arg...}
	Start running the program
	If you want program arguments you can give them here

print/p {var}
	Print out the current value of a variable

print/p {expr}
	print understands C syntax, not just variable names
	print i * 2 - 1

print/p *{ptr}
	Dereference a pointer and print what it points to
	(try: print *argv — argv is char**, so this prints argv[0])

break/b {func_name}
break/b {line_number}
break/b {file_name}:{line_number}
	Create a breakpoint on a certain function or line in a file
	Breakpoints tell the debugger when to stop running the code and
	go into step-by-step mode

quit/q
	Quit gdb

next/n
	Run the current line and stop again on the next one

kill
	Stop the currently running program
