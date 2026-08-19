# gdb_workshop

Hands-on workshop for learning `gdb`. Based on the CS 246 (University of
Waterloo) GDB Tutorial — no slides, no video required to follow along, just
your terminal.

## How it works

Each numbered folder is one lesson:

- `main.c` — a tiny program with inline comments telling you which gdb
  commands to try and where
- `readme.txt` — the commands that lesson introduces, with what they do

Compile with `cc -g main.c`, open the result in gdb (`gdb ./a.out`), and work
through the comments in `main.c` using the commands from `readme.txt`. Do
them in order — each one builds on the last.

1. `01_getting_started` — compiling with debug symbols, launching gdb,
   `run`, `break`, `next`, `kill` (two programs here: `starting.c` for the
   basics, then `main.c` once you're ready for breakpoints)
2. `02_inspecting_values` — `print`, `list`, `whatis`, `display`
3. `03_stepping_through` — `step`, `next`, `continue`, `finish`, `until`
4. `04_backtrace` — navigating the call stack
5. `05_watchpoints` — `watch`, plus conditional breakpoints as a bonus
6. `06_reverse_debugging` — stepping backwards, and changing values live

`cheatsheet.md` has the full command reference in one place if you just want
to look something up.

## Exercices

`exercices/` has 3 standalone broken programs — no readme, no hints beyond
the bug itself. Figure out which lesson's tools fit each one.
