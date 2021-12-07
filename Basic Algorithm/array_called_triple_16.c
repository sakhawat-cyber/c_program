/* Write a C program to check if a triple is presents in an array of integers or not. If a value 
appears three times in a row in an array it is called a triple.
Expected Output:

0
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 1, 2, 3};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 2, 4, 6, 2};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 1, 1, 2, 2, 2, 1};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (num[i] == num[i + 1] && num[i + 2] == num[i])
        {
            return 1;
        }
        return 0;
    }
}