#include <unistd.h>

int add(int *a, int *b)
{
	return (*a + *b);
}

int main(void)
{
	int x;
	int *y;
	int ret;

	x = 5;
	y = NULL;
	ret = add(&x, y) + '0';
	write(1, &ret, 1);
	write(1, "\nDone\n", 6);
	return (0);
}
