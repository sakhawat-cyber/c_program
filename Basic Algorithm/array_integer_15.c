/* Write a C program to count the number of two 5's are next to each other in an array of integers. 
Also count the situation where the second 5 is actually a 6. 
Expected Output:

1
2
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {5, 5, 2};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {5, 5, 2, 5, 5};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {5, 5, 2, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int arr_size)
{
    int result = 0;
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (num[i] == 5 && (num[i + 1] == 5 || num[i + 1] == 6))
        {
            result++;
        }
    }
    return result;
}