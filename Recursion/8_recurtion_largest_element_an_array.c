/*
Write a program in C to get the largest element of an array using recursion.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 5
element - 1 : 10
element - 2 : 15
element - 3 : 20
element - 4 : 25
Expected Output :

Largest element of an array is: 25  
*/

#include <stdio.h>
int LargeElement(int arr[], int n1);
int main()
{
    int arr[20], n1, i, large;
    printf("\nInput the number of element to be stored in the array: ");
    scanf("%d", &n1);
    printf("Input %d element in the array: \n", n1);
    for (i = 0; i < n1; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    large = LargeElement(arr, n1);
    printf("Largest element of an array: %d", large);
}
int LargeElement(int arr[], int n1)
{
    static int i = 0, no = -9999;
    if (i < n1)
    {
        if (no < arr[i])
            no = arr[i];
        i++;
        LargeElement(arr, n1);
    }
    return no;
}