/* Write a program in C to sort n numbers in range from 0 to n^2.
Expected Output:
The given array is: 37 62 52 7 48 3 15 61
Sorted array is: 3 7 15 37 48 52 61 62 */

#include<stdio.h>

int CountSort(int *arr, int size, int exp)
{
    int i, ctr[size], output[size];
    for(i = 0; i < size; i++)
        ctr[i] = 0; 

    for(i = 0; i < size; i++)
        ctr[(arr[i] / exp) % size]++;

    for(i = 1; i < size; i++)
        ctr[i] += ctr[i - 1];

    for(i = size - 1; i >= 0; i--)
    {
        output[ctr[(arr[i] / exp) % size] - 1] = arr[i];
        ctr[(arr[i] / exp) % size]--;
    }

    for(i = 0; i < size; i++)
        arr[i] = output[i];
}

void SortArray(int arr[], int size1)
{
    CountSort(arr, size1, 1);
    CountSort(arr, size1, size1);
}

int main()
{
    int arr[] = {37, 62, 52, 7, 48, 3, 15, 61}, i, num;
    printf("The given array is: ");

    num = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    
    SortArray(arr, num);
    printf("\nSorted array is: ");
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}