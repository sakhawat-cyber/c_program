/* Write a C program to check a given array of integers and return true if the array contains three 
increasing adjacent numbers.
Expected Output:

1
0
1 */

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array1[] = {1, 2, 3, 5, 3, 7};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d",array1, array_size);

    int array2[] = {3, 7, 5, 5, 3, 7};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d",array2, array_size);

    int array3[] = {3, 7, 5, 5, 6, 7, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d",array3, array_size);
}

int test(int array[], int num)
{
    for (int i = 0; i < num - 3; i++)
    {
        if (array[i] == array[i + 1] - 1 &&
        array[i] == array[i + 2] - 2)
        {
            return 1;
        }
    }
    return 0;
}