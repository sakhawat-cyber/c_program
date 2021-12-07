/*
Write a C programming to get the maximum product from a given integer after breaking the integer into the sum of at least two positive integers.
Example:
Input: 12
Output: 81
Explanation: 12 = 3 + 3 + 3 + 3, 3 x 3 × 3 × 3 = 81.
Input: 7
Output: 12
Explanation: 7 = 3 + 2 + 2, 3 x 2 x 2 = 12.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int IntegerBreak(int n)
{
    if (n == 2)
        return 1;
    else if (n == 3)
        return 2;
    else if (n % 3 == 0)
        return (int)pow(3, n / 3);
    else if (n % 3 == 1)
        return 2 * 2 * (int)pow(3, (n - 4) / 3);
    else
        return 2 * (int)pow(3, n / 3);
}

int main()
{
    int x = 12;
    printf("Maximum product of %d after breaking the integer %d\n\n", x, IntegerBreak(x));
    x = 7;
    printf("Maximum product of %d after breaking the integer %d", x, IntegerBreak(x));
    return 0;
}