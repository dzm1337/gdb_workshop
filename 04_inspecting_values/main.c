#include <unistd.h>

int main(int argc, char **argv)
{
	int letter_count;
	char word[4];
	int i;

	// argv[0] is the program's own name: print argv[0]
	// Launch with extra words (run a b c) and check: print argv[1]

	// Depends on how many words you passed — not visible in the code:
	// print letter_count
	letter_count = argc;
	if (letter_count > 4)
		letter_count = 4;

	// Set: display word
	// so gdb reprints it automatically after every command you type
	i = 0;
	while (i < letter_count)
	{
		word[i] = 'A' + i;
		i = i + 1;
	}
	write(1, word, letter_count);
	write(1, "\nDone\n", 6);
	return (0);
}
