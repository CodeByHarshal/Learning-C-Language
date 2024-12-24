#include <stdio.h>

// Creating a Function
isPrime(int num)
{

    int prime = 1;
    for (int i = 2; i < (num - 1); i++)
    {

        if (num % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime == 1)
    {

        printf("%d is Prime Number \n", num);
    }
    else
    {
        printf("%d is  Not Prime Number \n", num);
    }

    return 0;
}

int main()
{

    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    isPrime(num); // Function Calling and Argument Passing

    return 0;
}