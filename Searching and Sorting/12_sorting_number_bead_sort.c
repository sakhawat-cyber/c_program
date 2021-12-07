/*
Write a C program that sort numbers using 
Bead Sort method. 
According to Wikipedia "Bead sort, also 
called gravity sort, is a natural sorting 
algorithm, developed by Joshua J. 
Arulanandham, Cristian S. Calude and 
Michael J. Dinneen in 2002, and published 
in The Bulletin of the European 
Association for Theoretical Computer 
Science. Both digital and analog hardware 
implementations of bead sort can achieve 
a sorting time of O(n); however, the 
implementation of this algorithm tends 
to be significantly slower in software 
and can only be used to sort lists of 
positive integers. Also, it would seem 
that even in the best case, the algorithm 
requires O(n2) space".
*/

#include <stdio.h>
#include <stdlib.h>

void bead_sort(int *arr, int len)
{
    int i, j, max, sum;
    unsigned char *beads;
#define BEAD(i, j) beads[i * max + j]
    for (i = 1, max = arr[0]; i < len; i++)
        if (arr[i] > max)
            max = arr[i];
    beads = calloc(1, max * len);
    //mark the beads
    for (i = 0; i < len; i++)
        for (j = 0; j < arr[i]; j++)
            BEAD(i, j) = 1;
            
    for (j = 0; j < max; j++)
    {
        //count how many beads are on each post
        for (sum = i = 0; i < len; i++)
        {
            sum += BEAD(i, j);
            BEAD(i, j) = 0;
        }
        //mark bottom sum beads
        for (i = len - sum; i < len; i++)
            BEAD(i, j) = 1;
    }
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < max && BEAD(i, j); j++)
            arr[i] = j;
    }
    free(beads);
}

int main()
{
    int i, arr[] = {5, 3, 1, 7, 4, 1, 1, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal array: \n");
    for (i = 0; i < len; i++)
        printf("%d%s", arr[i], i == len - 1 ? "\n" : " ");
    bead_sort(arr, len);

    printf("\nSorted Array: \n");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}