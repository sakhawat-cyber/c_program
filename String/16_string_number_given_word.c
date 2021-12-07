/*
Write a program in C to find the number of times a given word 'the' appears in the given string. Go to the editor

Test Data :
Input the string : The string where the word the present more than once.

Expected Output :

The frequency of the word 'the' is : 3 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int length = 0, i, t, h, e, space, num = 0;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);

    for (i = 0; i <= length - 3; i++)
    {
        t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        space = (str[i + 3] == ' ' || str[i + 3] == '\0');
        if ((t && h && e && space) == 1)
            num++;
    }
    printf("The frequency of the word \'the\' is: %d", num);
}