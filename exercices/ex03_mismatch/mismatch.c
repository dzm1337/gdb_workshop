#include <unistd.h>

int square(int n)
{
	return (n * n);
}

int main(void)
{
	int value;
	char c;

	value = 3;
	value = value + 4;
	value = square(value);
	value = value - 50;
	value = value + 10;
	if (value == 1)
		c = 'Y';
	else
		c = 'N';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
