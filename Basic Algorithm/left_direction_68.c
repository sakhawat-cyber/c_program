/*  Write a C program to shift an element in left direction and return 
a new array.
Expected Output:

Elements in original array are: 10, 20, 30, 40 
Elements in new array are: 20, 30, 40, 10 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {10, 20, 30, 40};
    //int new_array_size = 4;
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Elements are originel array are: ");
    print_array(array1, array_size);

    int result[array_size];
    // = {array1[1], array1[2], array1[3], array1[0]};
    for (int i = 0; i < array_size; i++)
    {
        result[i] = array1[(i + 1) % array_size];
    }
    //array_size = sizeof(result) / sizeof(result[0]);
    printf("Element in new array are: ");
    print_array(result, array_size);
}

int print_array(int num[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d ", num[i]);
    printf("\n");
}