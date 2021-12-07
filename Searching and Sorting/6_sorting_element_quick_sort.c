/*
Write a C program to sort a list of 
elements using the quick sort algorithm. 

Quick sort is a comparison sort, meaning 
that it can sort items of any type for 
which a "less-than" relation (formally, a 
total order) is defined.
Note: Read n values into array and Sort 
using Quick Sort
*/

#include <stdio.h>

int n;
int main()
{

    int i, arr[20], left, right;

    void quickSort(int arr[], int, int);
    printf("\nInput number of element: ");
    scanf("%d", &n);
    printf("\nInput array values one by one: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    left = 0;
    right = n - 1;
    quickSort(arr, left, right);
    printf("\nThe quick sort array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

void quickSort(int arr[], int low, int high)
{
    int right, left, temp, n;
    if (low >= high)
        return;
    else
    {
        n = arr[low];
        right = low + 1;
        left = high;
        while (right <= left)
        {
            while (arr[right] < n && right <= high)
                right++;
            while (arr[left] > n && left > low)
                left--;
            if (right < left)
            {
                temp = arr[right];
                arr[right] = arr[left];
                arr[left] = temp;
                right++;
                left--;
            }
        }
        arr[low] = arr[left];
        arr[left] = n;
        quickSort(arr, low, left - 1);
        quickSort(arr, left + 1, high);
    }
}