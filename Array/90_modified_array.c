/* Given an array of size n such that every element is in the range from 0 to n-1. Write a program in C to rearrange the given array so that arr[i] becomes arr[arr[i]].
Expected Output:
The Original array is
2 1 4 3 0 The modified array is:
4 1 0 3 2 */

#include <stdio.h>

void ArrayArrange(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        arr[i] += (arr[arr[i]] % size) * size;

    for (i = 0; i < size; i++)
        arr[i] /= size;
}

int main()
{
    int arr[] = {2, 1, 4, 3, 0}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The Original array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    ArrayArrange(arr, num);
    printf("\nThe modified array is: \n");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
}