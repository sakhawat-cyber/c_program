/*
Write a program in C to convert a string to lowercase.

Test Data :
Input a string in UPPERCASE : THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

Expected Output :

Here is the above string in lowercase :                              
the quick brown fox jumps over the lazy dog.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], str_char;
    int num = 0;
    printf("Input a string in UPPERCASE: \n");
    fgets(str, sizeof(str), stdin);

    printf("Here is the above string in lowercase: \n");
    while (str[num])
    {
        str_char = str[num];
        putchar(tolower(str_char));
        num++;
    }
}