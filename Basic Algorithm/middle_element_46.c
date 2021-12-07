/* Write a C program to create an array taking two middle 
elements from a given array of integers 
of length even.
Expected Output:

Elements in original array are: 1, 5, 7, 9, 11, 13 
New array: 7, 9 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_size;
    int new_array_size = 2;

    int array1[] = {1, 5, 7, 11, 13};
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Elemens in orifginel array are: ");

    print_array(array1, array_size);
    int result[] = {array1[array_size / 2 - 1], array1[array_size / 2]};
    printf("New array: ");

    print_array(result, new_array_size);
}

print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n");
}