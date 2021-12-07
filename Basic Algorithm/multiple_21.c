/* Write a C program to check whether a given number is within 2 of a multiple of 10.
Expected Output:

0
0
1
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(3));
    printf("\n%d", test(7));
    printf("\n%d", test(8));
    printf("\n%d", test(21));
}
int test(int x)
{
    return x % 10 <= 2 ^ x % 10 >= 8;
}
