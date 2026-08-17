#include <unistd.h>

#define SIZE 5

int main(void)
{
	int numbers[SIZE];
	int i;
	char c;

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	numbers[4] = 5;
	i = 0;
	while (i <= SIZE)
	{
		c = numbers[i] + '0';
		write(1, &c, 1);
		i = i + 1;
	}
	write(1, "\nDone\n", 6);
	return (0);
}
