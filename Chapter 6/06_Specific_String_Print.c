#include <stdio.h>

int main()
{
    char a[] = " I am Harshal";
    char b[8];

    for (int i = 0; i < 8; i++)
    {

        b[i] = a[5 + i];
    }

    b[8] = 0;
    printf("%s", &b);
    return 0;
}