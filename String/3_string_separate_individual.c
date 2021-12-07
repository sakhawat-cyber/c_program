/*
Write a program in C to separate the individual characters from a string. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string are : 
w  3  r  e  s  o  u  r  c  e  .  c  o  m 
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[50];
    int length = 0;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("The characters of string are: ");
    while (str[length] != '\0')
    {
        printf("%c ", str[length]);
        length++;
    }
}