/* Write a C program to create a new array from two given array of integers, each length 3. 
Expected Output:

Elements in original array1 are: 10, 20, 30 
Elements in original array2 are: 40, 50, 60 
New array: 10, 20, 30, 40, 50, 60 */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    
    int array1[] = {10, 20, 30};
    int array2[] = {40, 50, 60};

    int array_size1 = sizeof(array1) / sizeof(array1[0]);
    int array_size2 = sizeof(array2) / sizeof(array2[0]);
    int new_array_size = 6;

    printf("Elements in originel array1 are: ");
    print_array(array1, array_size1);

    printf("Element in originel array2 are: ");
    print_array(array1, array_size2);

    int result[] = {array1[0], array1[1], array1[2], array2[0], array2[1], array2[2]};
    printf("New array: ");
    print_array (result, new_array_size);
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