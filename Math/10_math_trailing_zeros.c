/*
Write a C program to find the number of trailing zeroes in a given factorial.
Example 1:
Input: 4
Output: 0
Explanation: 4! = 24, no trailing zero.
Example 2:
Input: 6
Output: 1
Explanation: 6! = 720, one trailing zero.

Example:
Input:
n = 4
n = 5
Output:
Number of trailing zeroes of factorial 4 is 0
Number of trailing zeroes of factorial 5 is 1
*/

#include <stdio.h>

static int TrailingZeros(int n)
{
    int number = 0;
    while (n > 0)
    {
        number += n / 5;
        n /= 5;
    }
    return number;
}

int main()
{
    int x, y;
    x = 4;
    y = 5;
    printf("n = %d\n", x);
    printf("Number of trailing zeros of factorial %d is %d.\n\n", x, TrailingZeros(x));

    printf("n = %d\n", y);
    printf("Number of trailing zeros of factorial %d is %d.\n\n", y, TrailingZeros(y));
    return 0;
}