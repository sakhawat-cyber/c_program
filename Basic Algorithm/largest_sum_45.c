/*  Write a C program to compute the sum of the two given arrays of integers of length 3 and find the array which has the largest sum. Go to the editor
Expected Output:

Elements in original array are: 10, 20, -30 
Elements in original array are: 10, 20, 30 
The array which has the largest sum.: 10, 20, 30 */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array_size = 3;
    int num[] = {10, 20, -30};
    printf("Elements in originel array are: ");
    print_array(num, array_size);
    
    int num1[] = {10, 20, 30};
    printf("Elements in origineal array are: ");
    print_array(num1, array_size);

    int result[array_size], i;
    if (num[0] + num[1] + num[2] >= num1[0] + num1[1] + num1[2])
    {
        for ( i = 0; i < array_size; i++)
        {
            result[i] = num[i];
        }
    }
    else
    {
        for ( i = 0; i < array_size; i++)
        {
            result[i] = num1[i];
        }
    }
    printf("The array which the largest sum: ");
    print_array(result, array_size);
}

print_array(int array[], int size)
{
    int i;
    for ( i = 0; i <size - 1; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n");
}