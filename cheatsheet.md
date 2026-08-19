# GDB Commands

Full reference, grouped the same way the lesson folders are. Print it,
or keep it open on a second screen.

## Getting started

```
cc -g file.c          compile with debug symbols (required for gdb)
gdb ./program         start gdb on a compiled program
lay src               switch to the source-code layout
quit/q                exit gdb
break/b main          set a breakpoint (b func, b file.c:12, b func if cond)
run/r arg1 arg2       start running the program (args optional)
next/n                run the current line, stepping OVER function calls
kill                  stop the currently running program
```

## Inspecting values

```
print/p var           print a variable's current value
print/p expr           evaluate a C/C++ expression and print the result
print/p *ptr           dereference a pointer and print what it points to
list/li               show the source around the current line
list/li 12            jump the source listing to line 12
whatis var             print a variable's type
display var             reprint a variable's value after every command
undisplay N              stop displaying a given display
info display            list all active displays
disable/enable display N     turn a display off/on
delete display N         remove a display
info locals              print every local variable in scope
info args                print every function argument
```

## Controlling execution

```
step/s            run the current line, stepping INTO function calls
next/n            run the current line, stepping OVER function calls
continue/c        resume until the next breakpoint (or the program ends)
finish/fin        run until the current function returns, shows the return value
until 12          run until line 12 (skips a loop without single-stepping it)
```

## Moving around the gdb prompt

```
ctrl+p / ctrl+n      previous / next command in history
ctrl+b / ctrl+f      move the cursor back / forward one character
arrow keys           move the source layout window around
```

## Call stack / frames

```
backtrace/bt          show the full call stack
backtrace -full       same, plus every frame's local variables
frame N               jump straight to frame N
up [N]                move N frames toward the caller (default 1)
down [N]              move N frames toward the callee (default 1)
```

## Watchpoints

```
watch var                stop the instant var's value changes
info breakpoints         list every breakpoint/watchpoint (enabled or not)
delete/d N               remove breakpoint/watchpoint N
delete/d                 remove ALL breakpoints/watchpoints (asks first)
disable/enable N         turn a breakpoint/watchpoint off/on
```

### Bonus: conditional breakpoints

```
break LOC if cond        breakpoint that only stops when cond is true
condition N cond         add a condition to an existing breakpoint
condition N              clear an existing breakpoint's condition
set var x = 5             change a variable's value while running
```

## Other

```
Ctrl+C               pause a program that is currently running
```
