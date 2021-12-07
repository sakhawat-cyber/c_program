/* 
Write a program in C to count total number of alphabets, digits and special characters in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

Number of Alphabets in the string is : 21 
Number of Digits in the string is : 1 
Number of Special characters in the string is : 4 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int alphabets, digits, special_character, i;
    alphabets = digits = special_character = i = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            special_character++;
        i++;
    }
    printf("Number of alphabets in the string is: %d\n", alphabets);
    printf("Number of digits in the strings is: %d\n", digits);
    printf("Number of special character in the strings is: %d\n", special_character);
}