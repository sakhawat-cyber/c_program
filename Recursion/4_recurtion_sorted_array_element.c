/*
Write a program in C to
print the array elements
using recursion.
Test Data :
Input the number of
elements to be stored in
the array :6
Input 6 elements in the
array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array
are : 2  4  6  8  10  12
*/

#include <stdio.h>
void SortedElement(int arr[], int start, int n);

int main()
{
    int i, n, arr[20];
    printf("\n\nInput the number of element to be sorted in the array: ");
    scanf("%d", &n);
    printf("Input %d element in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array: ");
    SortedElement(arr, 0, n);
    return 0;
}

void SortedElement(int arr[], int start, int n)
{
    if (start >= n)
        return;
    //prints the current array elements
    printf("%d ", arr[start]);
    /*recursively call array element to print
    next element in the array*/
    //calling the array element it self
    SortedElement(arr, start + 1, n);
}