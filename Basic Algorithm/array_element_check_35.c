/* Write a C program to check two given arrays of integers of length 1 or more and return true if 
they have the same first element or they have the same last element.
Expected Output:

1
0 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {10, 20, 40, 50};
    int array_size1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {10, 20, 40, 50};
    int array_size2 = sizeof(array2) / sizeof(array2[0]);
    printf("%d", test(array1, array2, array_size1, array_size2));

    int array3[] = {10, 20, 40, 50};
    int array_size3 = sizeof(array3) / sizeof(array3[0]);
    int array4[] = {11, 20, 40, 51};
    int array_size4 = sizeof(array4) / sizeof(array4[0]);
    printf("\n%d", test(array3, array4, array_size3, array_size4));
}

int test(int num1[], int num2[], int array_size1, int array_size2)
{
    return num1[0] == num2[0] ||
           num1[array_size1 - 1] ==
           num2[array_size2 - 1];
}