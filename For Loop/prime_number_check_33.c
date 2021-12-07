/* Write a C program to determine whether 
a given number is prime or not.
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number. */

#include<stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Input a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % 2 == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
        printf("Prime number: %d", n);
    else
        printf("This is not prime number.");
} 