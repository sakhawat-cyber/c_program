/*
Write a C program to find all unique quadruplets in a given array of integers whose sum equal to zero.
Expected Output:

Original Array: 0  4  7  0  1  6  6  -3  
Unique quadruplets  of the said array whose sum equal to 12: 
0 0 6 6
0 1 4 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compareNum(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

static void nthSum(int *arr_num, int low_num, int high_num, int target, int total, int n, int *stack, int len, int **result, int *ctr)
{
    int i;
    if (n == 2)
    {
        while (low_num < high_num)
        {
            int different = target - arr_num[low_num];
            if (different > arr_num[high_num])
            {
                while (++low_num < high_num && arr_num[low_num] == arr_num[low_num - 1])
                {
                }
            }
            else if (different < arr_num[high_num])
            {
                while (--high_num > low_num && arr_num[high_num] == arr_num[high_num + 1])
                {
                }
            }
            else
            {
                stack[len++] = arr_num[low_num];
                stack[len++] = arr_num[high_num];
                result[*ctr] = malloc(total * sizeof(int));
                memcpy(result[*ctr], stack, total * sizeof(int));
                (*ctr)++;
                len -= 2;
                while (++low_num < high_num && arr_num[low_num] == arr_num[low_num - 1])
                {
                }
                while (--high_num > low_num && arr_num[high_num] == arr_num[high_num + 1])
                {
                }
            }
        }
    }
    else
    {
        for (i = low_num; i <= high_num - n + 1; i++)
        {
            if (i > low_num && arr_num[i] == arr_num[i - 1])
                continue;
            stack[len++] = arr_num[i];
            nthSum(arr_num, i + 1, high_num, target - arr_num[i], 4, n - 1, stack, len, result, ctr);
            len--;
        }
    }
}

static int **fourSum(int *arr_num, int size, int target, int *return_size)
{
    if (size < 4)
        return NULL;
    qsort(arr_num, size, sizeof(*arr_num), compareNum);
    *return_size = 0;
    int i, capacity = 100;

    int **result = malloc(capacity * sizeof(int *));
    int *stack = malloc(4 * sizeof(int));
    nthSum(arr_num, 0, size - 1, target, 4, 4, stack, 0, result, return_size);
    return result;
}

int main()
{
    int i, ctr;
    int arr[] = {0, 4, 7, 0, 1, 6, 6, -3};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal Array: \n");
    for (i = 0; i < arr_len; i++)
        printf("%d ", arr[i]);
    int **quadruplets = fourSum(arr, sizeof(arr) / sizeof(*arr), 12, &ctr);
    printf("\nUnique quadruplets of the said array whose sum equal to 12: ");
    for (i = 0; i < ctr; i++)
        printf("\n%d %d %d %d", quadruplets[i][0], quadruplets[i][1], quadruplets[i][2], quadruplets[i][3]);
    printf("\n\n");
    return 0;
}