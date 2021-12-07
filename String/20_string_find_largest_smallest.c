/*
 Write a program in C to find the largest and smallest word in a string.

Test Data :
Input the string : It is a string with smallest and largest word.

Expected Output :

The largest word is 'smallest'
and the smallest word is 'a' 
in the string : 'It is a string with smallest and largest word.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[50], word[50], max[20], min[20], c;
    int i = 0, j = 0, num = 0;

    printf("Input the string: ");
    i = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        str[i++] = c;
    } while (c != '\n');
    
    str[i - 1] = '\0';
    for (i = 0; i < strlen(str); i++)
    {
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i]))
            word[j++] = str[i++];
        if (j != 0)
        {
            word[j] = '\0';
            if (!num)
            {
                num = !num;
                strcpy(max, word);
                strcpy(min, word);
            }
            if (strlen(word) > strlen(max))
                strcpy(max, word);
            if (strlen(word) < strlen(min))
                strcpy(min, word);
            j = 0;
        }
    }
    printf("The largest word is '%s' \nand the smallest word is '%s' \nin the string: %s.", max, min, str);
}