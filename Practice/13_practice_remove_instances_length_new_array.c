/*
Write a C program to remove all instances of a given value in a given array of integers and return the length of the new array. 
Expected Output:

 Original array: 1 1 2 3 4 4 5 6 6 6 
 Size of the new array after removing the value 4: 8
 
*/

#include <stdio.h>
#include <stdlib.h>

static int removeElement(int *num, int size, int value)
{
    int i, num1 = 0;
    for (i = 0; i < size; i++)
    {
        if (num[i] != value)
            num[num1++] = num[i];
    }
    return num1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, value = 4;
    printf("\nOriginal Array: \n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    int new_size = removeElement(arr, size, value);
    printf("\nSize of the new array removeing the value %d: %d\n\n", value, new_size);
    return 0;
}