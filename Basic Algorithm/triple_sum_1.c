/* Write a C program to compute the sum of the two given integer values. If the two values are the 
same, then return triple their sum.
Expected Output:

3
12 */
#include<stdio.h>
int main(v0id)
{
    printf("%d",test(1, 2));
    printf("\n%d",test(2, 2));
}
int test(int x, int y)
{
    return x == y ? (x + y) * 3 : x + y;
}