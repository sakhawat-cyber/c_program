/*
A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as taco cat or madam or racecar or the number 10801. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Write a C programming to find the largest palindrome made from the product of two 3-digit numbers.
Expected Output:

906609
*/

#include <stdio.h>
static int testPalindromic(unsigned int n);
int main()
{
    unsigned int i, j, max = 0;
    for (i = 100; i <= 999; i++)
    {
        for (j = 100; j <= 999; j++)
        {
            unsigned int ptr = i * j;
            if (testPalindromic(ptr) && ptr > max)
                max = ptr;
        }
    }
    printf("\nLargest palindrome made product three digit: %u\n\n", max);
    return 0;
}

int testPalindromic(unsigned int n)
{
    unsigned int reversed_num = 0, temp = n;
    while (temp)
    {
        reversed_num = 10 * reversed_num + (temp % 10);
        temp /= 10;
    }
    return reversed_num == n;
}