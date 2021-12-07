/*
Write a program in C to check whether a number is a prime number or not using the function.
Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number.
*/

#include <stdio.h>
int CheckPrime(int);
int main()
{
    int n;
    printf("\nInput a positive number: ");
    scanf("%d", &n);
    if (CheckPrime(n))
        printf("The %d number is a prime number.\n\n", n);
    else
        printf("The number %d is not a prime number.\n\n", n);
}

int CheckPrime(int n1)
{
    int i = 2;
    while (i <= n1 / 2)
    {
        if (n1 % i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}