/*  Write a C program to check whether a given array of integers contains 5's and 7's. 
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {2, 4, 1, 5, 7};
    int array_size;
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {2, 9, 1, 8, 0};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 4, 3, 5, 7};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (num[i] == 5 || num[i] == 7)
        {
            return 1;
        }
    }
    return 0;
}