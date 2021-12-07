/* Write a program in C to rearrange an array such that arr[i]=i.

N.B.: Given array contains N elements, from 0 to N – 1. All elements within the range may not be present in the array. There will be -1 if an element within the range is not present in the array.

Expected Output:
The given array is:
2 5 -1 6 -1 8 7 -1 9 1
The new array is: -1 1 2 -1 -1 5 6 7 8 9 */

#include <stdio.h>

int ArrayRearrange(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] != -1 && arr[i] != i)
        {
            int x = arr[i];
            while (arr[x] != -1 && arr[x] != x)
            {
                int y = arr[x];
                arr[x] = x;  
                x = y;
            }
            arr[x] = x;
            if (arr[i] != i)
            {
                arr[i] = -1;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 5, -1, 6, -1, 8, 7, -1, 9, 1}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe new array is: \n");
    ArrayRearrange(arr, num);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
}