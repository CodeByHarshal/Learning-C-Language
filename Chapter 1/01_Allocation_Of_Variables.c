#include <stdio.h>

int main()   {
    
    // Memory allocation for Char
    // Range of char : -127 to +128
    // Memory allocation = 1 Bytes

    char a;
    a = 250;    // It may show some garbage value because it exceed value of 128
    printf("%d\n",a);
    printf("Size of int: %lu bytes\n", sizeof(char));


    // For unsigned char
    unsigned char b;
    b = 15;      // it only store positive values (0 to 255)
    printf("%d\n", b);
    printf("Size of int: %lu bytes\n", sizeof(unsigned char));


    // Memory allocation for int
    // Range of Int : -32768 to 32767
    // Memory allocation : 4 Bytes 
   
    int d;
    d = 1005;
    printf("%d\n", d);
    printf("Size of int: %lu bytes\n", sizeof(int));


    // Memory allocation for float
    // Range of Int :  
    // Memory allocation : 4 Bytes 


    float e;
    e = 55.6;
    printf("%f\n", e);
    printf("Size of float: %lu bytes\n", sizeof(float));

    return 0;
}