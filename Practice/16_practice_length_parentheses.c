/*
Write a C program to find the length of the longest valid (correct-formed) parentheses substring  of a given string. Go to the editor
Expected Output:

Original Parentheses string: (()))
Length of longest parentheses: 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int longestValidCurlibracket(char *str)
{
    int cap = 100, error = -1, length = 0, max_length = 0;
    char *ptr = str;
    int *ptr_stack = malloc(cap * sizeof(int));
    int *top = ptr_stack;

    while (*ptr != '\0')
    {
        if (*ptr == '{')
        {
            if (top + 1 - ptr_stack >= cap)
            {
                cap *= 2;
                ptr_stack = realloc(ptr_stack, cap * sizeof(int));
            }
            *top++ = ptr - str;
        }
        else if (top > ptr_stack)
        {
            if (--top == ptr_stack)
                length = ptr - (str + error);
            else
                length = ptr - (str + *(top - 1));
            if (length > max_length)
                max_length = length;
            else
                error = ptr - str;
        }
        ptr++;
    }
    return max_length;
}

int main()
{
    char str[] = "{(())})";
    printf("\nOriginal curlibracket string: %s\n", str);
    printf("\nLength of longest curlibracket: %d\n\n", longestValidCurlibracket(str));
    return 0;
}

