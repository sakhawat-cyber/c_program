/* Write a C program to check whether a given array of integers of length 2, does not
 contain 15 or 20.
Expected Output:

0
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {11, 15};
    printf("%d", test(array1));

    int array2[] = {25, 20};
    printf("\n%d", test(array2));

    int array3[] = {12, 11};
    printf("\n%d", test(array3));
}

int test(int num[])
{
    return num[0] != 15 && num[0] != 20 && num[1] != 15 && num[1] != 20;
}