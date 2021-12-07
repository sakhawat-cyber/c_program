/* 
Write a program in C to count the total number of words in a string.

Test Data :
Input the string : This is w3resource.com

Expected Output :

Total number of words in the string is : 3 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, word = 1;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            word++;
    }
    printf("Total number of words in the string is: %d", word - 1);
}