/*
/*
Write a C program to check if a given string is
valid or not, the string contains the characters
'(', ')', '{', '}', '[' and ']'. The string is valid
if the open brackets must be closed by the same type of brackets
and in correct order.

Expected Output:

false
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


static bool  praentheses(char *str)
{
    int n = 0, cap = 100;
    char *stack = malloc(cap);
    while(*str != '\0')
    {
        switch(*str)
        {
        case '(':
        case '[':
        case '{':
            if(n + 1 >= cap)
            {
                cap *= 2;
                stack = realloc(str, cap);
            }
            stack[n++] = *str;
            break;
        case ')':
            if(stack[--n] != '(')
                return false;
            break;
        case ']':
            if(stack[--n] != '[')
                return false;
            break;
        case '}':
            if(stack[--n] != '{')
                return false;
            break;
        default:
            return false;
        }
        str++;
    }
    return n == 0;
}

int main()
{
    char *bracket = "([)]";
    printf("\n%s\n\n", praentheses(bracket) ? "true" : "false");
    return 0;
}