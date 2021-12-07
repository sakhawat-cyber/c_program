/*
Write a C program to sort a list of 
elements using the insertion sort 
algorithm. 
Insertion sort is a simple sorting 
algorithm that builds the final sorted 
array (or list) one item at a time. It is 
much less efficient on large lists than 
other algorithms such as quicksort, 
heapsort, or merge sort.
*/

#include <stdio.h>
int main()
{
    int arr[10], n, i, array_key, j;
    printf("\nInput no. of value in the array: ");
    scanf("%d", &n);
    printf("Input %d array value(s): \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //insertion sort
    for (i = 1; i < n; i++)
    {
        array_key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > array_key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = array_key;
    }
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}