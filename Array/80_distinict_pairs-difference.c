/* Write a program in C to count all distinct pairs for a specific difference.
Expected Output:
The given array is:
5 2 3 7 6 4 9 8
The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
Number of distinct pairs for difference 5 are: 3 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 10000

int CompareFunction(const void *arr, const void *b)
{
    return (*(int *)arr - *(int *)b);
}

int main()
{
    int arr[] = {5, 2, 3, 7, 6, 4, 9, 8}, i, num;
    int right = 0, left = 0, n1 = 5, ctr = 0;
    printf("The given array: ");
    num = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    qsort(arr, num, sizeof(int), CompareFunction);
    printf("\nThe distinict pairs for difference %d are: ");
    while (right < num)
    {
        if (arr[right] - arr[left] == n1)
        {
            printf("[%d, %d]", arr[right], arr[left]);
            ctr++;
            left++;
            right++;
        }
        else if (arr[right] - arr[left] > n1)
            left++;
        else
            right++;
    }
    printf("\nNumber of distinct pairs for difference %d are: %d", n1, ctr);
    return 0;
}