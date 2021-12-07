/* Write a program in C to find the maximum element in an array which is first increasing and then decreasing.
Expected Output:
The given array is:
2 7 12 25 4 57 27 44
The maximum element which is increasing then decreasing is: 57 */

#include <stdio.h>

int FirstIncreasingDecreasing(int arr[], int size)
{
    int max_ele = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max_ele)
            max_ele = arr[i];
    }
    return max_ele;
}

int main()
{
    int arr[] = {2, 7, 12, 25, 4, 57, 27, 44}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    printf("The given aray: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe maximum element which is increasing then decreasing is: %d", FirstIncreasingDecreasing(arr, num));
    return 0;
}