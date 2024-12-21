#include <stdio.h>

int main()
{

    // Unary operators
    /*
    This operators need only one operand so it called as unary operators
    1. Increament  ++
    2. Decreament  --
    */

    // Pre increament : in this types of unary operators first we increament the value of operand then use

    int a, b;
    a = 5;
    b = ++a;
    printf("%d \n", b); // b =6
    printf("%d \n", a); // a=6

    // Post increament : in this types of unary operators first we use operand value of operand then use

    int c, d;
    c = 5;
    d = c++;
    printf("%d \n", d); // d=5
    printf("%d \n", c); // c=6

    // Pre decreament : in this types of unary operators first we increament the value of operand then use

    int e, f;
    e = 5;
    f = --a;
    printf("%d \n", f); // f = 6
    printf("%d \n", e); // e = 6

    // Post decreament : in this types of unary operators first we use operand value of operand then use

    int g, h;
    g = 5;
    h = g--;
    printf("%d \n", h); // h=5
    printf("%d \n", g); // g=6

    return 0;
}