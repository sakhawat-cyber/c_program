/* Write a C program to check a given array of integers and return true if there is a 3
with a 5 somewhere later in the given array. 
Expected Output:
0
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 3, 4};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {3, 3, 3, 5, 5, 5};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {2, 5, 7, 5, 9, 10};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int three = 0;
    for (int i = 0; i < size; i++)
    {
        if (three && num[i] == 5)
            return 1;
        if (num[i] == 3)
            three = 1;
    }
    return 0;
}