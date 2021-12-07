/* Write a C program to create a new array containing the middle elements from the two
given arrays of integers, each length 5.
Expected Output:
Elements in original array are:
10, 20, -30, -40, 30
10, 20, 30, 40, 30
Elements in new array are: -30, 30 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {10, 20, -30, -40, 30};
    int array2[] = {10, 20, 30, 40, 30};
    int new_array_size = 2; 
    int array_size1 = sizeof(array1) / sizeof(array1[0]);
    int array_size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Elements in original array are:\n");
    print_array(array1, array_size1);
    print_array(array2, array_size2);

    int result[] = {array1[2], array2[2]};
    int array_size = sizeof(result) / sizeof(result[0]);
    printf("Elemens in new array are: ");
    print_array(result, new_array_size);
}

int print_array(int arr[], int size)
{
    int i;
    for ( i = 0; i < size - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d ", arr[i]);
    printf("\n");
}
