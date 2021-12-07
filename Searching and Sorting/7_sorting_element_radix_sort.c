/*
Write a C program to sort a list of 
elements using the radix sort algorithm. 

Radix sort is a non-comparative integer 
sorting algorithm that sorts data with 
integer keys by grouping keys by the 
individual digits which share the same 
significant position and value.
*/

#include <stdio.h>

int print(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void radixSort(int *a1, int n1)
{
    int i, exp = 1, b1[10], n2 = 0;
    for (i = 0; i < n1; i++)
    {
        if (a1[i] > n2)
            n2 = a1[i];
    }
    while (n2 / exp > 0)
    {
        int box[10] = {0};
        for (i = 0; i < n1; i++)
            box[a1[i] / exp % 10]++;
        for (i = 1; i < 10; i++)
            box[i] += box[i - 1];
        for (i = n1 - 1; i >= 0; i--)
            b1[--box[a1[i] / exp % 10]] = a1[i];
        for (i = 0; i < n1; i++)
            a1[i] = b1[i];
        exp *= 10;
    }
}

int main()
{
    int arr[10], i, num;

    printf("\nInput the number of element: ");
    scanf("%d", &num);
    printf("\nInput array element one by one: \n");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("Array elements: \n");
    print(&arr[0], num);
    radixSort(&arr[0], num);
    printf("\nSorted elemnts: \n");
    print(&arr[0], num);
    printf("\n\n");
    return 0;
}