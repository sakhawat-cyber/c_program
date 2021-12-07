/*  Write a C program to compute the sum of the three integers. If one of the
values is 13 then do not count it and its right towards the sum.
Expected Output:

16
23
10
0 */

#include<stdio.h>
int main()
{
    printf("%d",test(4, 5, 7));
    printf("\n%d",test(7, 4, 12));
    printf("\n%d",test(10, 13, 12));
    printf("\n%d",test(13, 12, 18));
}

int test(int x, int y, int z)
{
    if(x == 13) 
        return 0;
    if(y == 13)
        return x;
    if(z == 13)
        return y + z;
    return x + y + z;
}