/*
Write a C program to check if a given string can be interpreted as a decimal number.
Example:
Input:
str_num1[ ] ="1234"
str_num2[ ]=" 0.1 "
str_num3[ ]=" -90e3 "
str_num4[ ]=" 99e2.5 "
Output:
Is the above string is a number? 1
Is the above string is a number? 1
Is the above string is a number? 1
Is the above string is a number? 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool Number(char *str1)
{
    int n, n1;
    //skip leading space
    while (*str1 == ' ')
        str1++;
    n = n1 = 0;
    //skip the sign of the number
    if (*str1 == '+' || *str1 == '-')
        str1++;
    while (*str1 >= '0' && *str1 <= '9')
    {
        n++;
        str1++;
    }
    if (*str1 == '.')
    {
        str1++;
        while (*str1 >= '0' && *str1 <= '9')
        {
            n1++;
            str1++;
        }
        if (!n && !n1)
            return false;
    }
    else if (!n)
        return false;
    if (*str1 == 'e' || *str1 == 'E')
    {
        str1++;
        if (*str1 == '+' || *str1 == '-')
            str1++;
        n = 0;
        while (*str1 >= '0' && *str1 <= '9')
        {
            n++;
            str1++;
        }
        if (!n)
            return false;
    }
    while (*str1 == ' ')
        str1++;
    return *str1 == 0 ? true : false;
}

int main()
{
    char str1[] = "1234";
    printf("str_num1[] = %s", str1);
    printf("\nIs this above string is a number? %d\n\n", Number(str1));

    char str2[] = "0.1";
    printf("str_num2[] = %s", str2);
    printf("\nIs this above string is a number? %d\n\n", Number(str2));

    char str3[] = "-90e3";
    printf("str_num3[] = %s", str3);
    printf("\nIs this above string is a number? %d\n\n", Number(str3));

    char str4[] = "99e2.5";
    printf("str_num4[] = %s", str4);
    printf("\nIs this above string is a number? %d\n\n", Number(str4));
    return 0;
}