#include <stdio.h>

int main()
{

    int size = 5;
    int arr[size];

    // Input elements of array

    printf("Enter array Elements : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the array

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}