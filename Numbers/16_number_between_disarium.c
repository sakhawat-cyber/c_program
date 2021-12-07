/*
Write a program in C to find Disarium numbers between 1 to 1000.

Expected Output :
The Disarium numbers are:
1 2 3 4 5 6 7 8 9 89 135 175 518 598
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

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

bool CheckDisarum(int n)
{
    int x = n, ptr, sum = 0, num_digit = DigitCount(n);
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
    int i;
    printf("The disairum numbers are: \n");
    for (i = 1; i <= 1000; i++)
    {
        if (CheckDisarum(i))
            printf("%d ", i);
    }
}
