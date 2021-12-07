/*  Write a C program to return the absolute value of a long integer.

Test Data and Expected Output :

Input 1st number (positive or negative) : 25                           
 Input 2nd number (positive or negative) : -125                         
 The absolute value of 1st number is : 25                                           
 The absolute value of 2nd number is : 125 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, num1;
    printf("Input 1st number (positive or negative) : ");
    scanf("%d", &num);

    printf("Input 1st number (positive or negative) : ");
    scanf("%d", &num1);

    int a = abs(num);
    int b = abs(num1);

    printf("\nThe absolate value of 1st number is: %d\n", a);
    printf("The absolate value of 2nd number is: %d", b);
}