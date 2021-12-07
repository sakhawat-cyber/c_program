/* Write a C program to create a new array taking the first and last elements of a given array of 
integers and length one or more.
Expected Output:

Elements in original array are: 10, 20, 30, 40, 50 
Elements in new array are: 10, 50
*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array_size;
    int new_array_size = 2;

    int array1[] = {10, 20, 30, 40, 50};
    int array_size1 = sizeof(array1) / sizeof(array1[0]); 
    printf("Element in original array are: ");
    print_array(array1, array_size1);

    int result[] = {array1[1], array1[4]};
    array_size = sizeof(result) / sizeof(result[0]);
    printf("Element in new array are: ");
    print_array(result, new_array_size);
}

int print_array(int arr[], int size)
{
    int i;
    for ( i = 0; i < size - 1; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d ", arr[i]);
    printf("\n");
}