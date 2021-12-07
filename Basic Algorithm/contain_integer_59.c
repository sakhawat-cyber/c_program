/* Write a C program to check  whether a given array of integers contains no 3 or a 5.
Expected Output:

1
1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int array1[] = {1, 5, 5, 5, 5};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {3, 3, 3, 3};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {3, 3, 3, 5, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));

    int array4[] = {2, 4, 6, 8, 10};
    array_size = sizeof(array4) / sizeof(array4[0]);
    printf("\n%d", test(array4, array_size));
}

int test(int num[], int size)
{
    int three = 0, five = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] == 3)
            three++;
        if (num[i] == 5)
            five++;
        if (three && five)
            return 0;
    }
    return 1;
}