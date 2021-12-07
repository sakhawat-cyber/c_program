/*
Write a C program to sort numbers using 
heap sort algorithm (MAX heap). 

A sorting algorithm that works by first 
organizing the data to be sorted into a 
special type of binary tree called a 
heap.

Sample Input:
3
12
15
56

Sample Output:
Input number of elements: 
Input array values one by one : Heap  array : 56	 12	 15	 
Sorted  array : 	12	15	56
*/

#include <stdio.h>
int main()
{
    int n, i, arr[20], heap_root, temp, j, n1;

    printf("\nInput number of element: ");
    scanf("%d", &n);
    printf("\nInput array values ane by one: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < n; i++)
    {
        n1 = i;
        do
        {
            heap_root = (n1 - 1) / 2;
            //to create max arr array
            if (arr[heap_root] < arr[n1])
            {
                temp = arr[heap_root];
                arr[heap_root] = arr[n1];
                arr[n1] = temp;
            }
            n1 = heap_root;
        } while (n1 != 0);
    }

    printf("Heap array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    for (j = n - 1; j >= 0; j--)
    {
        temp = arr[0];
        arr[0] = arr[j];
        arr[j] = temp;
        heap_root = 0;
        do
        {
            n1 = 2 * heap_root + 1;
            if ((arr[n1] < arr[n1 + 1]) && n1< j - 1)
                n1++;
            if (arr[heap_root] < arr[n1] && n1 < j)
            {
                temp = arr[heap_root];
                arr[heap_root] = arr[n1];
                arr[n1] = temp;
            }
            heap_root = n1;
        } while (n1 < j);
    }
    printf("\nsorted array: \n");
    for (i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    printf("\n\n");
}