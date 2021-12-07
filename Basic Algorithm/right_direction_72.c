/*  Write a C program to create a new array after replacing  all the values 5 with 0 
shifting all zeros to right direction.
Expected Output:

Elements in original array are: 1, 2, 0, 3, 5, 7, 0, 9, 11, 5 
Elements in new array are: 1, 2, 0, 3, 7, 0, 9, 11, 0, 0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 0, 3, 5, 7, 0, 9, 11, 5};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in original array are: ");
    print_array(array1, array_size);

    int size = array_size, index = 0;
    int result[size];
    for(int i = 0; i < size; i++)
    {
        if (array1[i] != 5)
        {
            result[index++] = array1[i];
        }
    }

    array_size = sizeof(result) / sizeof(result[0]);
    printf("\nElement in new array are: ");
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