/* Write a C program to convert a string to a double.

Test Data and Expected Output :

Input a number : 25                                                                                          
 The original number is : 25.000000                                                                           
 After division by 2 the number is : 12.500000 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double num, num1;
    char array[100];
    printf("Input a number: ");
    fgets(array, 256, stdin);

    num = atof(array);
    num1 = num / 2;

    printf("The original number is: %f\n", num);
    printf("After division by 2 the number is: %f\n\n", num1);
}