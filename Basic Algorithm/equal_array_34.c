/*  Write a C program to check a given array of integers of length 1 or more and return true if the
first element and the last element are equal in the given array.
Expected Output:

1
0
0 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array1[] = {1, 1, 2, 2, 1};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));
    
    int array2[] = {1, 1, 2, 1, 2, 3};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));
    
    int array3[] = {12, 24, 35, 55};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int arr_size)
{
    return arr_size > 0 && num[0] == num[arr_size - 1];
}
