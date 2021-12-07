/* Write a program in C to return the number of clumps(a series of 2 or more adjacent elements of the same value) in a given array.
Expected Output:
The given array is:
17 42 42 7 24 24 17 54 17
The number of clumps in the array is: 2 */

#include <stdio.h>

int CountClumps(int arr[], int size)
{
    int i, current = -1, clump = 0, num = size;
    for (i = 0; i < num - 1; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != current)
        {
            current = arr[i];
            clump++;
        }
        else
        {
            if (arr[i] != current)
            {
                current = -1;
            }
        }
    }
    return clump;
}

int main()
{
    int arr[] = {17, 42, 42, 7, 24, 24, 17, 54, 17}, i, num;
    printf("The given array is: ");
    num = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe number of clumps in the array is: %d", CountClumps(arr, num));
    return 0;
}