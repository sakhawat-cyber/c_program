/*
Write a program in C to get the largest element of an array using the function. 
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5 
*/

#include <stdio.h>
int LargestElement(int n[], int n1);
int main()
{
    int i, arr[20], n;
    printf("\nInput the number of element to be sorted in the array: ");
    scanf("%d", &n);
    printf("Input %d element in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    int max_large_element = LargestElement(arr, n);
    printf("The largest element in the array is: %d\n\n", max_large_element);
}

int LargestElement(int n[], int n1)
{
    int i = 1, max_lar_ele;
    max_lar_ele = n[0];
    while (i < n1)
    {
        if (max_lar_ele < n[i])
            max_lar_ele = n[i];
        i++;
    }
    return max_lar_ele;
}