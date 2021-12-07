/* 
Write a program in C to check if a given number is circular prime or not.

Expected Output :
Input a Number: 1193
The given number is a circular prime Number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int num;
void CheckPrime(long int n)
{
    long int i = n - 1;
    while (i >= 2)
    {
        if (n % i == 0)
            num = 1;
        i--;
    }
}

void AllCombination(long int a)
{
    long int n1, x[8], i, j, y[8], n3, n2, n4, n5, n6, n7, n8;
    n1 = a;
    i = 0;
    while (n1 > 0)
    {
        x[i] = n1 % 10;
        n1 = n1 / 10;
        i++;
    }
    n2 = 0;

    for (j = i - 1; j >= 0; j--)
    {
        y[n2] = x[j];
        n2++;
    }
    n3 = i;
    while (n3 > 0)
    {
        n2 = n3 - 1;
        n4 = i - 1;
        n5 = 0;
        n6 = 0;
        while (n5 < i)
        {
            n7 = pow(10, n4);
            n8 = n7 * y[n2 % i];
            n2++;
            n4--;
            n5++;
            n6 = n6 + n8;
        }
        n3--;
        CheckPrime(n6);
    }
}

int main()
{
    long int n;
    printf("Input a number: ");
    scanf("%d", &n);
    num = 0;
    AllCombination(n);

    if (num == 0)
        printf("The number is a circular prime number.");
    else
        printf("The number is a not circular prime number.");
}