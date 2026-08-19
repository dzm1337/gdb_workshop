#include <unistd.h>

int main(void)
{
    int i;
    int j;
    int *x;

    i = 3;
    j = 4;
    x = &i;
    
    i += j;
    j = i * 2;
	write(1, "Hello, 42!\n", 11);
	return (0);
}
