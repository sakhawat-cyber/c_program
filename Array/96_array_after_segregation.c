/* Write a program in C to segregate even and odd elements on an array.
Expected Output:
The given array is:
17 42 19 7 27 24 30 54 73
The array after segregation is: 54 42 30 24 27 7 19 17 73 */

#include <stdio.h>

void swap(int *a, int *b);

void EvenOddSeg(int arr[], int size)
{
    int left_index = 0, right_index = size - 1;
    while (left_index < right_index)
    {
        while (arr[left_index] % 2 == 0 && left_index < right_index)
            left_index++;

        while (arr[right_index] % 2 == 1 && left_index < right_index)
            right_index--;

        if (left_index < right_index)
        {
            swap(&arr[left_index], &arr[right_index]);
            left_index++;
            right_index--;
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[] = {17, 42, 19, 7, 27, 24, 30, 54, 73}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    EvenOddSeg(arr, num);
    printf("\nThe array after segregation is: \n");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    return 0;
}