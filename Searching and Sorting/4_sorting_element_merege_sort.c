/*
Write a C program to sort a list of 
elements using the merge sort algorithm. 
Go to the editor
Merge sort is an O(n log n) comparison-based 
sorting algorithm. Most implementations 
produce a stable sort, which means that 
the implementation preserves the input 
order of equal 
elements in the sorted output.
*/

#include <stdio.h>

/*function to merge the two have arr3[left....mid] 
and arr3[mid + 1...r] of array arr[]*/
void merge(int arr3[], int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid;
    //create temp arrays
    int left1[n1], right1[n2], i, j, k;
    /*copy data to temp array left[] and right[] */
    for (i = 0; i < n1; i++)
        left1[i] = arr3[left + i];
    for (j = 0; j < n2; j++)
        right1[j] = arr3[mid + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        /* code */
        if (left1[i] <= right1[j])
        {
            arr3[k] = left1[i];
            i++;
        }
        else
        {
            arr3[k] = right1[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr3[k] = left1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr3[k] = right1[j];
        j++;
        k++;
    }
}

void mergeSort(int arr2[], int left, int right)
{
    int mid;
    if (left < right)
    {
        //same as (l + r) / 2, but avoids overflow for large left and h
        mid = left + (right - left) / 2;
        mergeSort(arr2, left, mid);
        mergeSort(arr2, mid + 1, right);
        merge(arr2, left, mid, right);
    }
}
//function to print an array
void print_array(int arr1[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}

//test above function
int main()
{
    int arr[] = {125, 181, 130, 25, 61, 887};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("\nGiven array is: \n");
    print_array(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nSorted array is: \n");
    print_array(arr, arr_size);
    printf("\n\n");
    return 0;
}