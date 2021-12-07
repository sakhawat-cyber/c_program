/* Write a C program to check three given integers and return true if one of 
them is 20 or more less than one of the others.
Expected Output:

1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(11, 21, 31));
    printf("\n%d", test(11, 22, 31));
    printf("\n%d", test(10, 22, 15));
}

int test(int x, int y, int z)
{
    return abs(x - y) >= 20 ||
           abs(x - z) >= 20 ||
           abs(y - z) >= 20;
}