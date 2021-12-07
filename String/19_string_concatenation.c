/*
Write a program in C to Concatenate Two Strings Manually. 

Test Data :
Input the first string : this is string one
Input the second string : this is string two

Expected Output :

After concatenation the string is : 
this is string one this is string two
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], str1[50];
    int len, len1, len2, i, j;

    printf("Input the first string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the second string: ");
    fgets(str1, sizeof(str1), stdin);

    len = strlen(str);
    len1 = strlen(str1);
    for (i = 0; i < len - 1; ++i)
        ;
    str[i] = ' ';
    i++;

    for (j = 0; j < len1 - 1; ++j, ++i)
    {
        str[i] = str1[j];
    }
    len2 = strlen(str);

    printf("After concatenation the string is: ");
    for (i = 0; i < len2; ++i)
        printf("%c", str[i]);
}