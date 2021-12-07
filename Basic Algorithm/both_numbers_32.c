/* Write a C program to check two given integers and return the value whichever value is nearest to 
13 without going over. Return 0 if both numbers go over.
Expected Output:

5
12
13
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(4, 5));
    printf("\n%d", test(7, 12));
    printf("\n%d", test(10, 13));
    printf("\n%d", test(17, 33));
}

int test(int x, int y)
{
    if (x > 13 && y > 13)
        return 0;
    if (x <= 13 && y > 13)
        return x;
    if (x <= 13 && y > 13)
        return y;
    return x > y ? x : y;
}