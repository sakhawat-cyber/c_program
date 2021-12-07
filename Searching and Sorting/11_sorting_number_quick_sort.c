/*
Write a C program that sort numbers using 
QuickSort method. 
Note: According to Wikipedia "Quicksort 
is a comparison sort, meaning that it can 
sort items of any type for which a 
"less-than" relation (formally, a total 
order) is defined. Inefficient 
implementations it is not a stable sort, 
meaning that the relative order of equal 
sort items is not preserved. Quicksort 
can operate in-place on an array, 
requiring small additional amounts of 
memory to perform the sorting."
*/

#include <stdio.h>

void shell_sort(int *arr, int n)
{
    int i, j, k, num;
    for (i = n; i /= 2;)
    {
        for (j = i; j < n; j++)
        {
            num = arr[j];
            for (k = j; k >= i && num < arr[k - i]; k -= i)
                arr[k] = arr[k - i];
            arr[k] = num;
        }
    }
}

int main()
{
    int i;
    int arr[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    
    printf("\nOriginal array: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    shell_sort(arr, n);
    printf("\nSorted Array: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    printf("\n\n");
    return 0;
}