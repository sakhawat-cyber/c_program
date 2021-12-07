/* Write a C program to rotate the elements of a given array of integers (length 4 ) in left direction and return the new 
array.
Expected Output:

Elements in original array are: 10, 20, 30, 40
Elements in new array are: 40, 30, 10, 20 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {10, 20, 30, 40};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in original array are: ");
    print_array(array1, array_size);

    int result[] = {array1[3], array1[2], array1[0], array1[1]};
    array_size = sizeof(result) / sizeof(result[0]);
    printf("Element in new array are: ");
    print_array(result, array_size);
}

int print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d ", arr[i]);
    printf("\n");
}