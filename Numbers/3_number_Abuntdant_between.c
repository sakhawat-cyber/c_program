/* 
Write a program in C to find the Abundant numbers (integers) between 1 to 1000. Go to the editor

Expected Output :
The Abundant number between 1 to 1000 are:
-----------------------------------------------
12 18 20 24 30 36 40 42 48 54 56 60 66 70 72 78 80...
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int GetSum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                sum = sum + i;
            else
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
        }
    }
    sum = sum - n;
    return sum;
}

bool CheckAbundant(int n)
{
    return (GetSum(n) > n);
}

int main()
{
    int n, i;
    printf("The abundant number between 1 to 1000 are: ");
    for (i = 1; i <= 1000; i++)
    {
        n = i;
        if (CheckAbundant(n) == true)
            printf("%d ", n);
    }
    printf("\n");
}