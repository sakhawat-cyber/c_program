/* Write a C program to compute the sum of the numbers in a given array except those
numbers starting with 5 followed by atleast one 6. Return 0 if the given array has no
integer.
Expected Output:
Sum of values in the array of integers except the number 17: 37 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {5, 6, 10, 2, 4, 7, 3};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Sum of values in the array of integer except the number 17: ");
    printf("%d", test(array1, array_size));
}

int test(int num[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }
    return sum;
}