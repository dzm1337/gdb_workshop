#include <unistd.h>

// Compile with: cc -g starting.c
// Then open it in gdb: gdb ./a.out
// Then: lay src, to see this file next to the debugger
int main(void)
{
	write(1, "Hello, 42!\n", 11);
	return (0);
}
