/* 
Write a program in C to input a string and print it.

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3resourc
*/

#include <stdio.h>

int main()
{
    char str[50];
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("The string you entered is: %s", str);
    return 0;
}