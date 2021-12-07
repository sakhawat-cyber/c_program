/*
Write a C program to calculate x raised to the power n (xn).
Example:
Input:
x = 7.0
n = 2

x = 6.2
n = 3
Output:
Result:(x^n) : 49.000000
Result:(x^n) : 238.328000
*/

#include <stdio.h>
#include <limits.h>

double Power(double i, int j)
{
    double y;
    if (j == 0)
        return 1;
    y = Power(i * i, j / 2);
    if (j % 2)
        y = y * i;
    return y;
}

int main()
{
    double x;
    int y;

    x = 7.0;
    y = 2;
    printf("x = %f\ny = %d\n", x, y);
    printf("Result = (x ^ n): %f\n\n", Power(x, y));

    x = 6.200000;
    y = 3;
    printf("x = %f\ny = %d\n", x, y);
    printf("Result = (x ^ n): %f\n\n", Power(x, y));
    return 0;
}