/* Write a C program to create a new array taking the elements before the element value
5 from a given array of integers.
Expected Output:
Elements in original array are: 1, 2, 3, 5, 7
Elements in new array are: 1, 2, 3 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array1[] = {1, 2, 3, 5, 7};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in originel array are: ");
    print_array(array1, array_size);

    int size = 0;
    int result[array_size];
    for (int i = 0; i < array_size; i++)
    {
        if ( 5 == array1[i])
        {
            size = i;
            break;
        }
    }

    int results[size];
    for (int j = 0; j < size; j++)
    {
        results[j] = array1[j];
    }

    array_size = sizeof(results) / sizeof(results[0]);
    printf("\nElement in new array are: ");
    print_array(results, array_size);
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