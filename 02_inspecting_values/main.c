#include <unistd.h>

int multiply(int a, int b)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while (i < b)
	{
        result += a;
        i += 1;
	}
	return (result);
}

int main(int argc, char **argv)
{
    int count_args;
	int result;
	int digit;
    int tenth;

	count_args = argc - 1;
	result = multiply(count_args, 7);
    digit = result % 10 + '0';
    tenth = result / 10 + '0';
    write(1, &tenth, 1);
    write(1, &digit, 1);
	return (0);
}
