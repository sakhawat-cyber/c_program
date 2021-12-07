/*
Write a C programming to count of each character in a given string.
Test Data :
Input a string: w3resource
Expected Output:

Enter a str1ing: The count of each character in the string w3resource is 
w	1
3	1
r	2
e	2
s	1
o	1
u	1
c	1
*/

#include <stdio.h>
#include <string.h>

int IfCharExists(char x, char y[], int n, int n1[])
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (y[i] == x)
        {
            n1[i]++;
            return (1);
        }
    }
    if (i > n)
        return (0);
}

int main()
{
    char str[50], str1[50];
    int len, n, i, str2[20];

    printf("Input a string: ");
    scanf("%s", str);
    //fgets(str, sizeof(str), stdin);

    len = strlen(str);
    str1[0] = str[0];
    str2[0] = 1;
    n = 0;

    for (i = 1; i < len; i++)
    {
        if (!IfCharExists(str[i], str1, n, str2))
        {
            n++;
            str1[n] = str[i];
            str2[n] = 1;
        }
    }
    printf("The count of each character in the string is\n", str);
    for (i = 0; i <= n; i++)
        printf("%c\t%d\n", str1[i], str2[i]);
}
