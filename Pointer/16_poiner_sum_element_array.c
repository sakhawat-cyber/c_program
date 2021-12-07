/* Write a program in C to compute the sum of all elements in an array using pointers.
Test Data :
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The sum of array is : 20  */

#include <stdio.h>
int main()
{
    int num, n, arr[20], i, sum = 0, *ptr;
    printf("Input the number of element to store in the array (max 10): ");
    scanf("%d", &num);

    printf("\nInput %d number of element in the array: \n", num);
    for (i = 0; i < num; i++)
    {
        printf("Element - %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    for (i = 0; i < num; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nThe sum of array is: %d", sum);
}