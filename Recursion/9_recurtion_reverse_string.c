/*
Write a program in C to reverse a string using recursion.
Test Data :
Input any string: w3resource
Expected Output :

The reversed string is: ecruoser3w
*/

#include <stdio.h>
char *ReverseString(char[]);

int main()
{
    char str[20], *reverse_str;
    printf("\nInput any string: ");
    fgets(str, sizeof(str), stdin);
    reverse_str = ReverseString(str);
    printf("The reversed string is: %s\n\n", reverse_str);
}
char *ReverseString(char str1[])
{
    static int i = 0;
    static char reverse_str1[20];
    if (*str1)
    {
        //calling the function reverse string it self
        ReverseString(str1 + 1);
        reverse_str1[i++] = *str1;
    }
    return reverse_str1;
}