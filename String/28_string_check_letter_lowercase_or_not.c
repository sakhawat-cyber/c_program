/*
Write a program in C to check whether a letter is lowercase or not.

Test Data :
Input a character : w

Expected Output :

The entered letter is a lowercase letter.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Input a character: ");
    scanf("%c", &c);

    if (islower(c))
        printf("The entered letter is a lowercase letter.");
    else
        printf("The entered letter is not a lowercase letter.");
}