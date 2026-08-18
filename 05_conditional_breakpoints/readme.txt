break {func/file:line}
	Create a breakpoint at this location; the program stops here
	when it runs

info breakpoints
	List every breakpoint/watchpoint, enabled or disabled

delete/d {breakpoint_num}
	Delete the given breakpoint

disable/enable {breakpoint_num}
	Disable/enable a specific breakpoint

break {location} if {cond}
	Set a breakpoint that only stops when the condition is true

condition {bnum} {cond}
	Set a condition on an existing breakpoint

condition {bnum}
	Remove all conditions from an existing breakpoint

watch {var}
	Stop the program the instant this variable's value changes
	(acts as its own breakpoint)
