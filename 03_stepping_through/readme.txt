step/s
	The step-into command is similar to step-over, but it will go
	into function calls instead of running over them

next/n
	With step-over you go over the code, still executing any
	function calls, just without diving into them

finish/fin
	Finish running the current function and return to the caller
	Also prints the value the function returned

continue/c
	Resume running the program until it hits the next breakpoint
	(or ends), unlike run, it picks up from where you currently are
	instead of starting over

until {line_number}
	Continue running the program until it reaches this line
	Useful for skipping loops without single-stepping through them

ctrl + p
	Go to the previous command

ctrl + n
	Go to the next command

ctrl + b
	Move the cursor one character back

ctrl + f
	Move the cursor one character forward

arrow keys
	Move the source layout window around
