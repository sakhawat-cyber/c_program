/*
 Write a C program to count the total number of digit 1 appearing in all positive integers less than or equal to a given integer n.
Example:
Input n = 12,
Return 5, because digit 1 occurred 5 times in the following numbers: 1, 10, 11, 12.
Example:
Input:
n = 12
n = 30
Output:
Total number of digit 1 appearing in 12 (less than or equal) is 5.
Total number of digit 1 appearing in 30 (less than or equal) is 13.
*/

#include <stdio.h>

static int CountDigitOne(int n)
{
    int n1 = 0, x = 0, base = 1, n2 = 0;
    while (n > 0)
    {
        n1 = n % 10;
        n = n / 10;
        if (n1 > 1)
            x += (n + 1) * base;
        else if (n1 < 1)
            x += n * base;
        else
            x += n * base + n2 + 1;
        n2 += n1 * base;
        base *= 10;
    }
    return x;
}

int main()
{
    int x, y;
    x = 12;

    printf("n = %d\n", x);
    printf("Total number of digit 1 appering in %d (less than or equal) is %d.\n\n", x, CountDigitOne(x));
    x = 30;
    printf("n = %d\n", x);
    printf("Total number of digit 1 appering in %d (less than or equal) is %d.\n\n", y, CountDigitOne(x));
    return 0;
}