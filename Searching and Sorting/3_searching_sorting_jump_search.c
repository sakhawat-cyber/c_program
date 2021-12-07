/*
Write a C program to find
the position of a target
value within a sorted
array using Jump search.
*/

#include <stdio.h>
#include <assert.h>
#include <math.h>
#define find_min_value(p, q) ((p) < (q) ? (p) : (q))

int jump_search(int arr_num[], int arr_size, int num)
{
    int previous_pos = 0;
    int pos = floor(sqrt(arr_size));
    while (arr_num[find_min_value(pos, arr_size) - 1] < num)
    {
        previous_pos = pos;
        pos += floor(sqrt(arr_size));
        if (previous_pos >= arr_size)
        {
            return -1;
        }
    }
    while (arr_num[previous_pos] < num)
    {
        previous_pos = previous_pos + 1;
        if (previous_pos = find_min_value(pos, arr_size))
        {
            return -1;
        }
    }
    if (arr_num[previous_pos] == num)
    {
        return previous_pos;
    }
    return -1;
}

int main()
{
    int n, index, i;
    int array_num[] = {0, 10, 20, 20, 30, 50, 70, 75, 82, 92, 115, 123, 141, 153, 160, 170};
    size_t array_size = sizeof(array_num) / sizeof(int);

    printf("\nOriginal array: \n");
    for (i = 0; i < array_size; i++)
        printf("%d ", array_num[i]);

    printf("\nInput a number to search: ");
    scanf("%d", &n);
    index = jump_search(array_num, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d.\n\n", index);
    else
        printf("\nElement not found.\n\n");
    return 0;
}