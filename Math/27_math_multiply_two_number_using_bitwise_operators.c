/*
Write a C program to multiply two numbers using bitwise operators. 

Example 1:
Input: int x = 8
int y = 9
Output: Product of 8 and 9 using bitwise operators is: 72
*/

#include <stdio.h>
#include <stdlib.h>

int BitwiseMultiply(int x, int y)
{
    if (x < 0 && y < 0)
    {
        x = x * (-1);
        y = y * (-1);
    }
    if (x > 0 && y < 0)
    {
        x = x * (-1);
        y = y * (-1);
    }
    int result = 0;
    while (y > 0)
    {
        if ((y & 1) != 0)
            result = result + x;
        x = x << 1;
        y = y >> 1;
    }
    return result;
}

int main()
{
    int x = 8;
    int y = 9;
    printf("Product of %d and %d using bitwise operators: %d", x, y, BitwiseMultiply(x, y));
    return 0;
}