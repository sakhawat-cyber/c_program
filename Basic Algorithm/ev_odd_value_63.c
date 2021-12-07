/* Write a C program to check a given array of integers and return true if the given array contains either 2 even or 2 odd values all next to each other. Go to the editor
Expected Output:

0
1
1 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array1[] = {1, 2, 3, 4};
    int array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {3, 3, 5, 5, 5, 5};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {1, 2, 3, 3, 7, 9};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int odd = 0, even = 0;
    for (int i = 0; i < size; i++)
    {
        if (odd < 2 && even < 2)
        {
            if (num[i] % 2 == 0)
            {
                even++;
                odd = 0;
            }
            else
            {
                odd++;
                even = 0;
            }
        }
    }
    return odd == 2 || even == 2;
}