/*
Write a C program that sort numbers using Pigeonhole sort method. 
From Wikipedia:
Pigeonhole sorting is a sorting algorithm that is suitable for sorting lists of elements where the 
number of elements (n) and the length of the range of possible key values (N) are approximately the 
same. It requires O(n + N) time. It is similar to counting sort, but differs in that it "moves items 
twice: once to the bucket array and again to the final destination [whereas] counting sort builds an 
auxiliary array then uses the array to compute each item's final destination and move the item there.
The pigeonhole algorithm works as follows:
Given an array of values to be sorted, set up an auxiliary array of initially empty "pigeonholes", 
one pigeonhole for each key in the range of the keys in the original array.
Going over the original array, put each value into the pigeonhole corresponding to its key, such 
that each pigeonhole eventually contains a list of all values with that key.
Iterate over the pigeonhole array in increasing order of keys, and for each pigeonhole, put its 
elements into the original array in increasing order.
*/

#include <stdio.h>
#include <stdlib.h>

int *pigeonholeSort(int arr[20], int size)
{
    int i, min_value = arr[0], max_value = arr[0], range, j;
    for (i = 1; i < size; i++)
    {
        if (arr[i] < min_value)
            min_value = arr[i];
        if (arr[i] > max_value)
            max_value = arr[i];
    }
    range = max_value - min_value + 1;
    int *temp = (int *)malloc(sizeof(int));
    for (i = 0; i < range; i++)
        temp[i] = 0;
    for (i = 0; i < size; i++)
        temp[arr[i] - min_value]++;
    j = 0;
    for (i = 0; i < range; i++)
    {
        while (temp[i] > 0)
        {
            /* code */
            arr[j] = i + min_value;
            temp[i]--;
            j++;
        }
    }
    return arr;
}

int main()
{
    int i, n, arr[20];
    printf("\nInput number of elements you went to sort: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("\nInput the number: \n");
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int *result = pigeonholeSort(arr, n);
        printf("Sorted Array: \n");
        for (i = 0; i < n; i++)
            printf("%d ", result[i]);
        printf("\n\n");
    }
    return 0;
}