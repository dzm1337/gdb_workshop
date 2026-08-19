#include <unistd.h>
#include <stdio.h>

int step_d(int n)
{
	return (n + 1);
}

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

int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

int main(void)
{
	int result;

	step_a(1);
    printf("%d", 1);
	write(1, "Done\n", 5);
	result = factorial(4);
	write(1, "done\n", 5);
	return (0);
}
