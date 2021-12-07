/*
 Write a C program to get the fraction part from two given integers representing the numerator and denominator in string format. Go to the editor
Example:
Input:
n = 3
d = 2

n = 4
d = 7
Output:
Fractional part: 1.5
Fractional part: 0.(571428)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *FractionToDecimal(int numerator, int denominator)
{
    char *x;
    int x1, n, *decimal, x2, x3;
    long long num, num1, y, z;
    int i, repeat_at, negative = 0;

    x1 = x2 = 100;
    n = x3 = 0;

    x = malloc(x1 * sizeof(char));
    //assert(x)
    negative = ((numerator > 0 && denominator < 0) || (numerator < 0 && denominator > 0)) ? 1 : 0;
    num = numerator;
    num1 = denominator;
    num = (num < 0) ? -num : num;
    num1 = (num1 < 0) ? -num1 : num1;

    y = num / num1;
    z = num % num1;

    if (negative && (y || z))
        x[n++] = '-';
    n += sprintf(&x[n], "%lld", y);
    if (!z)
    {
        x[n] = 0;
        return x;
    }
    x[n++] = '.';
    decimal = malloc(x2 * sizeof(int));
    //assert(decimal)
    repeat_at = -1;
    if (z < 0)
        z = -z;
    while (z)
    {
        for (i = 0; i < x3; i += 2)
        {
            if (decimal[i] == z)
            {
                repeat_at = i;
                goto done;
            }
        }
        if (x3 + 1 >= x2)
        {
            x2 *= 2;
            decimal = realloc(decimal, x2 * sizeof(int));
        }
        decimal[x3++] = z;
        z *= 10;
        y = z / num1;
        decimal[x3++] = y;
        z = z % num1;
    }
done:
    for (i = 0; i < x3; i += 2)
    {
        if (n + 3 > x1)
        {
            x1 *= 2;
            x = realloc(x, x1 * sizeof(char));
        }
        if (repeat_at == i)
            x[n++] = '(';
        x[n++] = '0' + decimal[i + 1];
    }
    if (repeat_at != -1)
        x[n++] = ')';
    x[n++] = 0;
    free(decimal);
    return x;
}

int main()
{
    int i, j;
    i = 3;
    j = 2;
    printf("n = %d\nd = %d\n", i, j);
    printf("Fractional part: %s\n\n", FractionToDecimal(i, j));

    i = 4;
    j = 7;
    printf("n = %d\nd = %d\n", i, j);
    printf("Fractional part: %s  \n\n", FractionToDecimal(i, j));
    return 0;
}