#include <unistd.h>

void bar(int i)
{
	if (i == 963)
		write(1, "AAAA\n", 5);
}
	// bar runs 1000 times — to catch only the call where i is 963:
	//   break bar if i == 963

void foo(void)
{
	int i;

	i = 0;
	while (i < 1000)
	{
		bar(i);
		i = i + 1;
	}
}

int main(void)
{
	foo();
	return (0);
}
	// Break on foo directly — no need to step through main to get here
