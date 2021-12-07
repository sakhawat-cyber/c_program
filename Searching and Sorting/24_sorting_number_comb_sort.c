/*
Write a C program that sort numbers using 
Comb sort method.
From Wikipedia,
Comb sort is a relatively simple sorting 
algorithm originally designed by 
Włodzimierz Dobosiewicz and Artur Borowy 
in 1980, later rediscovered by Stephen 
Lacey and Richard Box in 1991. Comb sort 
improves on bubble sort.
*/

#include <stdio.h>
#include<stdlib.h>
//set the gap shrink factor
#define shrink 1.3

int *combSort(int arr[], int size)
{
    //initialize gap size 
    int gap = size;
    //gap = 1 means that array is sorted
    while(gap > 1)
    {
        //update the gap value for a next comb
        gap = gap / shrink;
        int i = 0;
        while ((i + gap) < size)
        {
            //similar to the shell sort
            if(arr[i] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
            }
            i++;
        }
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
        int *result = combSort(arr, n);
        printf("\nSorrted array: \n");
        for (i = 0; i < n; i++)
            printf("%d ", result[i]);
        printf("\n\n");
    }
    return 0;
}