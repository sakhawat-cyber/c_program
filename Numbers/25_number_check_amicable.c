/* 
 Write a program in C to check two numbers are Amicable numbers or not.

Expected Output :
Input the 1st number : 1184
Input the 2nd number : 1210
The given numbers are an Amicable pair.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int ProDivSum(int n)
{
    int sum = 1, i;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }
    return sum;
}

bool CheckAmicable(int a, int b)
{
    return (ProDivSum(a) == b && ProDivSum(b) == a);
}

int main()
{
    int n1, n2;

    printf("Input the 1st number: ");
    scanf("%d", &n1);
    printf("Input the 2nd number: ");
    scanf("%d", &n2);

    if (CheckAmicable(n1, n2))
        printf("The given numbers are an Amicable pair.");
    else
        printf("The given numbers are an Amicable pair.");
}