/*
Write a C program to sort a list of 
elements using the selection sort 
algorithm. 
According to Wikipedia "In computer 
science, selection sort is a sorting 
algorithm, specifically an in-place 
comparison sort. It has O(n2) time 
complexity, making it inefficient on large 
lists, and generally performs worse than 
the similar insertion sort".
Note :
a) To find maximum of elements
b) To swap two elements
*/

#include <stdio.h>
int main()
{
    int n, i, j, arr[20];

    //function declaration
    int findMax(int arr1[20], int num);
    void swap(int arr1[20], int num);
    printf("\nInput no. of element in an array: ");
    scanf("%d", &n);
    printf("Input the element one by one\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //selection sort begains
    swap(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}
//function to find the maximum value
int findMax(int arr1[20], int num)
{
    int max = 0, j;
    for (j = 1; j <= num; j++)
    {
        if (arr1[j] > arr1[max])
            max = j;
    }
    return (max);
}

void swap(int arr1[20], int num)
{
    int temp, big, j;

    for (j = num - 1; j >= 1; j--)
    {
        big = findMax(arr1, j);
        temp = arr1[big];
        arr1[big] = arr1[j];
        arr1[j] = temp;
    }
    return;
}