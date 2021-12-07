/*
Write a program in C to check whether two given strings are an anagram.
Test Data :
Input the first String : spare
Input the second String : pears
Expected Output :

spare and pears are Anagram.    
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int CheckAnagram(char *str1, char *str2);

int main()
{
    char str1[50], str2[50];
    printf("\n\nInput the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the secend string: ");
    fgets(str2, sizeof(str2), stdin);

    if (CheckAnagram(str1, str2) == 1)
    {
        str1[strlen(str1) - 1] = '\0';
        str2[strlen(str2) - 1] = '\0';
        printf("%s and %s are Anagram.\n\n", str1, str2);
    }
    else
    {
        str1[strlen(str1) - 1] = '\0';
        str2[strlen(str2) - 1] = '\0';
        printf("%s and %s are not Anagram.\n\n", str1, str2);
    }
}

int CheckAnagram(char *str1, char *str2)
{
    int arr1[20] = {0}, arr2[20] = {0};
    int num;
    /* check the length of equality of two strings*/
    if (strlen(str1) != strlen(str2))
        return 0;
    //count frequency of characters in str1
    for (num = 0; str1[num] != '\0'; num++)
        arr1[str1[num]]++;
    //count frequency of character in str2
    for (num = 0; str2[num] != '\0'; num++)
        arr2[str2[num]]++;
    //compare character count of both strings
    for (num = 0; num < 20; num++)
    {
        if (arr1[num] != arr2[num])
            return 0;
    }
    return 1;
}