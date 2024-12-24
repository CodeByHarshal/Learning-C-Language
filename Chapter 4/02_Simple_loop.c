#include <stdio.h>

int main()
{

    int x;
    x = 0;

loop:
    if (x < 10)
    {
        x += 1;
        printf("%d\n", x);
        goto loop;
        }

    return 0;
}