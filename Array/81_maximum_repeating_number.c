/*  Write a program in C to find the maximum repeating number in a given array.
The array range is [0..n-1] and the elements are in the range [0..k-1] and k<=n..
Expected Output:
The given array is:
2 3 3 5 3 4 1 7 7 7 7
The maximum repeating number is: 7 */

#include <stdio.h>

int MaximumRepeatingNumber(int *arr, int size, int n1)
{
    int i, max = arr[0], result = 0;
    for (i = 0; i < size; i++)
        arr[arr[i] % n1];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int arr[] = {2, 3, 3, 5, 3, 4, 1, 7, 7, 7, 7}, i, num;
    printf("The given array: ");
    num = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    int n = 8;
    printf("\nThe maximum reapating number is: %d", MaximumRepeatingNumber(arr, num, n));
    return 0;
}