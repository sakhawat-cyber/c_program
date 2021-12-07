/*
Write a C program to check whether a given substring is present in the given string.

Test Data :
Input the string : This is a test string.
Input the substring to be search : search

Expected Output :

The substring is not exists in the string.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50], str1[50];
    int i = 0, j = 0, k, l, num;

    printf("This is a test string: ");
    fgets(str, sizeof(str), stdin);
    printf("Input substring to be search: ");
    fgets(str1, sizeof(str1), stdin);
    while (str[i] != '\0')
        i++;
    i--;
    while (str1[j] != '\0')
        j++;
    j--;
    for (k = 0; k <= i - j; k++)
    {
        for (l = k; l < k + j; l++)
        {
            num = 1;
            if (str[l] != str1[l - k])
            {
                num = 0;
                break;
            }
        }
        if (num == 1)
            break;
    }
    if (num == 1)
        printf("The substring exists in the string.");
    else
        printf("The substring is not exists in the string.");
}