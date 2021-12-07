/*
Write a C program to sort a list of 
elements using the bubble sort algorithm. 
Bubble Sort works by repeatedly swapping 
the adjacent elements if they are in wrong 
order.
*/

#include <stdio.h>

void bubbleSort(int *x, int y)
{
    int sum = 1, i, j = y, temp;
    while (sum)
    {
        sum = 0;
        for (i = 1; i < j; i++)
        {
            if (x[i] < x[i - 1])
            {
                temp = x[i];
                x[i] = x[i - 1];
                x[i - 1] = temp;
                sum = 1;
            }
        }
        j--;
    }
}

int main()
{
    int i;
    int arr[] = {15, 56, 12, -21, 1, 659, 3, 83, 51, 3, 135, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nBegain the bubble sort: \n");
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    printf("\nAfter the bubble sort: \n");
    bubbleSort(arr, n);
    for (i = 0; i < n; i++)
        printf("%d%s", arr[i], i == n - 1 ? "\n" : " ");
    return 0;
}