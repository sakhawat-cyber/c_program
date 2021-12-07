/*
Write a C programming to find the first missing positive integer from a given unsorted integer array. Go to the editor
Expected Output:

2
*/

#include <stdio.h>
#include <stdlib.h>

static inline void swapValue(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

static int firstMissingPositiveNum(int *n1, int n2)
{
    if (n2 < 1)
        return 1;
    int i;
    while (i < n2)
    {
        if (n1[i] != i + 1 && n1[i] > 0 && n1[i] <= n2 && n1[i] != n1[n1[i] - 1])
        {
            swapValue(n1 + i, n1 + n1[i] - 1);
        }
        else
            i++;
    }
    for (i = 0; i < n2; i++)
    {
        if (n1[i] != i + 1)
            break;
    }
    return i + 1;
}

int main()
{
    int i, count = 4;
    int num[4] = {3, 4, -1, 1};

    printf("\nThe first positive integer unsorted array: %d\n\n", firstMissingPositiveNum(num, count));
    return 0;
}