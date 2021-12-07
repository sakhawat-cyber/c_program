/* Write a C program to allocate a block of memory for an array.

Test Data and Expected Output :

Input the number of elements to be stored in the array :5               
Input 5 elements in the array :                                         
 element 1 : 25                                                         
 element 2 : 30                                                         
 element 3 : 35                                                         
 element 4 : 20                                                         
 element 5 : 40                                                         
 Values entered in the array are :                                      
 25  30  35  20  40 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, array[100];
    printf("input the number of element to be sorted in the array: ");
    scanf("%d", &num);

    printf("Input 5 elemrent in the array: \n");
    for (int i = 0; i < num; i++)
    {
        printf("element %d :", i);
        scanf("%d", &array[i]);
    }

    printf("Values entered in the array are:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}