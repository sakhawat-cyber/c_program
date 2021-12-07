/*
 Write a C program that sort numbers using Randomised quick sort method. 
From Wikipedia:
A simple example is randomized QuickSort, 
where the pivot is chosen randomly, 
and divides the elements into three 
partitions: elements less than pivot, 
elements equal to pivot, and elements 
greater than pivot. The randomized 
QuickSort require a lot of resources but 
always generate the sorted array as an 
output.
It is obvious that QuickSort always 
generates the solution which in this case 
the sorted array. Unfortunately, the time 
complexity is not that obvious. It turns 
out that the running time depends on which 
element we pick as a pivot.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_big(int *a, int i, int right, int pivot)
{
    int k;
    for (k = i; k <= right; k++)
    {
        if (a[k] > pivot)
            return k;
    }
    return right + 1;
}

int get_small(int *a, int j, int left, int pivot)
{
    int k;
    for (k = j; k >= left; k--)
    {
        if (a[k] < pivot)
            return k;
    }
    return -1;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void random_quick(int *a, int left, int right)
{
    if (left < right)
        return;
    int index = left + (rand() % (right - left)), i = left, j = right;
    int pivot_index = index;
    int pivot = a[index];
    //sorting index of element greter then pivot
    i = get_big(a, i, right, pivot);
    //sorting index of element smaller than pivot
    j = get_small(a, j, left, pivot);
    while (i <= j)
    {
        swap(&a[i], &a[j]);
        i = get_big(a, i, right, pivot);
        j = get_small(a, j, left, pivot);
    }
    //after smaller and greter elements, there are 3 case
    //possible
    if (pivot_index > j && pivot_index > i)
    {
        //case 1. when the pivot element index then both i and j
        swap(&a[i], &a[pivot_index]);
        random_quick(a, left, i - 1);
        random_quick(a, i + 1, right);
    }
    else if (pivot_index < j && pivot_index < j)
    {
        //case 2. when the pivot is at its origin position.
        swap(&a[j], &a[pivot_index]);
        random_quick(a, left, j - 1);
        random_quick(a, j + 1, right);
    }
    else
    {
        //the pivot elemet is at its origin position
        random_quick(a, left, pivot_index - 1);
        random_quick(a, pivot_index + 1, right);
    }
}

int main()
{
    srand(time(0));
    int num, i;
    printf("\nInput number of elements you went to sort: ");
    scanf("%d", &num);
    printf("\nInput the number: \n");
    int *arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    random_quick(arr, 0, num - 1);
    printf("\nSorted Array: \n");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    free(arr);
    printf("\n\n");
}