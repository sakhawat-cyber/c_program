/* 
Write a program in C to count total number of vowel or consonant in a string.

Test Data :
Input the string : Welcome to w3resource.com

Expected Output :

The total number of vowel in the string is : 9 
The total number of consonant in the string is : 12 
Click me to see the solution
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    int vowel, con, i, length;
    con = vowel = i = 0;

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    while (i < length)
    {
        if (str[i] == 'A' || str[i] == 'U' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'a' || str[i] == 'u' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o')
            vowel++;
        else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] >= 'A' || str[i] <= 'Z'))
        con++;
        i++;
    }

    printf("The total number of vowel in the string is: %d\n", vowel);
    printf("The total number of consonent in the string is: %d", con);
}