#include <unistd.h>

void increment(void)
{
	int i;

	i = 0;
	while (i < 100000)
        i++;
	write(1, "increment done\n", 12);
}
	// The loop itself is boring — only line 10 matters here.
	// Two ways to reach it without single-stepping the whole loop:
	//   until 10
	//   or: break 10, then continue

void increment_2(void)
{
	int i;

	i = 0;
	while (i < 100000)
        i++;
}
	// This one's not worth watching either — step in, then finish out

int main(void)
{
	// Dive into each of these with step instead of next
	increment();
	increment_2();
	return (0);
}
	// Break on main first, then run
