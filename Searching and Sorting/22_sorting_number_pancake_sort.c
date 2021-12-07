/*
 Write a C program that sort numbers using Pancake sort method. Go to the editor
From Wikipedia,
Pancake sorting is the colloquial term for the mathematical problem of sorting a disordered stack 
of pancakes in order of size when a spatula can be inserted at any point in the stack and used to 
flip all pancakes above it. A pancake number is the minimum number of flips required for a given 
number of pancakes. In this form, the problem was first discussed by American geometer Jacob E. 
Goodman. A variant of the problem is concerned with burnt pancakes, where each pancake has a burnt 
side and all pancakes must, in addition, end up with the burnt side on bottom.
*/

#include <stdio.h>
#include<stdlib.h>


//reverse the array
void flip(int arr[], int i)
{
    int temp, start = 0;
    while (start < i)
    {
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start++;
        i--;
    }
}

//returns index of the maximum element in the array[0..n-1]
int findMax(int arr[], int n1)
{
    int maxElementIndex, i;
    for (maxElementIndex = 0, i = 0; i < n1; ++i)
    {
        if (arr[i] > arr[maxElementIndex])
            maxElementIndex = i;
    }
    return maxElementIndex;
}

//sorts the array using flip operations
void pancakeSort(int *arr, int n2)
{
    int current_size, maxElementIndex;
    //start from the complete array and one by one current size by one
    for (current_size = n2; current_size > 1; --current_size)
    {
        //find index of the maximum element in arr[0..current_size - 1]
        maxElementIndex = findMax(arr, current_size);
        //move the maximum element to end of current array if its not alrady
        //at the end
        if (maxElementIndex != current_size - 1)
        {
            //to move at the end first move maximum number to biginning
            flip(arr, maxElementIndex);
            //now move the maximum number to end by reversing current array
            flip(arr, current_size - 1);
        }
    }
}

//display the array, passed to this method
void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//driver program to test above function
#define n 50
int main()
{
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
        //random number from 0 t0 2n
        arr[i] = rand() % (n << 1);
    printf("\nOriginal Array: \n");
    print_array(arr, n);
    pancakeSort(arr, n);
    printf("\nSorted Array: \n");
    print_array(arr, n);

    printf("\n\n");
    return 0;
}