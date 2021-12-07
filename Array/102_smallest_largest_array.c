/* Write a program in C to rearrange an array in such an order that– smallest, largest, 2nd smallest, 2nd largest and on.
Expected Output:
The given array is:
5 8 1 4 2 9 3 7 6
The new array is:
1 9 2 8 3 7 4 6 5 */

#include <stdio.h>

void sort(int arr[], int num)
{
    int i, j, temp;
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}

void RearrangeArray(int arr[], int size)
{
    sort(arr, size);
    int i, j, temp_arr[size], arr_index = 0;
    for (i = 0, j = size - 1; i <= size / 2 || j > size / 2; i++, j--)
    {
        temp_arr[arr_index] = arr[i];
        arr_index++;
        temp_arr[arr_index] = arr[j];
        arr_index++;
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = temp_arr[i];
    }
}

int main()
{
    int arr[] = {5, 8, 1, 4, 2, 9, 3, 7, 6}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe new array is: \n");
    RearrangeArray(arr, num);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    
    return 0;
}