/*
Write a program in C to remove characters in String Except Alphabets.

Test Data :
Input the string : w3resource.com

Expected Output :

After removing the Output String : wresourcecom 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int i, j;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' || str[i] == '\0')))
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("After removing the output string: %s", str);
}