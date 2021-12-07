/*
Write a program in C to read a string through keyboard and sort it using bubble sort.

Test Data :
Input number of strings :3
Input string 3 :
zero
one
two

Expected Output :

The strings appears after sorting : 
one 
two 
zero 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[50][25], temp[25];
    int i, n, arr[20], j;
    printf("Input number of string: ");
    scanf("%d", &n);
    printf("Input string: \n");
    for (i = 0; i <= n; i++)
    {
        fgets(str[i], sizeof(str), stdin);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    printf("The strings appears after sorting: ");
    for (i = 0; i <= n; i++)
        printf("%s", str[i]);
}