#include <stdio.h>

int main()
{

    /*
    Binary Shift Operators

    1. Left Shift
    2. Right Shift

    This two operators widely used in embedded system programming
    */

    // Left shift

    char a, b;
    a = 5;
    b = a >> 2;
    printf("%d \n", b);

    // Right shift

    char c, d;
    c = 5;
    d = c << 2;
    printf("%d \n", d);

    return 0;
}