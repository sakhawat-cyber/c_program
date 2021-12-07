/* Write a C program to reverse a given array of integers and length 5. 
Expected Output:

Elements in original array are: 10, 20, 30, 40, 50 
Elements in reverse array are: 50, 40, 30, 20, 10  */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array1[] = {10, 20, 30, 40, 50};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Element in original array are: ");
    print_array(array1, array_size);

    int result[] = {array1[4], array1[3], array1[2], array1[1], array1[0]};
    array_size = sizeof(result) / sizeof(result[0]);
    printf("Element in  reverse array are: ");
    print_array(result, array_size);
}

int print_array(int arr[], int size)
{
    int i;
    for ( i = 0; i < size - 1; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("%d ",arr[i]);
    printf("\n");
}