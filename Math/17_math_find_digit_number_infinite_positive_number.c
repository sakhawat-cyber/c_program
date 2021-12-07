/*
Write a C programming to find the nth digit of number 1 to n?. Go to the editor
Infinite integer sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 .. where n is a positive integer.
Example:
Input:
7
Output:
7
Input:
12
Output:
1
The 12th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is 1, which is part of the number 11.
*/

#include <stdio.h>
int FindNthDigit(int n)
{
    unsigned int i, j, k;
    i = j = 1;
    while (n > 9 * i * j)
    {
        n -= 9 * i * j;
        j *= 10;
        i++;
    }
    k = j + (n - 1) / i;
    for (j = (n - 1) % i; j < i - 1; j++)
        k = k / 10;
    return k % 10;
}
int main()
{
    int n;
    n = 7;
    printf("\n%d digit of the sequence is %d\n\n", n, FindNthDigit(n));
    n = 12;
    printf("\n%d digit of the sequence is %d\n\n", n, FindNthDigit(n));
}