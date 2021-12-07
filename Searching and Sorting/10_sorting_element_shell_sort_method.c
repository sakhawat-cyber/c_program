/*
Write a C program that sort numbers using 
shell sorting method. 
According to Wikipedia "Shell sort or 
Shell's method, is an in-place comparison 
sort. It can be seen as either a 
generalization of sorting by exchange 
(bubble sort) or sorting by insertion 
(insertion sort). The method starts by 
sorting pairs of elements far apart from 
each other, then progressively reducing 
the gap between elements to be compared. 
Starting with far apart elements can move 
some out-of-place elements into position 
faster than a simple nearest neighbor 
exchange."
*/

#include <stdio.h>
void shell_sort(int *arr, int n)
{
    int i, j, k, num;
    for(i = n; i /= 2;)
    {
        for(j = i; j < n; j++)
        {
           num = arr[j];
            for(k = j; k >= i && num < arr[k - i]; k -= i)
                arr[k] = arr[k - i];
            arr[k] = num;
        }
    }
}

int main()
{
    int arr[] = {4, 65, 2, -31, 0, 99, 2, 83, 728, 1};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("\nOriginal Array: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    shell_sort(arr, n);
    printf("\nSorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    printf("\n\n");
    return 0;
}