/*
Write a program in C to find the first capital letter in a string using recursion. 
Test Data :
Input a string to including one or more capital letters : testString
Expected Output :

 The first capital letter appears in the string testString is S. 
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>

char CheckCapital(char *);

int main()
{
    char str[20], string;
    printf("\nInput a string to include one or more capital letter: ");
    scanf("%s", str);
    string = CheckCapital(str);
    if (string == 0)
        printf("The first capital letter appears in the string %s.\n\n", str);
    else
        printf("The first capital letter appears in the string %s is %c.\n\n", str, string);
    return 0;
}
char CheckCapital(char *str2)
{
    static int i = 0;
    if (i < strlen(str2))
    {
        if (isupper(str2[i]))
        return str2[i];
        else
        {
            i = i + 1;
            return CheckCapital(str2);
        }
    }
    else
        return 0;
}