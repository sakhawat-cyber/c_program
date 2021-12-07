/*  Write a C program to check whether an array of integers contains a 
3 next to a 3 or a 5 next to a 5 or both.
Expected Output:

1
0
1 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array1[] = {1, 5, 5, 5, 5};
    int array_size;
    array_size = sizeof(array1) / sizeof(array1[0]);
    printf("%d", test(array1, array_size));

    int array2[] = {2, 7, 8, 10};
    array_size = sizeof(array2) / sizeof(array2[0]);
    printf("\n%d", test(array2, array_size));

    int array3[] = {3, 3, 3, 5, 5, 5};
    array_size = sizeof(array3) / sizeof(array3[0]);
    printf("\n%d", test(array3, array_size));
}

int test(int num[], int size)
{
    int three_num = 0, four_num = 0, i;
    for (i = 0; i < size; i++)
    {
        if(num[i] == 3 && num[i + 1] == 3)
            three_num = 1;
        else
            three_num = 0;
        if(num[i] == 5 && num[i + 1])
            four_num = 1; 
        else 
            four_num = 0;
    }
    return three_num || four_num;
}
