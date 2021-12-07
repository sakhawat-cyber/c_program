/*  Write a C program to check whether two given integers are in the range 40..50 inclusive, 
or they are both in the range 50..60 inclusive.
Expected Output:

0
0
1
1 */

#include <stdio.h>
int main()
{
    printf("%d", test(78, 95));
    printf("\n%d", test(25, 35));
    printf("\n%d", test(40, 50));
    printf("\n%d", test(55, 60));
}

int test(int x, int y)
{
    return (x >= 40 && x <= 50 && y >= 40 && y <= 50 || x >= 50 && x <= 60 &&
            y >= 50 && y <= 60);
}