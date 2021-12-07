/*
Write a C program to count the numbers without digit 7, from 1 to a given number. Go to the editor
Example 1:
Input: n = 10
Output: 9
Example 2:
Input: n = 687
Output: 555
*/

#include <stdio.h>
#include <stdlib.h>

int CountNum(int num)
{
    int i = 1, j;
    if (num < 7)
        return num;
    if (num >= 7 && num < 10)
        return num - 1;
    while (num / i > 9)
        i = i * 10;
    j = num / i;
    if (j != 7)
        return CountNum(j) * CountNum(i - 1) + CountNum(j) + CountNum(num % i);
    else
        return CountNum(j * i - 1);
}

int main()
{
    int n = 10;
    if (n > 0)
        printf("\nThe count numbers without digit 7, from 1 to %d: %d\n\n", n, CountNum(n));
    n = 687;
    if (n > 0)
        printf("The count numbers without digit 7, from 1 to %d: %d\n\n", n, CountNum(n));
    return 0;
}