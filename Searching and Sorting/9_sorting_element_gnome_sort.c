/*
Write a C program to display sorted list 
using Gnome sort. Go to the editor
Gnome sort is a sorting algorithm 
originally proposed by Dr. Hamid Sarbazi-
Azad (Professor of Computer Engineering 
at Sharif University of Technology) in 
2000 and called "stupid sort" 
(not to be confused with bogosort), 
and then later on described by Dick 
Grune and named "gnome sort". 
The algorithm always finds the first 
place where two adjacent elements are in 
the wrong order, and swaps them. It takes 
advantage of the fact that performing a 
swap can introduce a new out-of-order 
adjacent pair only next to the two 
swapped elements.
*/

#include <stdio.h>
#include <stdlib.h>

void gnomeSort(int *array, int size)
{
    int i, temp;
    for (i = 1; i < size;)
    {
        if (array[i - 1] <= array[i])
            ++i;
        else
        {
            temp = array[i];
            array[i] = array[i - 1];
            array[i - 1] = temp;
            --i;
            if (i == 0)
                i = 1;
        }
    }
}

int main()
{
    int arr[] = {5, -1, 101, -4, 0, 1, 8, 6, 2, 3};
    int i;
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("\nOrigenal array: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    printf("\nSorted Array: \n");
    gnomeSort(arr, n);
    for (i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n\n");
    return 0;
}