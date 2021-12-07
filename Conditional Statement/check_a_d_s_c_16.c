/* Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character. */

#include <stdio.h>
int main()
{
    char sing;
    printf("Input a Character: ");
    scanf("%c", &sing);

    // checks wether it is an alphabet
    if((sing >= 'a' && sing <= 'z') || (sing >= 'A' && sing <= 'B'))
        printf("This is an alphabet.\n");

    // checks weather it is a digit
    else if(sing >= '0' && sing <= '9')
        printf("This is a digit.\n");

    // checks weather it is a special character
    else 
        printf("This is a special character.");
}