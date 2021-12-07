/* Write a program in C to convert the array in such a way that double its value and replace the next number with 0 if current and next element are same and rearrange the array such that all 0's shifted to the end.
Expected Output:
The given array is: 0 3 3 3 0 0 7 7 0 9
The new array is: 6 3 14 9 0 0 0 0 0 0 */

#include <stdio.h>

void ZeroEnd(int arr[], int n)
{
    int num = 0, i;
    for (i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[num++] = arr[i];
    while (num < n)
        arr[num++] = 0;
}

void UpdateArrayRearrange(int arr[], int size)
{
    if (size == 1)
        return;

    int i;
    for (i = 0; i < size; i++)
        if ((arr[i] != 0) && (arr[i] == arr[i + 1]))
        {
            arr[i] = 2 * arr[i];
            arr[i + 1] = 0;
            i++;
        }
    ZeroEnd(arr, size);
}

int main()
{
    int arr[] = {0, 3, 3, 3, 0, 0, 7, 7, 0, 9}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe new array is: ");
    UpdateArrayRearrange(arr, num);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
}