/* . Write a C program to check whether a given array of integers contains 5 next to a 5
somewhere.
Expected Output:
0
1
1 */

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int array1[] = {1, 5, 6, 9, 10, 17};
    int array_size;
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {1, 5, 5, 9, 10, 17};
    array_size = sizeof(array2) / sizeof(array2[array2[0]]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 5, 5, 9, 10, 17, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (num[i] == 5 && num[i] == num[i + 1])
        {
            return 1;
        }
    }
    return 0;
}
