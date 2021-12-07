/* Write a C program to compute the sum of values in a given array of integers except the number 17. Return 0 if the given array has no integer.
Expected Output:

Sum of values in the array of integers except the number 17: 46 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 5, 7, 9, 10, 12, 17};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("Sum of value in the array of integers except the number 17: ");
    printf("%d", test(array1, array_size));
}

int test(int num[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] != 17)
            sum += num[i];
        else
            i++;
    }
    return sum;
}