/*  Write a C program to compute the sum of the two given integers. If one of the given integer value
is in the range 10..20 inclusive return 18.
Expected Output:

10
18
18
241
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d", test(3, 7));
    printf("\n%d", test(10, 11));
    printf("\n%d", test(10, 20));
    printf("\n%d", test(21, 220));
}

int test(int x, int y)
{
    return (x >= 10 && x <= 20) ||
                   (y >= 10 && y <= 20)
               ? 18
               : x + y;
}