/*  Write a C program to check whether three given integer values are in the 
range 20..50 inclusive. Return true if 1 or more of them are in the said range 
otherwise return false.
Expected Output:

1
1
1
0 */

#include <stdio.h>
int main()
{
    printf("%d", test(20, 15, 18));
    printf("\n%d", test(35, 20, 49));
    printf("\n%d", test(30, 25, 32));
    printf("\n%d", test(10, 4, 8));
}

int test(int x, int y, int z)
{
    if (x >= 20 && x <= 50 || y >= 20 && y <= 50 || z >= 20 && z <= 50)
    {
        return 1;
    }
    else
        return 0;

}