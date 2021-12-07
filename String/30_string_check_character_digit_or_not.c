/*
Write a program in C to check whether a character is digit or not.

Test Data :
Input a character : 8

Expected Output :

The entered character is a digit.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Input a character: ");
    scanf("%c", &c);
    if (isdigit(c))
        printf("The entered character is a digit.");
    else
        printf("The entered character is not a digit.");
}