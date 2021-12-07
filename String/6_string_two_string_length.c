/*
Write a program in C to compare two strings without using string library functions.

Test Data :
Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : abcdef
String1: aabbcc
String2: abcdef
Expected Output : Strings are not equal.

Check the length of two strings:
--------------------------------
Input the 1st string : aabbcc
Input the 2nd string : aabbcc
String1: aabbcc
String2: aabbcc
Expected Output : Strings are equal.
*/

#include <stdio.h>
#include <stdlib.h>

int Test(char *str, char *str1)
{
    int num = 0;
    while (*str != '\0' || *str1 != '\0')
    {
        if (*str == *str1)
        {
            str++;
            str1++;
        }
        else if ((*str == '\0' && *str1 != '\0') || (*str != '\0' && *str1 == '\0') || *str != *str1)
        {
            num = 1;
            break;
        }
        return num;
    }
}

int main()
{
    char str[30], str1[30];
    int n = 0;

    printf("Input 1st string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input 2nd string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("String1: %s", str);
    printf("String2: %s", str1);
    n = Test(str, str1);
    if (n == 0)
        printf("String are equal.\n");
    else if (n == 1)
        printf("String are not equal.");
        return 0;
}