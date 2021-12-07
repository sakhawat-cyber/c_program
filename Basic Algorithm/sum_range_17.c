/* Write a C program to compute the sum of the two given integers. If the sum is
 in the range 10..20 inclusive return 30.
Expected Output:

29
30
39
30 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d", test(12, 17));
    printf("\n%d", test(2, 17));
    printf("\n%d", test(22, 17));
    printf("\n%d", test(20, 0));
}

int test(int a, int b)
{
    if (a + b >= 10 && a + b <= 20)
    {
        return 30;
    }
    else
        a + b;
}