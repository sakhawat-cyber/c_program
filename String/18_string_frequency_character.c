/* 
Write a program in C to Find the Frequency of Characters.

Test Data :
Input the string : This is a test string
Input the character to find frequency: i

Expected Output :

The frequency of 'i' is : 3 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50], str1;
    int i, num = 0;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input the character to find frequency: ");
    scanf("%c", &str1);
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str1 == str[i])
            ++num;
    }
    printf("The frequency of '%c' is: %d", str1, num);
}