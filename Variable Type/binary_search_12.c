/* Write a C program to perform a binary search in an array.

Test Data and Expected Output :

Input the number of elements to be stored in the array :5               
Input 5 elements in the array :                                         
element - 1 : 25                                                        
element - 2 : 20                                                        
element - 3 : 18                                                        
element - 4 : 13                                                        
element - 5 : 15                                                        
Input a value to search : 18                                           
18 is found in the array. */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, array[100], search;
    int first;
    printf("Input the number of element to be stored in the array: ");
    scanf("%d", &num);
    printf("Input 5 element in the array:\n");

    for (int i = 0; i < num; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("Input a value to search : ");
    scanf("%d", search);

    int result = binarySearch(array, 0, num - 1, search);
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
        printf("Element is present at index %d", result);
}

int binarySearch(int array[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - 1) / 2;
        
        if(array[mid] == x)
            return mid;
        if(array[mid] > x)
            return binarySearch(array, left, mid - 1, x);
        return binarySearch(array, mid + 1, right, x);
    }
    return - 1;
}