/* 
Write a program in C to check whether a given number is Abundant or not.

Expected Output :
Input an integer number: 18
The number is Abundant.
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

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
                sum = sum + (n + i);
            }
        }
    }
    sum = sum - n;
    return sum;
}

bool CheckAbundant(int n)
{
    return GetSum(n) > n;
}

int main()
{
    int n;
    printf("Input an ineger number: ");
    scanf("%d", &n);
    if (CheckAbundant(n))
        printf("The number is abundant.");
    else
        printf("The number is not abundant.");
}