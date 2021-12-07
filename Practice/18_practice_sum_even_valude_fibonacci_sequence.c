/*
In mathematics, the Fibonacci numbers, commonly denoted Fn form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is, and for n > 1. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, . . .
Write a C programming to find the sum of the even-valued terms from the terms in the Fibonacci sequence whose values do not exceed one million. 
Expected Output:

10
*/

#include<stdio.h>
int main()
{
    unsigned int x1 = 1, x2 = 1, x3 = 2, sum = 0;
    while (x3 < 10)
    {
        x3 = x1 + x2;
        sum += x3 * !(x3 % 2);
        x1 = x2;
        x2 = x3;
    }
    printf("\nThe fibonacci sum: %u\n\n", sum);
    return 0;
}