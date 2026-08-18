# Solutions — presenter reference

Answer key for the challenges in `exercices/` (`ex01_segfault` through
`ex04_infiniteloop`). The guided lessons in `01_getting_started` through
`06_call_stack` don't need one — the `readme.txt` in each covers those.
Don't hand this out before people have tried; use it to check answers
or unstick someone who's been stuck for a few minutes.

## exercices/ex01_segfault/segfault.c

**Symptom when run plain:** no output — the program dies before it
reaches `write`.

**Bug:** `y` is set to `NULL` and passed into `add`, which dereferences
it with `*b`.

**Fix:** pass a real address, e.g. `int z = 3; ... add(&x, &z);`

**gdb walkthrough:**

```
gdb ./segfault
run
```
```
Program received signal SIGSEGV, Segmentation fault.
0x... in add (a=0x..., b=0x0) at segfault.c:5
5		return (*a + *b);
```

`b=0x0` is the tell — that's a null pointer. `backtrace` shows `add`
was called from `main` with `y`, and `print y` in `main`'s frame
(`frame 1`) confirms it's `0x0`.

## exercices/ex02_offbyone/offbyone.c

**Symptom when run plain:** prints `12345` followed by one odd
character (not a digit) before `Done`.

**Bug:** `while (i <= SIZE)` — with `SIZE` = 5, this lets `i` reach 5,
so the loop reads `numbers[5]`, one past the array's last valid index
(`0..4`).

**Fix:** `while (i < SIZE)`.

**gdb walkthrough:**

```
gdb ./offbyone
break 19
run
print i   # 0
continue
print i   # 1
continue
print i   # 2
continue
print i   # 3
continue
print i   # 4
continue
print i   # 5 — but numbers only has indexes 0-4!
```

The breakpoint is hit once per loop pass — six times total, because the
buggy condition lets `i` reach 5 instead of stopping at 4. On that last
hit, `print numbers[i]` shows garbage (whatever happens to sit next to
the array in memory) instead of crashing — that's the odd character
that showed up on screen. Nudge with: "if valid indexes are 0 through
4, does `i` ever go one further than that?"

## exercices/ex03_wrongsum/wrongsum.c

**Symptom when run plain:** prints a character that decodes to `10`,
not `25`.

**Bug:** `sum = numbers[i];` inside the loop overwrites `sum` every
iteration instead of accumulating. The loop's real effect is just
`sum = numbers[size - 1]`.

**Fix:** `sum += numbers[i];` (or `sum = sum + numbers[i];`).

**gdb walkthrough:**

```
gdb ./wrongsum
break 12
run
print sum   # 0 — not yet assigned this pass
continue
print sum   # 10 == numbers[0]
continue
print sum   # 20 == numbers[1], not 10+20=30
continue
print sum   # 30 == numbers[2], not 10+20+30=60
```

The breakpoint is hit once per loop pass (4 total: `i` = 0, 1, 2, 3), so
`run` plus three `continue`s covers all four hits. Once `sum` visibly
matches whichever element was *just* read instead of growing, ask:
"does line 12 add to `sum`, or replace it?" That's usually enough for
someone to spot the missing `+`. (A further `continue` after the last
hit just lets the program finish — the loop's fourth pass runs, `i`
reaches 4, and the loop exits, so there's no fifth breakpoint hit to
inspect.)

## exercices/ex04_infiniteloop/infiniteloop.c

**Symptom when run plain:** spams `.` forever and never reaches `Done`.

**Bug:** `while (i > 0)` with `i++` inside — the increment moves `i`
*away* from 0, but the loop only stops once `i` reaches 0. `i` counts up
from 5 forever; the condition never flips.

**Fix:** `i--` instead of `i++` (or otherwise make `i` actually count
down to 0).

**gdb walkthrough:**

```
gdb ./infiniteloop
run
```

Let it print a screenful of dots, then **Ctrl+C**:

```
Program received signal SIGINT, Interrupt.
```

It might land inside `main` directly, or mid-way through the `write`
call (e.g. `0x... in write ()`) — if so, `frame 1` (or just `up`) gets
you back into `main` where `i` is visible.

```
print i
continue
print i
```

`i` is already well past 5 and keeps climbing every time you check it.
Ask: "the loop should stop when `i` reaches 0 — is `i` heading toward 0
or away from it?" Pointing at the loop's condition (`i > 0`) next to its
last line (`i++`) usually gets someone to spot the mismatch.
