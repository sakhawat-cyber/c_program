/*  Write a C program to check a given array of integers of length 3 and create a  new array. If there is a 5 in the given 
array immediately followed by a 7 then set 7 to 1.
Expected Output:

Elements in original array are: 1, 5, 7 
Elements in new array are: 1, 5, 1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array_size;
    int array1[] = {1, 5, 7};
    array_size = sizeof(array1) / sizeof(array1[10]);
    printf("Element in originel array are: ");
    print_array(array1, array_size);
    for (int i = 0; i < array_size - 1; i++)
    {
        if (array1[i] == 5 && array1[i + 1] == 7)
            array1[i + 1] = 1;
    }
    printf("Elements in new array: ");
    print_array(array1, array_size);
}

print_array(int array[], int size)
{
    int i;
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n");
}
