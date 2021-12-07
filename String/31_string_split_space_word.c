/*
Write a program in C to split string by space into words.
Test Data :
Input a string : this is a test string
Expected Output :

Strings or words after split by space are : 

this
is 
a 
test 
string .
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], new_string[50][50];
    int num, i, j;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i <= (strlen(str)); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            new_string[num][j] = '\0';
            num++;
            j = 0;
        }
        else
        {
            new_string[num][j] = str[i];
            j++;
        }
        printf("String or word after split by space are: \n");
        for (i = 0; i < num; i++)
            printf("%s\n", new_string[i]);
        return 0;
    }
}