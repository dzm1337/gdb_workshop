# GDB Commands

Full reference, grouped the same way the lesson folders are. Print it,
or keep it open on a second screen.

## Starting out

```
cc -g file.c          compile with debug symbols (required for gdb)
gdb ./program         start gdb on a compiled program
lay src               switch to the source-code layout
break/b main          set a breakpoint (b func, b file.c:12, b func if cond)
run/r arg1 arg2       start running the program (args optional)
kill                  stop the currently running program
quit/q                exit gdb
```

## Controlling execution

```
next/n            run the current line, stepping OVER function calls
step/s            run the current line, stepping INTO function calls
finish/fin        run until the current function returns
until 12          run until line 12 (skips a loop without single-stepping it)
continue/c        resume until the next breakpoint
```

## Moving around the gdb prompt

```
ctrl+p / ctrl+n      previous / next command in history
ctrl+b / ctrl+f      move the cursor back / forward one character
arrow keys           move the source layout window around
```

## Looking at values

```
print/p var             print a variable's current value
display var             reprint a variable's value after every command
info display            list all active displays
disable/enable display N     turn a display off/on
delete display N         remove a display
info locals              print every local variable in scope
info args                print every function argument
```

## Breakpoints

```
info breakpoints         list every breakpoint (enabled or not)
delete/d N               remove breakpoint N
disable/enable N         turn breakpoint N off/on
break LOC if cond        breakpoint that only stops when cond is true
condition N cond         add a condition to an existing breakpoint
condition N              clear an existing breakpoint's condition
watch var                stop the instant var's value changes
```

## Call stack / frames

```
backtrace/bt          show the full call stack
backtrace -full       same, plus every frame's local variables
frame N               jump straight to frame N
up [N]                move N frames toward the caller (default 1)
down [N]              move N frames toward the callee (default 1)
```

## Other

```
Ctrl+C               pause a program that is currently running
```
