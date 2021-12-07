/* Write a C program to check whether the sequence of numbers 1, 2, 3 appears in 
a given array of integers somewhere. 
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 1, 2, 3, 1};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 1, 2, 4, 1};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 2, 2, 1, 2, 3};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (num[i] == 1 && num[i + 1] == 2 && num[i + 2] == 3)
        {
            return 1;
        }
    }
    return 0;
}