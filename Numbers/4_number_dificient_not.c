/*
 Write a program in C to check whether a given number is Deficient or not. Go to the editor

Expected Output :
Input an integer number: 15
The number is Deficient.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int GetSum(int n)
{
    int sum = 0, i;
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

bool CheckDeficient(int n)
{
    return (GetSum(n) < n);
}

int main()
{
    int num;
    printf("Input an integer number: ");
    scanf("%d", &num);
    if (CheckDeficient(num))
        printf("The number is dificient.");
    else
        printf("The number is not deficient.");
}