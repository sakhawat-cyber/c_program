/*
Write a C program that sort numbers using 
Bogo Sort method. Go to the editor
In computer science, Bogo Sort is a 
particularly ineffective sorting algorithm 
based on the generate and test paradigm. 
The algorithm successively generates 
permutations of its input until it finds 
one that is sorted. It is not useful for 
sorting but may be used for educational 
purposes, to contrast it with other more 
realistic algorithms.
*/

#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isSorted(int *arr, int n)
{
    while (--n >= 1)
    {
        if(arr[n] < arr[n - 1])
        return false;
    }
    return true;
}

void shiffle(int *arr, int n)
{
    int i, right, temp;

    for(i = 0; i < n; i++)
    {
        temp = arr[i];
        right = rand() % n;
        arr[i] = arr[right];
        arr[right] = temp;
    }
}


void bogoSort(int *arr, int n)
{
    while(!isSorted(arr, n))
    shiffle(arr, n);
}

int main()
{
    int arr[] = {1, 10, 9, 7, 3, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("\nOriginal Number: \n");
    for (i = 0; i < len; i++)
        printf("%d%s", arr[i], i == len ? "\n" : " ");
    printf("\nSotrted Array: \n");
    bogoSort(arr, len);
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}