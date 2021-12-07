/*
Write a program in C to Check whether a given String is Palindrome or not.
Test Data :
Input a word to check for palindrome : mom
Expected Output :

 The entered word is a palindrome.  
 */

#include <stdio.h>
#include <string.h>
void CheckPalindrome(char[], int);

int main()
{
    char str[20];
    printf("\n\nInput a word to check for palindrome: ");
    scanf("%s", str);
    //fgets(str, sizeof(str), stdin);
    //calling the function for the checking palindrome
    CheckPalindrome(str, 0);
    return 0;
}

void CheckPalindrome(char str[], int index)
{
    int length = strlen(str) - (index + 1);
    if (str[index] == str[length])
    {
        if (index + 1 == length || index == length)
        {
            printf("The entered word is a palindrome.\n");
            return;
        }
        //calling the function if self rccursively
        CheckPalindrome(str, index + 1);
    }
    else
        printf("The entered word is not a palindrome.\n\n");
}
