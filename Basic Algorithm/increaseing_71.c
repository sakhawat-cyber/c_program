/* Write a C program to create a new array from a given array of integers 
shifting all zeros to left direction.
Expected Output:

Elements in original array are: 1, 2, 0, 3, 5, 7, 0, 9, 11 
Elements in new array asre: 0, 0, 1, 3, 5, 7, 2, 9, 11 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 0, 3, 5, 7, 0, 9, 11};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in original array are: ");
    print_array(array1, array_size);
    
    int pos = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (array1[i] == 0)
        {
            array1[i] = array1[pos];
            array1[pos++] = 0;
        }
    }

    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("\nElement in new array are: ");
    print_array(array1, array_size);
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