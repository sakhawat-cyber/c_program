/*
Write a C programming to find the repeated character in a given string.
Test Data :
Input a string: w3resource
Expected Output:

Input a string: The first repetitive character in w3resource is: r 
*/

#include <stdio.h>
#include <string.h>

int IfExists(char p, char q[], int v)
{
    int i;
    for (i = 0; i < v; i++)
        if (q[i] == p)
            return (1);
    return (0);
}

int main()
{
    char str[50], str1[50];
    int len, x, i;
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    str1[0] = str[0];
    x = 1;

    for (i = 1; i < len; i++)
    {
        if (IfExists(srt[i], str1, x))
            ;
        {
            printf("The first repetitive character in %s is: %c", str, str[i]);
            break;
        }
        else
        {
            str1[x] = str[i];
            x++;
        }
    }
    if (i == len)
        printf("There is no repetitive character in the string %s.", str);
}