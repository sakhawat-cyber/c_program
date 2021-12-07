/* Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7.o
Expected Output:

1
1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(3));
    printf("\n%d", test(12));
    printf("\n%d", test(14));
    printf("\n%d", test(16));
}

int test(int x)
{
    return x % 3 == 0 || x % 7 == 0;
}