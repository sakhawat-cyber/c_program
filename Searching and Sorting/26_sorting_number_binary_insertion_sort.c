/*
Write a C program that sort numbers using 
Binary insertion sort method.
Binary insertion sort employs a binary 
search to determine the correct location 
to insert new elements, and therefore 
performs ⌈log2 n⌉ comparisons in the worst 
case, which is O(n log n).
*/

#include <stdio.h>
#include<stdlib.h>

int binarySearch(int *arr, int key, int low, int high)
{
    if (low >= high)
        return (key > arr[low]) ? (low + 1) : low;
    int mid = low + (high - 1) / 2;
    if (arr[mid] == key)
        return mid + 1;
    else if (arr[mid] > key)
        return binarySearch(arr, key, low, mid - 1);
    else
        return binarySearch(arr, key, mid + 1, high);
}

//array to be sorted here
int *insertionSort(int *arr, int size)
{
    int i, j, key, index;
    for (i = 0; i < size; i++)
    {
        j = i - 1;
        key = arr[i];
        //use binary search to find keys index
        index = binarySearch(arr, key, 0, j);
        while (j >= index)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int main()
{
    int arr[100], i, n = 0;
    printf("\nInput number of element you to sort: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("\nInput the number: \n");
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int *result = insertionSort(arr, n);
        printf("\nSorted array: \n");
        for (i = 0; i < n; i++)
            printf("%d ", result[i]);
        printf("\n\n");
    }
    return 0;
}
