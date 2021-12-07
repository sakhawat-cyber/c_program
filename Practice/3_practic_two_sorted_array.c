/*
 Write a C program to find the median of the two given sorted arrays which are not empty.
Expected Output:

Median of the above two sorted arrays is: 10.000000
*/

#include <stdio.h>
#include <stdlib.h>

static double find_nth(int arr[], int arr_len, int arr2[], int arr2_len, int n)
{
    if (arr_len > arr2_len)
        return find_nth(arr2, arr2_len, arr, arr_len, n);
    if (arr_len == 0)
        return arr2[n - 1];
    if (n == 1)
        return arr[0] < arr2[0] ? arr[0] : arr2[0];
    int i = n / 2 < arr_len ? n / 2 : arr_len;
    int j = n - i;
    if (arr[i - 1] < arr2[j - 1])
        return find_nth(arr + i, arr_len - i, arr2, arr2_len, n - i);
    else if (arr[i - 1] > arr2[j - 1])
        return find_nth(arr, arr_len, arr2 + j, arr2_len - j, n - j);
    else
        return arr[i - 1];
}

static double findMedianSortedArray(int *n1, int num1, int *n2, int num2)
{
    int half = (num1 + num2) / 2;
    if ((num1 + num2) & 0x1)
        return find_nth(n1, num1, n2, num2, half + 1);
    else
        return (find_nth(n1, num1, n2, num2, half) + find_nth(n1, num1, n2, num2, half + 1)) / 2;
}

int main()
{
    int n1[] = {1, 2, 5, 6, 7};
    int n2[] = {10, 14, 19, 35, 45, 50};
    //int n1[] = {1, 3};
    //int n2[] = {2, 4};
    int num1 = sizeof(n1) / sizeof(n2[0]);
    int num2 = sizeof(n2) / sizeof(n2[0]);
    printf("\nMedian of the above two sorted array is: %f\n\n", findMedianSortedArray(n1, num1, n2, num2));
}