/* Write a C program to check whether the number of 3's is greater than the number of 5's.
Expected Output:

1
0
0 */

#include <stdio.h>
int main(void)
{
    int array1[] = {1, 5, 6, 9, 3, 3};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 5, 5, 5, 10, 17};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 3, 3, 5, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int num1 = 0, num2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (num[i] == 3)
            num1++;
        if (num[i] == 5)
            num2++;
    }
    return num1 > num2;
}
