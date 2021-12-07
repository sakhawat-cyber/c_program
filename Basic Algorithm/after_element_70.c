/*  Write a C program to create a new array taking the elements after the element value 5 from a given array of integers.
Expected Output:

Elements in original array are: 1, 2, 3, 5, 7, 9, 11
Elements in new array are: 7, 9, 11 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 3, 5, 7, 9, 11};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element are original array are: ");
    print_array(array1, array_size);

    int size = 0;
    int length = array_size;
    int i = length - 1;
    //int array[array_size];
    while (i >= 0 && array1[i] != 5)
        i--;
    i++;

    size = length - i;
    int result[size];
    for (int j = 0; j < size; j++)
    {
        result[j] = array1[i + j];
    }
    array_size = sizeof(result) / sizeof(result[0]);
    printf("\nElements in new array are: ");
    print_array(result, array_size);
}

int print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n");
}