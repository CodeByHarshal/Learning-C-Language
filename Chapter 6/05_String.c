#include <stdio.h>

int main()
{

    // String : Group of characters ends with 0

    char a;
    a = 'A';
    printf("%c \n", a);

    // Methods to Initilization and Declaratrion of Strings

    // No 1
    char b[4];
    b[0] = 'H';
    b[1] = 'A';
    b[2] = 'R';
    b[3] = 'S';
    b[4] = 'H';
    printf("%c%c%c%c%c \n", b[0], b[1], b[2], b[3], b[4]);

    // No 2
    char c[5] = {'H', 'A', 'R', 'S', 'H'};
    printf("%c%c%c%c%c \n", c[0], c[1], c[2], c[3], c[4]);

    // No 3
    char d[6] = "HARSH";
    printf("%s", &d[0]);

    return 0;
}