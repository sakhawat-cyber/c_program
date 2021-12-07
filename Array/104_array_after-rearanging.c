/*  Write a program in C to rearrange an array such that even index elements are smaller and odd index elements are greater than their next.
Expected Output:
The array given is:
6 4 2 1 8 3
The new array after rearranging:
4 6 1 8 2 3 */

#include <stdio.h>

void Rearrange(int *arr, int size)
{
    int i, temp;
    for (i = 0; i < size - 1; i++)
    {
        if (i % 2 == 0 && arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        if (i % 2 != 0 && arr[i] < arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[] = {6, 4, 2, 1, 8, 3}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe new array after rearranging: \n");
    Rearrange(arr, num);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
}
