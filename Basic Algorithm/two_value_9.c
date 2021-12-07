/*  Write a C program to check whether two given integer values are in the range 20..50 inclusive. 
Return true if 1 or other is in the said range otherwise false. 
Expected Output:

1
1
1
0 */

#include<stdio.h>
int main()
{
    printf("%d", test (20, 15));
    printf("\n%d", test (35, 20));
    printf("\n%d", test (30, 25));
    printf("\n%d", test (10, 4));
}

int test(int x, int y)
{
    if (x >= 20 &&  x<= 50 || y >= 20 && y <= 50)
    {
        return 1;
    }
    else
        return 0;
}