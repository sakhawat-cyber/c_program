/* 
Write a C program to sort a string array in ascending order.

Test Data :
Input the string : w3resource

Expected Output :

After sorting the string appears like : 
3ceeorrsuw 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], ch;
    int length, i, j;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    for (i = 1; i < length; i++)
    {
        for (j = 0; j < length - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                ch = str[j];
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
    printf("After sorting the string appears like: %s", str);
}