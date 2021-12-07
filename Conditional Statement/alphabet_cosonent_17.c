/* Write a C program to check whether an alphabet is a vowel or consonant.
Test Data :
k
Expected Output :
The alphabet is a consonant. */

#include<stdio.h>
int main()
{
    char sing;
    printf("Input the character: ");
    scanf("%c", &sing);

    if(sing == 'a' || sing == 'e' || sing == 'i' || sing == 'o' || sing == 'u')
        printf("The alphabet is a vowel.");
    
    else if(sing >= 'a' && sing <= 'z' || sing >= 'A' && sing <= 'Z')
        printf("The alphabet is a consonent.");

    else 
        printf("The alphabet is not a character.");
}