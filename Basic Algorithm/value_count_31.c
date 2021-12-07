/* Compute the sum of the three given integers. However,
 if any of the values is in the range 10..20 
inclusive then that value counts as 0, except 13 and 17

Sample Output:

16
11
13
13 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%d", test(4, 5, 7));
    printf("\n%d", test(7, 4, 12));
    printf("\n%d", test(10, 13, 12));
    printf("\n%d", test(13, 12, 18));
}

int test(int x, int y, int z)
{
    return fix_num(x) +
           fix_num(y) + fix_num(z);
}

int fix_num(int num)
{
    return (num < 13 && num > 9) ||
                   (num > 17 && num < 21)
               ? 0
               : num;
}