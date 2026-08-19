#include <unistd.h>

void increment(void)
{
	int i;

	i = 0;
	while (i < 100000)
        i++;
	write(1, "increment done\n", 12);
}

void increment_2(void)
{
	int i;

	i = 0;
	while (i < 100000)
        i++;
}

int main(void)
{
	increment();
	increment_2();
	return (0);
}
