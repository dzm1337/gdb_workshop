#include <unistd.h>

int main(void)
{
	int i;

	i = 5;
	while (i > 0)
	{
		write(1, ".", 1);
		i++;
	}
	write(1, "\nDone\n", 6);
	return (0);
}
