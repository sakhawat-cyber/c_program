/*  Write a C program to create new array from a given array of integers shifting all even 
numbers before all odd numbers.
Expected Output:

Elements in original array are: 1, 2, 5, 3, 5, 4, 6, 9, 11 

Elements in new array are: 2, 4, 6, 3, 5, 1, 5, 9, 11 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 5, 3, 5, 4, 6, 9, 11};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in original array are: ");
    print_array(array1, array_size);

    int size = array_size, index = 0;
    for (int i = 0; i < size; i++)
    {
        if (array1[i] % 2 == 0)
        {
            int temp = array1[index];
            array1[index] = array1[i];
            array1[i] = temp;
            index++;
        }
    }
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