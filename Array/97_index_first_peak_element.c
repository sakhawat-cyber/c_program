/* Write a program in C to find the index of first peak element in a given array.
Expected Output:
The given array is:
5 12 13 20 16 19 11 7 25
The index of first peak element in the array is: 3 */

#include <stdio.h>

int PeakElementSearch(int arr[], int element_low, int element_high, int size)
{
    int element_mid = element_low + (element_high - element_low) / 2;

    if ((element_mid == 0 || arr[element_mid - 1] <= arr[element_mid]) &&
        (element_mid == size - 1 || arr[element_mid + 1] <= arr[element_mid]))
        return element_mid;

    else if (element_mid > 0 && arr[element_mid - 1] > arr[element_mid])
        return PeakElementSearch(arr, element_low, (element_mid - 1), size);

    else
        return PeakElementSearch(arr, (element_mid + 1), element_high, size);
}

int PeakFinding(int arr[], int size)
{
    return PeakElementSearch(arr, 0, size - 1, size);
}

int main()
{
    int arr[] = {5, 12, 13, 20, 16, 19, 11, 7, 25}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("The index of first peak element in the array is: %d", PeakFinding(arr, num));
    return 0;
}