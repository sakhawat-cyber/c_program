/*  Write a program in C to rearrange positive and negative numbers alternatively in a given array.Go to the editor
N.B.: If positive numbers are more they appear at the end and for also negative numbers, they too appear in the end of the array.
Expected Output:
The given array is:
-4 8 -5 -6 5 -9 7 1 -21 -11 19
The rearranged array is:
-4 7 -5 1 -21 5 -11 8 -9 19 -6 */

#include <stdio.h>

void ChangeNumber(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void SplitPosNeg(int arr[], int size)
{
    int right = size - 1, left = 0;
    while (right > left)
    {
        while (arr[left] < 0)
            left++;

        while (arr[right] > 0)
            right--;

        if (left < right)
            ChangeNumber(arr, left, right);
    }
}

void RearrangeNumber(int arr[], int size)
{
    int i, j;
    SplitPosNeg(arr, size);
    for (i = 0; arr[i] < 0; i++)
        ;
    for (j = 1; (j < 1) && (arr[j] < 0); j += 2)
    {
        ChangeNumber(arr, i, j);
        i++;
    }
    return;
}

int main()
{
    int arr[] = {-4, 8, -5, -6, 5, -9, 7, 1, -21, -11, 19}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe rearranged array is: \n");
    RearrangeNumber(arr, 10);
    for (i = 0; i < 11; i++)
        printf("%d ", arr[i]);

    return 0;
}