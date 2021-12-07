/* 
Write a program in C to check if a number is Keith or not.

Expected Output :
Input a number : 1104
The given number is a Keith Number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int LengthCount(int n)
{
    int num = 0;
    while (n > 0)
    {
        n = n / 10;
        num++;
    }
    return num;
}

int main()
{
    int n = 0, i = 0, arr[10], n1 = 0, num = 0, sum = 0;
    printf("Input a number: ");
    scanf("%d", &n);
    n1 = n;
    for (i = LengthCount(n1) - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    while (num == 0)
    {
        for (i = 0; i < LengthCount(n1); i++)
            sum += arr[i];
        if (sum == n1)
        {
            printf("The given number is a Keith Number.\n");
            num = 1;
        }
        if (sum > n1)
        {
            printf("The given number is not a Keith number.\n");
            num = 1;
        }
        for (i = 0; i < LengthCount(n1); i++)
        {
            if (i != LengthCount(n1) - 1)
                arr[i] = arr[i + 1];
            else
                arr[i] = sum;
        }
        sum = 0;
    }
}