/*
Write a C program to find the longest palindromic substring of a given string. Maximum length of the given string is 1000.
Expected Output:

Original String: yxypxst Longest palindromic substring of the said string: yxy
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int x, int y)
{
    return x < y ? x : y;
}

static int LongestSubstring(char *str, char *output)
{
    int i, j;
    char str2[100] = {'\0'};
    str2[0] = '$';
    for (i = 0; str[i] != '\0'; i++)
    {
        str2[(i << 1) + 1] = '#';
        str2[(i << 1) + 2] = str[i];
    }
    str2[(i << 1) + 1] = '#';
    int len = (i << 1) + 2;
    str2[len] = '\0';

    int ptr[100] = {0};
    int id = 0;
    int limit = 0;
    int max_len = 0;
    int max_id = 0;
    for (i = 1; i < len; i++)
    {
        if (i < limit)
            ptr[i] = min(ptr[2 * id - i], limit - i);
        else
            ptr[i] = 1;
        while (str2[i + ptr[i]] == str2[i - ptr[i]])
        {
            ptr[i]++;
        }
        if (i + ptr[i] > limit)
        {
            limit = i + ptr[i];
            id = i;
        }
        if (max_len < ptr[i] - 1)
        {
            max_len = ptr[i] - 1;
            max_id = i;
        }
    }
    for (j = 0, i = max_id - max_len; i <= max_id + max_len; i++)
    {
        if (str2[i] != '#')
            output[j++] = str2[i];
    }
    return max_len;
}

static char *longestPalindrom(char *str)
{
    int i;
    if (str == NULL)
        return NULL;
    int len = strlen(str);
    if (len <= 1)
        return str;

    char *palindrom_str = malloc(200);
    memset(palindrom_str, 0, sizeof(palindrom_str));

    int size = LongestSubstring(str, palindrom_str);
    palindrom_str[size] = '\0';
    return palindrom_str;
}

int main()
{
    char *str = "yxypxst";
    printf("\nOriginal String: %s", str);
    printf("\nLongest Palindromic substring of the said string: %s\n\n", longestPalindrom(str));
    return 0;
}