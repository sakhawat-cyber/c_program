/* Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not
both.
Expected Output:

1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(3));
    printf("\n%d", test(7));
    printf("\n%d", test(21));
}

int test (int x)
{
    return x % 3 == 0 ^ x % 7 == 0;
}