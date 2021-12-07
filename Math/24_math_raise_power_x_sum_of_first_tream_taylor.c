/*
Write a C program to calculate e raise to the power x using sum of first n terms of Taylor Series. 
From Wikipedia,
In mathematics, a Taylor series is a representation of a function as an infinite sum of terms that are 
calculated from the values of the function's derivatives at a single point.
Example:
The Taylor series for any polynomial is the polynomial itself.
C programming Exercises: Math - Taylor Series
The above expansion holds because the derivative of ex with respect to x is also ex, and e0 equals 1.
This leaves the terms (x − 0)n in the numerator and n! in the denominator for each term in the infinite sum.
Example 1:
Input: n = 25
float x= 5.0
Output: e^x = 148.413162
*/

#include <stdio.h>
#include <stdlib.h>

float TaylorExponential(int n, float f)
{
    float exp_sum = 1;
    int i;
    for (i = n - 1; i > 0; --i)
        exp_sum = 1 + f * exp_sum / i;
    return exp_sum;
}

int main()
{
    int n = 25;
    float f = 5.0;

    if (n > 0 && f > 0)
    {
        printf("Value of n = %d and x = %.1f\n", n, f);
        printf("e^x = %f\n", TaylorExponential(n, f));
    }
}