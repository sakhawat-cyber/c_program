/*
Write a program in C to find the length of a string without using library function.

Test Data :
Input the string : w3resource.com

Expected Output :

Length of the string is : 15
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int length = 0;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string is: %d", length);
    return 0;
}