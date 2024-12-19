#include <stdio.h>

int main()   {

    /* to store negative number Here are the steps

    Step 1 : Convert No into binary 
             1 1 1 1 1 1 1         -- Parity 1 for -ve
    Step 2 : Takes 1s compliment
              0 0 0 0 0 0 0
    Step 3 : Takes 2s compliment
             1 0 0 0 0 0 0 1
    */

    char a, b, c;
    a = 4;                              // a  = 0 0 0 0 1 0 0
    b = 5;                              // b  = 0 0 0 0 1 0 1
    c = a - b;                          // c  = 1 1 1 1 1 1 1
    printf("%d", c);
    return 0;
}