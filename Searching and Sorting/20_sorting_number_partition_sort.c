/*
 Write a C program that sort numbers using 
 partition sort method. 
Partition-exchange sort is an efficient 
sorting algorithm. Developed by British 
computer scientist Tony Hoare in 1959 and 
published in 1961, it is still a commonly 
used algorithm for sorting. When 
implemented well, it can be about two or 
three times faster than its main 
competitors, merge sort and heapsort.
*/

#include <stdio.h>
#include <stdlib.h>

void swap_val(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (1)
    {
        /* find leftmost element >= pivot*/
        do
        {
            i++;
        } while (arr[i] < pivot);
        //find rightmost element <= pivot
        do
        {
            j--;
        } while (arr[j] > pivot);
        //if two pointers met
        if (i >= j)
            return j;
        swap_val(&arr[i], &arr[j]);
    }
}

int *partition_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int value;
        value = partition(arr, low, high);
        partition_sort(arr, low, value);
        partition_sort(arr, value + 1, high);
        return arr;
    }
}

int main()
{
    int arr[20], i, size;
    printf("\nInput number of element you went to sort: ");
    scanf("%d", &size);
    printf("\nInput the number: \n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    if (size >= 1)
    {
        int *result = partition_sort(arr, 0, size - 1);
        printf("\nSorted Array: \n");
        for (i = 0; i < size; i++)
            printf("%d ", result[i]);
    }
    printf("\n\n");
}