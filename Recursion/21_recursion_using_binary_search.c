/*
Write a program in C for binary search using recursion.
Test Data :
Input the number of elements to store in the array :3
Input 3 numbers of elements in the array in ascending order :
element - 0 : 15
element - 1 : 25
element - 2 : 35
Input the number to search : 35
Expected Output :

 The search number found in the array.
 */

#include <stdio.h>
int BinarySearch(int *, int, int, int, int);
int main()
{
    int n, arr[20], i, mid, low, heigh, n1;
    printf("\nInput the number of element to store in the array: ");
    scanf("%d", &n);
    printf("Input %d number of elements in the array in ascending order: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Input the number to search: ");
    scanf("%d", &mid);
    low = 0, heigh = n - 1;
    n1 = BinarySearch(arr, n, mid, low, heigh);
    if(n1 == 0)
    printf("The search number not existin the array.\n\n");
    else
    printf("The search %d number found in the array.\n\n", n1);
}

int BinarySearch(int arr[], int n, int mid, int low, int heigh)
{
    int mid1, n1 = 0;
    if (low <= heigh)
    {
        mid1 = (low + heigh) / 2;
        if (mid == arr[mid1])
            n1 = 1;
        else if (mid < arr[mid1])
            return BinarySearch(arr, n, mid, low, mid1 - 1);
        else
            return BinarySearch(arr, n, mid, mid1 + 1, heigh);
    }
    else
        return n1;
}