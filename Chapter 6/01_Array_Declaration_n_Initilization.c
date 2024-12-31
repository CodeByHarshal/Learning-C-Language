#include <stdio.h>

int main()
{

    // ARRAYS
    /* Linear collection of same types of data that are store together in contiguous memory space
     */

    // Methods to create array

    // No. 1
    int arr[5];
    printf("%d \n", arr[4]); // garbage value

    // No. 2
    int arr1[5] = {0, 2, 4, 6, 8};
    printf("%d \n", arr1[2]); // op-- 4

    // No. 3
    int arr2[] = {55, 66};
    printf("%d \n", arr2[1]); // op-- 11
    return 0;
}