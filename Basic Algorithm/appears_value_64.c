/* Write a C program to check a given array of integers and return true if the value 5 appears 5 
times and there are no 5 next to each other. 
Expected Output:

1
0
1
0 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array1[] = {3, 5, 1, 4, 5, 3, 5, 5, 9, 5};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {3, 3, 5, 5, 9, 5};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {3, 5, 1, 4, 5, 3, 5, 5, 9, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));

    int array4[] = {3, 5, 1, 4, 5, 3};
    array_size = sizeof(array4) / sizeof(array4[0]);
    printf("\n%d", test(array4, array_size));
}

int test(int num[], int size)
{
    int flag = 0, five = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] == 5 && !flag)
        {
            five++;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    return five == 5;
}