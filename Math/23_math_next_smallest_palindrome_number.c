/*
 Write a C program to find next smallest palindrome of a given number.
From Wikipedia,
A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar. There are also numeric palindromes, including date/time stamps using short digits 11/11/11 11:11 and long digits 02/02/2020. Sentence-length palindromes may be written when allowances are made for adjustments to capital letters, punctuation, and word dividers, such as "A man, a plan, a canal, Panama!".
Example 1:
Input: n = 121
Output: Next smallest palindrome of 121 is 131
*/

#include <stdio.h>
#include <stdlib.h>

int NextPalindrome(int n)
{
    int ans = 1, num, reverse_num = 0, digit;
    if (n < 10)
    {
        ans = 0;
        return n + 1;
    }
    num = n;
    while (ans != 0)
    {
        reverse_num = 0;
        digit = 0;
        n = ++num;

        while (n > 0)
        {
            digit = n % 10;
            reverse_num = reverse_num * 10 + digit;
            n = n / 10;
        }
        if (reverse_num == num)
        {
            ans = 0;
            return num;
        }
        else
            ans = 1;
    }
    return num;
}

int main()
{
    int n = 121;
    if (n > 0)
        printf("\nn = %d\nNext smallest palindrome of %d is %d\n", n, n, NextPalindrome(n));
    return 0;
}