/*
Write a C programming to convert vowels into upper case character in a given string.
Test Data :
Input a string : w3resource
Expected Output:

Input a sentence: The original string:
w3resource
After converting vowels into upper case the sentence becomes:
w3rEsOUrce
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i;

    printf("Input a string:\n");
    gets(str);

    printf("The original string:\n");
    puts(str);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str[i] = str[i] - 32;
        i++;
    }
    printf("\nAfter converting vowels into upper case the sentence become:\n");
    puts(str);
    return 0;
}