/* 
Write a program in C to copy one string to another string.

Test Data :
Input the string : This is a string to be copied.

Expected Output :

The First string is : This is a string to be copied.
The Second string is : This is a string to be copied. 
Number of characters copied : 31 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50], str1[50];
    int i;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0')
    {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    printf("The fist string is: %s\n", str);
    printf("The second string: %s\n", str1);
    printf("Number of character copied: %d", i);
}