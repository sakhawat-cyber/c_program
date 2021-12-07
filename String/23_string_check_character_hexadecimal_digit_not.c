/*
Write a program in C to check whether a character is Hexadecimal Digit or not.

Test Data :
Input a character : 7

Expected Output :

The entered character is a hexadecimal digit.
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    char n;

    printf("Input a character: ");
    scanf("%c", &n);
    
    if(isxdigit(n))
    printf("The entered charater is a hexadecimal digit: ");
    else
    printf("The entered charater is not a hexadecimal digit: ");
}