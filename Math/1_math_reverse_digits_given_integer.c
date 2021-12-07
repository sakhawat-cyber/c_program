/*
Write a C program to reverse the digits of a given integer.
Example:
Input:
i = 123
i = 208478933
i = -73634
Output:
Reverse integer: 321
Reverse integer: 339874802
Reverse integer: -43637
*/

#include <stdio.h>
#include <stdlib.h>

int Reverse(int n)
{
    int num, n1 = 0;
    while (n)
    {
        num = n % 10;
        if ((n > 0 && n1 > (0x7fffffff - num) / 10) ||
            (n < 0 && n1 < ((signed)0x80000000 - num) / 10))
            return 0;
        n1 = n1 * 10 + num;
        n = n / 10;
    }
    return n1;
}

int main()
{
    int i = 123;
    printf("Original integer: %d\n", i);
    printf("Reverse integer: %d\n\n", Reverse(i));

    i = 208478933;
    printf("Original integer: %d\n", i);
    printf("Reverse integer: %d\n\n", Reverse(i));

    i = -73634;
    printf("Original integer: %d\n", i);
    printf("Reverse integer: %d\n\n", Reverse(i));
    return 0;
}