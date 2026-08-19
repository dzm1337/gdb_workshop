#include <unistd.h>

void cond(int i, int *ptr)
{
    if (i == 333)
    {
        write(1, "first change!\n", 14);
        *ptr = 3;
    }
    if (i == 666)
    {
        write(1, "second change!\n", 15);
        *ptr = 6;
    }
    if (i == 999)
    {
        write(1, "third change!\n", 14);
        *ptr = 9;
    }
}

void loop(void)
{
    int i;
    int result;
    char c;

    result = 1;
    i = 0;
    while (i < 1000)
    {
        cond(i, &result);
        i++;
    }
}

int main(void)
{
    loop();
    return (0);
}
