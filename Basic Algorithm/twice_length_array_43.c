/* Write a C program to check a given array of integers and return true if the array contains 10 or 20 twice. The
 length of the array will be 0, 1, or 2.
Expected Output:

0
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {20, 15};
    int array_size1;
    array_size1 = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size1));

    int array2[] = {20, 20};
    array_size1 = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size1));

    int array3[] = {12, 16};
    array_size1 = sizeof(array3) / sizeof(array1[0]);
    printf("\n%d", test(array3, array_size1));
}
int test(int num[], int size)
{
    return size == 2 && ((num[0] == 10 && num[1] == 20) || (num[0] == 20 && num[1] == 20));
}