#include <stdio.h>

int main()
{

    // Logical Block Operators
    /*  AND - &&
        OR - ||
        NOT - !

    It performs blockwise operation mean output in form of 0 & 1

    Note : All non - zero values are called TRUE
           All zero values are called FALSE

    */

    int a, b;
    a = 0;
    b = 1;

    printf(" Blockwise AND : %d\n", a && b);
    printf(" Blockwise OR : %d\n", a || b);
    printf(" Blockwise NOT : %d\n", !a);
    return 0;
}