/*  Write a C program that accept two integers and return true if either one is 5 or their sum or 
difference is 5.
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(5, 4));
    printf("\n%d", test(3, 4));
    printf("\n%d", test(4, 1));
}

int test(int num, int num1)
{
    int result = (num == 5 || num1 == 5 || (num + num1) == 5 || abs(num - num1) == 5);
    if (result)
    {
        return result;
    }
}