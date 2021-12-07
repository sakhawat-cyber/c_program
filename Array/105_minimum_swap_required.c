/* Write a program in C to find minimum number of swaps required to gather all elements less than or equals to k.
Expected Output:
The given array is:
2 7 9 5 8 7 4
The minimum swap required is: 2 */

#include <stdio.h>

int MinimumSwap(int arr[], int size, int n1)
{
    int i, j, no_swap, num = 0, element = 0;
    for (i = 0; i < size; ++i)
        if (arr[i] <= n1)
            ++num;

    for (i = 0; i < num; i++)
        if (arr[i] > n1)
            ++element;

    no_swap = element;
    for (i = 0, j = num; j < size; ++i, ++j)
    {
        if (arr[i] > n1)
        {
            --element;
        }
        if (arr[j] > n1)
        {
            ++element;
        }
    }

    if (no_swap > element)
    {
        no_swap = element;
    }

    if (no_swap < element)
    {
        no_swap = no_swap;
    }
    return no_swap;
}

int main()
{
    int arr[] = {2, 7, 9, 5, 8, 7, 4}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    int n = num;

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe minimum swap requird is: %d", MinimumSwap(arr, num, n));
    return 0;
}