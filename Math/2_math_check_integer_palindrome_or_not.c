/*
Write a C program to check whether an integer is a palindrome or not. An integer is a palindrome when it reads the same forward as backward.
Example:
Input:
i = 1221
i = -121
i = 100
Output:
Is Palindrome: 1
Is Palindrome: 0
Is Palindrome: 0
*/

#include <stdio.h>
#include <stdbool.h>

bool IsPalindrom(int i)
{
    int n, n1, x = 0;
    if (i < 0)
        return false;
    n = i;
    while (n)
    {
        n1 = n % 10;
        if (x > (0x7fffffff - n1) / 10)
            return false;
        x = x * 10 + n1;
        n = n / 10;
    }
    return (x == i);
}

int main(void)
{
    int i;
    i = 1221;
    printf("i = %d\n", i);
    printf("Is palindrome: %d\n\n", IsPalindrom(i));
    //scanf("%d", &i);

    i = -121;
    printf("i = %d\n", i);
     printf("Is palindrome: %d\n\n", IsPalindrom(i));
    //scanf("%d", &i);

    i = 100;
    printf("i = %d\n", i);
    printf("Is palindrome: %d\n\n", IsPalindrom(i));
    //scanf("%d", &i);
    return 0;
}