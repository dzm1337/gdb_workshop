#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int letter_count;
	char rand_str[4];
	int i;

	// argv[0] is the program's own name — check it with: print argv[0]
	// Launch with an extra word (run hello) and check: print argv[1]
	if (argc > 1)
		write(1, argv[1], strlen(argv[1]));

	srand(time(NULL));

	// A number from 1-4, decided at runtime — inspect it: print letter_count
	letter_count = rand() % 4 + 1;

	// About to fill a buffer one random letter at a time.
	// Set: display rand_str
	// so gdb reprints it automatically after every command you type
	i = 0;
	while (i < letter_count)
	{
		rand_str[i] = (rand() % 26) + 65;
		i = i + 1;
	}
	write(1, "\n", 1);
	write(1, rand_str, letter_count);
	write(1, "\nDone\n", 6);
	return (0);
}
