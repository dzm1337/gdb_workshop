#include <unistd.h>

void cond(int i, int *ptr)
{
	if (i == 963)
    {
		write(1, "yolo\n", 5);
        (*ptr)++;
    }
}

void loop(void)
{
	int i;
    int result;
    char c;

    result = 6;
	i = 0;
	while (i < 1000)
	{
		cond(i, &result);
        i++;
	}
    c = result + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
}

int main(void)
{
	loop();
	return (0);
}
