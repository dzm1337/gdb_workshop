#include <unistd.h>

void print_dot(int i, int x)
{
	while (i <= x)
	{
		write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
	write(1, "Hello, 42!\n", 11);
}
	// break print_dot, then run, then next through the loop

int main(void)
{
	print_dot(0, 4);
	return (0);
}
	// kill stops it early; run/r starts the program over
