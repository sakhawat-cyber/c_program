/* Write a program in C to print the elements of an array in reverse order.
Test Data :
Input the number of elements to store in the array (max 15) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
Expected Output :

 The elements of array in reverse order are :                                                                 
 element - 5 : 6                                                                                              
 element - 4 : 5                                                                                              
 element - 3 : 4                                                                                              
 element - 2 : 3                                                                                              
 element - 1 : 2    */

#include <stdio.h>
int main()
{
    int n, arr[20], *ptr, i;
    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d", &n);
    ptr = &arr[0];

    printf("Input %d number of elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = &arr[n - 1];
    printf("\nThe element of array in reverse order are \n");
    for (i = n; i > 0; i--)
    {
        printf("element - %d: ", i + 1);
        printf("%d\n", *ptr);
        ptr--;
    }
}