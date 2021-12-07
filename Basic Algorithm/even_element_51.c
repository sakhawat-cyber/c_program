/*  Write a C program to count number of even elements in a given array of integers.
Expected Output:

3 */

#include <stdio.h>
#include <stdlib.H>
int main(void)
{
    int array1[] = {1, 3, 6, 4, 8, 5};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));
}

int test(int num[], int size)
{
    int even = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (num[i] % 2 == 0)
            even++;
    }
    return even;
}