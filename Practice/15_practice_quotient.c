/*
Write a C program to divide two given integers
without using multiplication, division and mod operator.
Return the quotient after dividing.

Expected Output:

Quotient after dividing 15 and 3 : 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int dividedTwo(int n1, int n2)
{
    int sign = (float)n1 / n2 > 0 ? 1 : -1;
    unsigned int divided = n1 > 0 ? n1 : -n1;
    unsigned int divisor = n2 > 0 ? n2 : -n2;
    unsigned int bit_num[33];
    unsigned int i = 0;
    long long n = divisor;

    bit_num[i] = n;
    while (n <= divided)
    {
        bit_num[++i] = n = n << 1;
    }
    i--;
    unsigned int result = 0;
    while (divided >= divisor)
    {
        if (divided >= bit_num[i])
        {
            divided -= bit_num[i];
            result += (1 << i);
        }
        else
            i--;
    }
    if (result > INT_MAX && sign > 0)
        return INT_MAX;
    return (int)(result * sign);
}

int main()
{
    int n1 = 15, n2 = 3;

    printf("\nQuotient after dividing %d and %d: %d", n1, n2, dividedTwo(n1, n2));
    printf("\n\n");
    return 0;
}