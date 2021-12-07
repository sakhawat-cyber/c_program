/*
Write a C programming to find out maximum and minimum of some values using function which will return an array. 
Test Data :
Input 5 values
25
11
35
65
20
Expected Output :

Number of values you want to input: Input 5 values
Minimum value is: 11
Maximum value is: 65  
*/

#include <stdio.h>
#include <stdlib.h>

int *MaxMin(int arr[], int n1);
int main()
{
    int arr[20], n, i, *n1;

    printf("\n\nNumber of values you want to input: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    n1 = MaxMin(arr, n);
    printf("\nNumber of values you want to input: input 5\n");
    printf("Minimum value is: %d\n", *n1++);
    printf("Maximum value is: %d\n\n", *n1);
}

int *MaxMin(int arr[], int n1)
{
    int i;
    static int result_max_min[2];
    result_max_min[0] = arr[0];
    result_max_min[0] = arr[0];
    for (i = 1; i < n1; i++)
    {
        if (result_max_min[0] > arr[i])
            result_max_min[0] = arr[i];
        if (result_max_min[1] < arr[i])
            result_max_min[1] = arr[i];
    }
    return result_max_min;
}