/* Write a C program to check whether a given array of integers contains a 3 or a 5.Go to the editor
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int mauin()
{
    int array1[] = {1, 3, 5, 7, 9};
    int array_size;
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {0, 2, 4, 6, 8};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {3, 3, 3, 5, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num[i] != 3 && num[i] != 5)
            return 0;
    }
    return 1;
}