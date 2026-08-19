print/p {var}
	Print out the current value of a variable

print/p {expr}
	print understands C/C++ syntax, not just plain variable names —
	give it an expression and it evaluates it: print result + count_args,
	print count_args * 2 - 1

print/p *{ptr}
	Dereference a pointer and print what it points to
	(try: print *argv — argv is char**, so this prints argv[0])

list/li
	Print the source code around the line you're currently stopped on
	Handy when you've lost track of where you are

list/li {line_number}
	Jump the source listing to a specific line instead of the current one

whatis {var}
	Print the type of a variable — useful once a program has enough
	variables floating around that you forget what's what

display {var}
	Print out a variable's value again after every command you run

undisplay {dnum}
	Stop displaying the given display

info display
	Show all currently active displays

disable/enable display {dnum}
	Disable/enable the given display

delete display {dnum}
	Delete the given display

info locals
	Print out every local variable in the current scope

info args
	Print out every function argument's current value
