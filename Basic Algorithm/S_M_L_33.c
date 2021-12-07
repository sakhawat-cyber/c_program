/*  Write a C program to check three given integers (small, medium and large) and return true if the 
difference between small and medium and the difference between medium and large is same. 
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(2, 4, 6));
    printf("\n%d", test(7, 13, 21));
    printf("\n%d", test(-1, 0, 1));
}

int test(int x, int y, int z)
{
    if (x > y && x > z && y > z)
        return x - y == y - z;

    if (x > y && x > z && z > y)
        return x - z == z - y;

    if (y > x && y > z && x > z)
        return y - x == x - z;

    if (y > x && y > z && z > x)
        return y - z == z - x;

    if (z > x && z > y && x > y)
        return z - x == x - y;

    return z - y == y - x;
}