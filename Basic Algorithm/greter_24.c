/* Write a C program to check whether y is greater than x, and z is greater than
y from three given integers x,y,z.

Expected Output:

1
1
0 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("%d", test(1, 2, 3));
    printf("\n%d", test(4, 5, 6));
    printf("\n%d", test(-1, 1, 0));
}

int test(int x, int y, int z)
{
    return x < y && y < z;
}