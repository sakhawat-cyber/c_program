/*
Write a C program to remove the duplicates from a given array of integers.
Expected Output:

Original array:
1 1 2 3 4 4 5 6 6 6 
After removing duplicates from the above sorted array:
1 2 3 4 5 6
*/

#include <stdio.h>
#include <stdlib.h>

static int removeDuplicates(int *num, int size)
{
    if (size <= 1)
        return size;
    int i = 0, j, count = 1;
    while (i < size)
    {
        for (j = i + 1; j < size && num[i] == num[j]; j++)
        {
        }
        if (j < size)
            num[count++] = num[j];
        i = j;
    }
    return count;
}

int main()
{
    int num[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 6};
    int i, size = sizeof(num) / sizeof(num[0]);
    printf("\nOriginal Array: \n");
    for (i = 0; i < size; i++)
        printf("%d ", num[i]);
    int count = removeDuplicates(num, size);
    printf("\nAfter removing duplicatse from the above array: \n");
    for (i = 0; i < count; i++)
        printf("%d ", num[i]);
    printf("\n\n");
    return 0;
}