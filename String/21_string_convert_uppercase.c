/* 
Write a program in C to convert a string to uppercase.

Test Data :
Input a string in lowercase : the quick brown fox jumps over the lazy dog

Expected Output :

Here is the above string in UPPERCASE :                                
 THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], str_char;
    int num = 0;

    printf("Input a string in lowercase: \n");
    fgets(str, sizeof(str), stdin);

    printf("Here is the above string in uppercase: \n");
    while (str[num])
    {
        str_char = str[num];
        putchar(toupper(str_char));
        num++;
    }
}