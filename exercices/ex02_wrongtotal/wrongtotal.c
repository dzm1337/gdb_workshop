#include <unistd.h>

int calc(int n)
{
	return (n * 3);
}

int adjust(int *shared)
{
	int *alias;

	alias = shared;
	*alias -= 40;
	return (calc(*shared));
}

int wrapup(int *shared)
{
	return (adjust(shared) + 1);
}

int main(void)
{
	int value;
	int result;
	char c;

	value = 20;
	result = wrapup(&value);
	if (result == 61)
		c = 'Y';
	else
		c = 'N';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
