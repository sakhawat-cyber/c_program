/* Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.
Sample Output:

1
0
1 */

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("%d", test(100, 199));
    printf("\n%d", test(250, 300));
    printf("\n%d", test(105, 190));
}
int test(int x, int y)
{
    return (x >= 100 && x <= 200) ||
           (y >= 100 && y <= 200);
}
