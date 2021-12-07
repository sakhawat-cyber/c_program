/*
 Write a program in C to copy One string to another using recursion.
Test Data :
Input the string to copy : w3resource
Expected Output :

 The string successfully copied.                                                                              
                                                                                                              
 The first string is : w3resource                                                                             
 The copied string is : w3resource
 */

#include <stdio.h>
void CopyString(char[], char[], int);

int main()
{
    char str[20], str1[20];

    printf("\nInput the string to copy: ");
    scanf("%s", str);
    printf("The string successfully copied.\n");
    CopyString(str, str1, 0);
    printf("The first successfully is: %s\n", str);
    printf("The second successfully is: %s\n\n", str1);
}

void CopyString(char str1[], char str2[], int num)
{
    str2[num] = str1[num];
    if (str1[num] == '\0')
        return;
    CopyString(str1, str2, num + 1);
}
