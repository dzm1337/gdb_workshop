#include <unistd.h>

int compute_average(int *numbers, int size)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum = numbers[i];
		i = i + 1;
	}
	return (sum / size);
}

int main(void)
{
	int numbers[4];
	int average;

	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;
	numbers[3] = 40;
	average = compute_average(numbers, 4) + '0';
	write(1, &average, 1);
	write(1, "\nDone\n", 6);
	return (0);
}
