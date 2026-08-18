#include <unistd.h>

int step_d(int n)
{
	return (n + 1);
}
	// Bottom of the chain. Run backtrace here to see how you got in.

int step_c(int n)
{
	return (step_d(n) + 1);
}

int step_b(int n)
{
	return (step_c(n) + 1);
}

int step_a(int n)
{
	return (step_b(n) + 1);
}

int main(void)
{
	step_a(1);
	write(1, "Done\n", 5);
	return (0);
}
	// Break on step_d, run, then use backtrace, up, down and frame N.
	// print n in each frame, it holds a different value every time.
