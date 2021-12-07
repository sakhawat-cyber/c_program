/*
Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.

Test Data :
Input the string : This Is A Test String.

Expected Output :

The given sentence is   : This Is A Test String.
After Case changed the string  is: tHIS iS a tEST sTRING.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int i, ctr, n;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    i = strlen(str);
    ctr = i;
    printf("The given sentence is:\n %s", str);
    printf("After Case changed the string is: ");
    for (i = 0; i < ctr; i++)
    {
        n = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        putchar(n);
    }
}