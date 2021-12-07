/* Write a program in C to check if an array can be splitted in such a position that, the sum of left side of the splitting is equal to the sum of the right side.
Expected Output:
The given array is : 1 3 3 8 4 3 2 3 3
The array can be split in a position where the sum of both side are equal. */

#include <stdio.h>
#include <stdbool.h>

bool CanBalance(int arr[], int size)
{
    int i, j, num = size;
    for (i = 0; i < num; i++)
    {
        int right = 0, left = 0;
        for (j = 0; j < num; j++)
        {
            if (j > i)
            {
                left += arr[i];
            }
            else
            {
                right += arr[i];
            }
        }
        if (right == left)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 3, 3, 8, 3, 2, 3, 3}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    bool boo;

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    boo = CanBalance(arr, num);

    if (boo == true)
        printf("\nThe array can be split in a position where the sum of both side are equal. ");
    else
        printf("\nThe array can not be split in a position where the sum of both side are equal. ");
    return 0;
}