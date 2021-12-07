/*
Write a program in C to check whether a letter is uppercase or not.

Test Data :
Input a character : p

Expected Output :

The entered letter is not an UPPERCASE letter.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Input a character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("The entred letter is an Uppercase letter: ");
    else
        printf("The entred letter is not an Uppercase letter: ");
    return 0;
}