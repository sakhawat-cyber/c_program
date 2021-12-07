/* Write a C program to check whether a given temperatures is less than 0 and the
other is greater than 100.
Sample Output:

1
1
0 */
#include<stdio.h>
int main(void)
{
    printf("%d",test(120, -1));
    printf("\n%d",test(- 1, 120));
    printf("\n%d",test(2, 120));
}
int test(int x, int y)
{
    return x < 0 && y > 100 || y < 0 && x > 100 ;
}