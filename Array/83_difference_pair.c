/* Write a program in C to find a pair with the given difference.
Expected Output:
The given array is:
1 15 39 75 92
The given difference is: 53
The pair are: (39, 92) */

#include <stdio.h>
#include <stdbool.h>

bool PairFinding(int arr[], int size, int n)
{
    int i = 0, j = 1;
    while (i < size && j < size)
    {
        if (i != j && arr[j] - arr[i] == n)
        {
            printf("\nThe pair are: (%d, %d)", arr[i], arr[j]);
            return true;
        }
        else if (arr[j] - arr[i] < n)
            j++;
        else
            i++;
    }
    printf("No such pair found in the given array.");
    return false;
}

int main()
{
    int arr[] = {1, 15, 39, 75, 92}, i, num, n = 53;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given are is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe given difference is: %d", n);
    PairFinding(arr, num, n);
    return 0;
}