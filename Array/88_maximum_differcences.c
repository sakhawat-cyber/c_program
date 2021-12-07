/* Write a program in C to find the maximum n – m such that 
array[n] > array[m] from a given array[].
Given an array arr[], find the maximum j – i such that arr[j] > arr[i]
Expected Output:
The given array is:
7 5 8 2 3 2 4 2 1 0
m = 0, n = 2, arr1[m] = 7 arr1[n] = 8 difference = 2
m = 3, n = 6, arr1[m] = 2 arr1[n] = 4 difference = 3
The maximum differcences between two position of array index is: 3 */

#include <stdio.h>

int FindMaximumDiffercence(int arr[], int size)
{
    int i, j, diff = -1;

    for (i = 0; i < size; ++i)
    {
        for (j = size - 1; j > i; --j)
        {
            if (arr[j] > arr[i] && diff < (i - j))
            {
                printf("m = %d, n = %d, arr[m] = %d arr[n] = %d difference = %d\n", i, j, arr[i], arr[j], i - j);
                diff = j - i;
            }
        }
    }
    return diff;
}

int main()
{
    int arr[] = {7, 5, 8, 2, 3, 2, 4, 2, 1, 0}, i, num;
    printf("The given array is: ");
    num = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    int dif = FindMaximumDiffercence(arr, num);
    printf("\nThe maximum differcences beetween two position of array index is: %d", dif);

    getchar();
    return 0;
}