/*
Write a program in C to replace the spaces of a string with a specific character.

Test Data :
Input a string : Be glad to see the back of Input replace character : *

Expected Output :

After replacing the space with  * the new string is :                 
Be*glad*to*see*the*back*of*
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[50], c;
    int num = 0, new_char;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Replace character: ");
    scanf("%c", &c);
    printf("After repliacing the space with %c the new string is: \n", c);
    while (str[num])
    {
        new_char = str[num];
        if (isspace(new_char))
            new_char = c;
        putchar(new_char);
        num++;
    }
}