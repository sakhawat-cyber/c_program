/* Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially. Go to the editor
Expected Output :
Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982 */

#include<stdio.h>
int main()
{
    char str[50];
    char str1[50];
    int bir;
    char line_text[0];

    printf("Input your firstname: ");
    gets(str);
    printf("Input your lastname: ");
    gets(str1);

    printf("Input your year of birth: ");
    scanf("%d", &bir);

    printf("%s %s %d",str, str1, bir);
}