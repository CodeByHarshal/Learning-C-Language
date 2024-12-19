#include <stdio.h>

int main()
{

    /* Formate specifiers for Numbers Systems

    Note : LHS is always binary No
           RHS will be any Number System
           ex. a = 101       -- in memory a always is in binary

    Start No.          No sys           Ex
    1-9                Decimal          10
    0                  Octal            010
    0x__               Hexadecimal      0x10
    0,1                Binary           0b100
    '1'                Ones Digits

    */

    // Perform additions of 100 and 0x11

    char a, b, c;
    a = 100;
    b = 0x11;
    c = a + b; // ans = 117
    printf("%d", c);
    return 0;
}