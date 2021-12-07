/* Write a C program to check a given array of integers and return true if every 5 that appears in the given array is
next to another 5.
Expected Output:

1
0
1
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {3, 5, 5, 3, 7};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {3, 5, 5, 4, 1, 5, 7};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {3, 5, 5, 5, 5, 5};
    array_size = sizeof(array1) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));

    int array4[] = {3, 5, 5, 5, 5, 5};
    array_size = sizeof(array4) / sizeof(array4[0]);
    printf("\n%d", test(array4, array_size));
}

int test(int num[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] == 5)
        {
            if ((i > 0 && num[i - 1] == 5) ||
                (i < size - 1 &&
                 num[i + 1] == 5))

                flag = 1;
            else if (i == size - 1)
                flag = 0;
            else
                return 0;
        }
    }
    return flag;
}