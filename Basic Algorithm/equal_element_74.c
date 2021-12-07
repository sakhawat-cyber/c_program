/* Write a C program to check whether the value of each element is equal or 
greater than the value of previous element of a given array of integers.
Expected Output:

0
1
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_size;
    int array1[] = {5, 5, 1, 5, 5};
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 2, 3, 4};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {5, 3, 5, 5, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        if (num[i + 1] < num[i])return 0;
    }
    return 1;
}