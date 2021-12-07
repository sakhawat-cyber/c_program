/*
Write a C program to find all unique triplets in a given array integers whose sum equal to zero.
Expected Output:

Original Array: -2  0  0  1  1
Unique triplets of the said array whose sum equal to zero: -2 1 1
*/

#include <stdio.h>
#include <stdlib.h>

static int compareTwoNum(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

static void twoSum(int *num, int low_pos, int high_pos, int target, int **result, int *chr)
{
    while (low_pos < high_pos)
    {
        int different = target - num[low_pos];
        if (different > num[high_pos])
        {
            while (++low_pos < high_pos && num[low_pos] == num[low_pos - 1])
            {
            }
        }

        else if (different < num[high_pos])
        {
            while (--high_pos > low_pos && num[high_pos] == num[low_pos - 1])
            {
            }
        }
        else
        {
            result[*chr] = malloc(3 * sizeof(int));
            result[*chr][0] = -target;
            result[*chr][1] = num[low_pos];
            result[*chr][2] = num[high_pos];
            (*chr)++;
            while (++low_pos < high_pos && num[low_pos] == num[low_pos - 1])
            {
            }
            while (--high_pos > low_pos && num[high_pos] == num[high_pos + 1])
            {
            }
        }
    }
}

static int **threeSum(int *num, int num_size, int *returnSize)
{
    if (num_size < 3)
        return NULL;
    qsort(num, num_size, sizeof(*num), compareTwoNum);
    *returnSize = 0;
    int i, j, capacity = 100;
    int **result = malloc(capacity * sizeof(int *));
    for (i = 0; i < num_size; i++)
    {
        if (i == 0 || i > 0 && num[i] != num[i - 1])
        {
            twoSum(num, i + 1, num_size - 1, -num[i], result, returnSize);
        }
    }
    return result;
}

int main()
{
    int i, size;
    int num[] = {-2, 0, 0, 1, 1};
    size = sizeof(num) / sizeof(num[0]);

    printf("\nOriginal Array: \n");
    for (i = 0; i < size; i++)
        printf("%d ", num[i]);

    int **result = threeSum(num, sizeof(num) / sizeof(*num), &size);

    printf("\nUnique triplets of the said array whose sum equal to zero: \n");
    for (i = 0; i < size; i++)
        printf("%d %d %d\n", result[i][0], result[i][1], result[i][2]);
    printf("\n\n");
    return 0;
}
