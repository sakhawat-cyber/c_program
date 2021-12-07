/*
Write a program in C to check whether a number is Disarium or not. Go to the editor

Expected Output :
Input a number: 135
The given number is a Disarium Number.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int DigitCount(int n)
{
    int temp = n, num_digit = 0;
    while (temp)
    {
        temp = temp / 10;
        num_digit++;
    }
    return num_digit;
}

bool CheckDisarium(int n)
{
    int num_digit = DigitCount(n), x = n, sum = 0, ptr;
    while (x)
    {
        ptr = x % 10;
        sum = sum + pow(ptr, num_digit--);
        x = x / 10;
    }
    return (sum == n);
}

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (CheckDisarium(n))
        printf("The number is a Disarium Number.");
    else
        printf("The number is not a Disarium Number.");
    return 0;
}