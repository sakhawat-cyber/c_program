/* Write a program in C find the equilibrium index of an array.
Expected Output:
The given array is:
0 -4 7 -4 -2 6 -3 0
The equilibrium index found at : 7 5 0 */

#include <stdio.h>

void FindEquiIndex(int arr[], int size)
{
    int i, sum_left[size], sum_right = 0;
    sum_left[0] = 0;

    for (i = 1; i < size; i++)
    {
        sum_left[i] = sum_left[i - 1] + arr[i - 1];
    }

    for (i = size - 1; i >= 0; i--)
    {
        if (sum_left[i] == sum_right)
        {
            printf("%d ", i);
        }
        sum_right += arr[i];
    }
}

int main()
{
    int arr[] = {0, -4, 7, -4, -2, 6, -3, 0}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe equilibrium inesx found at: ");
    FindEquiIndex(arr, num);
}