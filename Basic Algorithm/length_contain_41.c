/*  Write a C program to check whether a given array of integers of length 2, contains 15 or 20. 
Expected Output:

1
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {12, 20};
    printf("%d", test(array1));

    int array2[] = {14, 15};
    printf("\n%d", test(array2));

    int array3[] = {11, 21};
    printf("\n%d", test(array3));
}
int test(int num[])
{
    return num[0] == 12 || num[0] == 15 || num[1] == 12 || num[1] == 15;
}