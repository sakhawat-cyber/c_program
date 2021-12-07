/* Write a C program to create a new array of length 3 from a given array (length atleast 3) containing the elements from the middle of the array. Go to the editor
Expected Output:

Elements in original array1 are: 1, 5, 7, 9, 11, 13 
New array: 7, 9, 11 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int new_array_size = 3;
    int array1[] = {1, 5, 7, 9, 11, 13};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in originel array are: ");
    print_array(array1, array_size);

    int result[] = {array1[2], array1[3], array1[4]};
    array_size = sizeof(result) / sizeof(result[0]);
    printf("New array: ");
    print_array(result, new_array_size);
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