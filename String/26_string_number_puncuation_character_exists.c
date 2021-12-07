/*
Write a program in C to count the number of punctuation characters exists in a string.

Test Data :
Input a string : The quick brown fox, jumps over the, lazy dog.

Expected Output :

The punctuation characters exists in the string is : 3 
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];
    int num1 = 0, num2 = 0;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[num1])
    {
        if (ispunct(str[num1]))
            num2++;
            num1++;
    }
    printf("The punctuation characters exists in the string: %d", num2);
    return 0;
}