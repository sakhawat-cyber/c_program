/* Write a program in C to find four array elements whose sum is equal to given number.
Expected Output:
The given array is:
3 7 1 9 15 14 6 2 5 7
The elements are:
3, 15, 14, 5 */

#include <stdio.h>

void SumElements(int *arr, int size, int sum)
{
    int i, j, k, l;
    printf("\nThe elements are: \n");
    for (i = 0; i < size - 3; i++)
    {
        for (j = i + 1; j < size - 2; j++)
        {
            for (k = j + 1; k < size - 1; k++)
            {
                for (l = k + 1; l < size; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == sum)
                    {
                        printf("%d, %d, %d, %d\n ", arr[i], arr[j], arr[j], arr[k]);
                        return;
                    }
                }
            }
        }
    }
    printf("No such selement found for the given sum.\n");
}

int main()
{
    int arr[] = {3, 7, 1, 9, 15, 14, 6, 2, 5, 7}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    int sum = 37;
    printf("The given array is: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    SumElements(arr, num, sum);
    return 0;
}