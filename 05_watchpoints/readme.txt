watch {var}
	Stop the program the instant this variable's value changes
	(acts as its own breakpoint — no line number needed)

info breakpoints
	List every breakpoint/watchpoint, enabled or disabled

delete/d {num}
	Delete the given breakpoint or watchpoint

delete/d
	With no number, deletes ALL breakpoints and watchpoints (asks first)

disable/enable {num}
	Disable/enable a specific breakpoint or watchpoint

--- Bonus: conditional breakpoints ---
Not from the video, but handy once a location is hit way more often
than the one time you actually care about (like `cond` below, called
1000 times).

break {func/file:line}
	Create a breakpoint at this location; the program stops here
	when it runs

break {location} if {cond}
	Set a breakpoint that only stops when the condition is true

condition {bnum} {cond}
	Set a condition on an existing breakpoint

condition {bnum}
	Remove all conditions from an existing breakpoint
