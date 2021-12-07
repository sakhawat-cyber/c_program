/*
 Write a C program to check if a given number is Fibonacci number or not. 
In mathematics, the Fibonacci numbers, commonly denoted Fn form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is, and for n > 1. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
Example 1:
Input: n = 8
Output: 1
*/

#include <stdio.h>
#include <math.h>

int PerfectSquare(int x)
{
    int y = (int)sqrt(x);
    return (y * y == x);
}
int Fibonacci(int x)
{
    return PerfectSquare(5 * x * x + 4) ||
           PerfectSquare(5 * x * x - 4);
}

int main()
{
    int n = 8;
    if (n > 0)
        printf("\n\nIs %d a fibonacci number? %d", n, Fibonacci(n));
    return 0;
}