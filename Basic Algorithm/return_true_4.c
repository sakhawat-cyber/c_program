/* Write a C program to check a given integer and return true if it is within 10 of 100 or 200. 
Expected Output:

1
1
0 */

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("%d", test(103));
    printf("\n%d", test(90));
    printf("\n%d", test(89));
}

int test(int x)
{
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10)
        return 1;
    return 0;
}