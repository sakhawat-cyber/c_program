/* Write a C program to convert a string to an integer.

Test Data and Expected Output :

Input a number : 1972                                                   
The value Input is 1972. */

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int num1;
    char array[256];
    printf("\nInput a number: ");
    fgets(array, 256, stdin);

    num1 = atoi(array);
    printf("The value input is: %d\n\n", num1);

    return 0;
}