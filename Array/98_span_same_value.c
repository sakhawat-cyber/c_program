/* Write a program in C to return the largest span found in the leftmost and rightmost appearances of same value(values are inclusive) in a given array.
Expected Output:
The given array is:
17 42 19 7 27 24 17 54 73
The span between the same values in the array is: 7 */

#include <stdio.h>

int MaxSpan(int arr[], int size)
{
    int num = size, i, j;
    if (num > 0)
    {
        int span = 1;
        for (i = 0; i < num; i++)
            for (j = num - 1; j > i; j--)
                if (arr[j] == arr[i])
                {
                    int count = (j - i) + 1;
                    if (count > span)
                        span = count;
                    break;
                }
        return span;
    }
    else
        return 0;
}

int main()
{
    int arr[] = {17, 42, 19, 7, 27, 24, 17, 54, 73}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("The span between the same values in the array is: %d", MaxSpan(arr, num));
    return 0;
}