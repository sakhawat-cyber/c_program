/* Write a C program to get the absolute difference between n and 51. If n is greater than 51 
return triple the absolute difference.
Expected Output:

6
21
0 */

#include <stdio.h>
int main(void)
{
    printf("%d",test(53));
    printf("\n%d",test(30));
    printf("\n%d",test(51));
}

int test(int n)
{
    const int x = 51;
    if (n > x)
    {
        return (n - x) * 3;
    }
    return x - n;
}