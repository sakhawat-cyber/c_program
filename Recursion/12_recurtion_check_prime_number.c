/*
Write a program in C to check a number is a prime number or not using recursion.
Test Data :
Input any positive number : 7
Expected Output :

The number 7 is a prime number. 
*/

#include <stdio.h>

int CheckPrime(int num, int n2);

int main()
{
    int n, n1, i;
    printf("\nInput any positive number: ");
    scanf("%d", &n);
    i = n / 2;
    //calling the function check prime number
    n1 = CheckPrime(n, i);
    if (n1 == 1)
        printf("The number %d is a prime number.\n\n", n);
    else
        printf("The number %d is not a prime number.\n\n", n);
}

int CheckPrime(int num, int n2)
{
    
    if (n2 == 1)
        return 1;
    else if (num % n2 == 0)
        return 0;
    else
    {
        n2 = n2 - 1;
        //calling the function check prime it self
        CheckPrime(num, n2);
    }
}