/*  Write a C program to check a given array of integers and return true if the 
specified number of same elements appears at the start and end of the given array.
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {3, 7, 5, 5, 3, 7};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size, 2));

    int array2[] = {3, 7, 5, 5, 3, 7};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size, 3));

    int array3[] = {3, 7, 5, 5, 3, 7, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size, 3));
}

int test(int array[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] != array[num - size + i])
        {
            return 0;
        }
    }
    return 1;
}