/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
Write a C programming to find the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Expected Output:

232792560
*/

#include <stdio.h>

static unsigned long gcd(unsigned long a, unsigned long b);
static unsigned long lcm(unsigned long a, unsigned long b);

int main()
{
    unsigned long ans = 1;
    unsigned long i;
    for (i = 1; i <= 20; i++)
        ans = lcm(ans, i);
    printf("\nSmallest positive number evenly divisible evenly divisible: %lu\n\n", ans);
    return 0;
}

static unsigned long gcd(unsigned long a, unsigned long b)
{
    unsigned long right;
    if (a > b)
    {
        unsigned long temp;
        temp = a;
        a = b;
        b = temp;
    }
    while (right = a % b)
    {
        a = b;
        b = right;
    }
    return b;
}

static unsigned long lcm(unsigned long a, unsigned long b)
{
    unsigned long long ptr = (unsigned long long)a * b;
    return ptr / gcd(a, b);
}