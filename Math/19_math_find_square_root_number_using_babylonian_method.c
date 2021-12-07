/*
Write a C program to find the square root of a number using Babylonian method.
Example 1:
Input: n = 50
Output: 7.071068
Example 2:
Input: n = 17
Output: 4.123106
*/

#include <stdio.h>

float SquareRoot(float n)
{
    float x = n;
    float y = 1;
    double z = 0.000001;

    while (x - y > z)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main()
{
    int n = 50;
    printf("\nn = %d\n", n);
    printf("The square root of %d number using babylonian method %f\n\n", n, SquareRoot(n));
    
    n = 17;
    printf("\nn = %d\n", n);
    printf("The square root of %d number using babylonian method %f\n\n", n, SquareRoot(n));
    return 0;
}