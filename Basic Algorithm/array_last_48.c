/* Write a C program to create a new array swapping the first and last elements of a given array of
 integers and length will be least 1.
Expected Output:

Elements in original array1 are: 1, 5, 7, 9, 11, 13 
New array, after swapping first and last elements: 13, 5, 7, 9, 11, 1 */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array1[] = {1, 5, 7, 9, 11, 13};
    int array_size1 = sizeof(array1) / sizeof(array1[0]);
    int new_array_size = 6;

    printf("Elemens in originel array1 are: ");
    print_array(array1, array_size1);

    int result[] = {array1[5], array1[1], array1[2], array1[3], array1[4], array1[0]};
    printf("New array, after swapping first and last element: ");
    print_array(result, new_array_size);   
}

int print_array(int array[], int size)
{
    int i;
    for ( i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n");
}