/*  Write a C program to find the largest value from first, last, and middle elements of a given 
array of integers of odd length (atleast 1).
Expected Output:

1
9
9 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 2, 9};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 2, 9, 3, 3};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int first, middle_element, last_element, max_ele;
    first = num[0];
    middle_element = num[size / 2];
    last_element = num[size - 1];
    max_ele = first;
    if (middle_element > max_ele)
    {
        max_ele = middle_element;
    }
    if (last_element > max_ele)
    {
        max_ele = last_element;
    }
    return max_ele;
}