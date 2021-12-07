/*
 Write a program in C to print individual characters of string in reverse order.

Test Data :
Input the string : w3resource.com

Expected Output :

The characters of the string in reverse are :
m  o  c  .  e  c  r  u  o  s  e  r  3  w 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int length = 0, i;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    printf("The character of the string in reverse are: \n");
    for (i = length; i >= 0; i--)
        printf("%c ", str[i]);
}