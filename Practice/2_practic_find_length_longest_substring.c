/*
Write a C program to find length of the longest substring of a given string without repeating characters. Go to the editor
Expected Output:

 Original String: xyzxyzyy  
 Length of the longest substring without repeating characters: 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int lengthLongestSubstring(char *str)
{
    int off_set[128];
    int sub_str_max_len = 0;
    int len = 0;
    int index = 0;
    memset(off_set, 0xff, sizeof(off_set));
    while (*str != '\0')
    {
        if (off_set[*str] == -1)
            len++;
        else
        {
            if (index - off_set[*str] > len)
                len++;
            else
                len = index - off_set[*str];
        }
        if (len > sub_str_max_len)
            sub_str_max_len = len;
        off_set[*str++] = index++;
    }
    return sub_str_max_len;
}

int main()
{
    char *str = "xyzxyzyy";
    printf("\nOriginal Array: %s", str);
    printf("\nLength of the longest substring without repearing characters: %d\n\n", lengthLongestSubstring(str));
    return 0;
}