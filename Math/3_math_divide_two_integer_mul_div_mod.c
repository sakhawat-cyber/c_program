/*
Write a C program to divide two integers (dividend and divisor) without using multiplication, division and mod operator.
Example:
Input:
dividend_num = 7
divisor_num = 2

dividend_num = -17
divisor_num = 5

dividend_num = 35
divisor_num = 7
Output:
Result: 3
Result: -3
Result: 5
*/

#include <stdio.h>
#include <limits.h>

int DivideResult(int x, int y)
{
    int sign = 1;
    long int output = 0;
    if (x < 0)
        sign *= -1;
    else
        x *= -1;
    if (y < 0)
        sign *= -1;
    else
        y *= -1;
    while (x <= y)
    {
        long int temp = 0;
        long int div = y;
        while (x <= div)
        {
            temp += (temp + 1);
            x -= div;
            div += div;
        }
        if (output >= INT_MAX)
        {
            if (sign == -1)
                return INT_MIN;
            else
                return INT_MAX;
        }
        output += temp;
    }
    return output * sign;
}

int main()
{
    int i, j;
    i = 7;
    j = 2;
    printf("dividend_num = %d\n", i);
    printf("divisor_num = %d\n", j);
    printf("result = %d\n\n", DivideResult(i, j));

    i = -17;
    j = 5;
    printf("dividend_num = %d\n", i);
    printf("divisor_num = %d\n", j);
    printf("result = %d\n\n", DivideResult(i, j));

    i = 35;
    j = 7;
    printf("dividend_num = %d\n", i);
    printf("divisor_num = %d\n", j);
    printf("result = %d\n\n", DivideResult(i, j));
    return 0;
}