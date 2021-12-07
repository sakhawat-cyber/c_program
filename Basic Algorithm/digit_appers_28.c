/*  Write a C program to check two given integers, each in the range 10..99. Return true if a digit 
appears in both numbers, such as the 3 in 13 and 33. 
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(11, 21));
    printf("\n%d", test(11, 20));
    printf("\n%d", test(10, 10));
}
int test(int x, int y)
{
    return x / 10 == y / 10 ||
           x / 10 == y % 10 ||
           x % 10 == y / 10 ||
           x % 10 == y % 10;
}