/*  Write a C program to check whether two or more 
non-negative given integers have the same rightmost digit.

Expected Output:
1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d", test(11, 21, 31));
    printf("\n%d", test(11, 22, 31));
    printf("\n%d", test(11, 22, 33));
}

int test(int x, int y, int z)
{
    return x % 10 == y % 10 ||
           x % 10 == z % 10 ||
           y % 10 == z % 10;
}