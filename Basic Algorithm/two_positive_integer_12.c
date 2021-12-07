/* Write a C program to find the larger value from two positive integer values 
that is in the range 20..30 inclusive, or return 0 if neither is in that range. 
Expected Output:

0
30
25
28 */

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("%d", test(78, 95));
    printf("\n%d", test(20,30));
    printf("\n%d", test(21, 25));
    printf("\n%d", test(28, 28));
}
int test(int x, int y)
{
    if (x >= 20 && x <= 30 && y >= 20 && y <= 30)
    {
        if (x >= y)
        {
            return x;
        }
        else
        {
            return y; 
        }
    }
    else if (x >= 20 && y <= 30)
    {
        return x;
    }
    else if (y >= 20 && y <= 30)
    {
        return y;
    }
    else
    {
        return 0;
    }
}