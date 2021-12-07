/*
Write a program in C to extract a substring from a given string.

Test Data :
Input the string : this is test string
Input the position to start extraction :9
Input the length of substring :4

Expected Output :

The substring retrieve from the string is : " test " 
Click me to see the solution
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50], str1[50];
    int num, n, i = 0;
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input the position to start extraction: ");
    scanf("%d", &num);
    printf("Input the length of substring: ");
    scanf("%d", &n);

    while (i < n)
    {
        str1[i] = str[num + i - 1];
        i++;
    }
    str1[i] = '\0';
    printf("The substring retrive from the string is: %s", str1);
}