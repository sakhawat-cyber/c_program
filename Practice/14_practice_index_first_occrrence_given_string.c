/*
Write a C program to find the index of the first occurrence of a given string within another given string. If not found return -1.
Expected Output:

Main string: w3resource.com
Substring searched in main string: source
Starting position of the substring in the main string: 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int subStrFun(char *str1, char *str2)
{
    if (str1 == NULL || str2 == NULL)
        return -1;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 < len2)
        return -1;
    if (len2 == 0)
        return 0;

    int i, j, bad_step[100];

    for (i = 0; i < 100; i++)
        bad_step[i] = len2;

    for (i = 0; i < len2; i++)
        bad_step[str2[i]] = len2 - 1 - i;

    int *good_steps = malloc(len2 * sizeof(int));
    for (i = 0; i < len2; i++)
    {
        good_steps[i] = len2;
        for (j = i - 1; j >= 0; j--)
        {
            if (!memcmp(str2 + i, str2 + j, len2 - i))
            {
                good_steps[i] = i - j;
                break;
            }
        }
    }
    char *ptr1 = str1 + len2 - 1;
    char *ptr2 = str2 + len2 - 1;
    char *ptr3 = ptr1;
    while (ptr1 - str1 < len1)
    {
        int step = 0;
        for (i = 1; i <= len2 && *ptr1 == *ptr2; i++)
        {
            if (ptr2 == str2)
                return ptr1 - str1;
            if (good_steps[len2 - i] > step)
                step = good_steps[len2 - i];
            ptr1--;
            ptr2--;
        }
        if (i == 1 && bad_step[*ptr1] > step)
            step = bad_step[*ptr1];
        ptr3 += step;
        ptr1 = ptr3;
        ptr2 = str2 + len2 - 1;
    }
    return -1;
}

static int str(char *main_str, char *sub_str)
{
    unsigned int main_len = strlen(main_str);
    unsigned int sub_len = strlen(sub_str);

    if (sub_len == 0)
        return 0;

    int i, j;
    for (i = 0; i < main_len; i++)
    {
        int found = 1;
        if (main_str[i] == sub_str[0])
        {
            for (j = 1; j < sub_len; j++)
            {
                if (i + j < main_len)
                {
                    if (main_str[i + j] != sub_str[j])
                    {
                        found = 0;
                        break;
                    }
                }
                else
                    return -1;
            }
            if (found)
                return i;
        }
    }
}

int main()
{
    char str1[] = "w3resource.com";
    char str2[] = "source";
    printf("\nMain string: %s", str1);
    printf("\nSubstring searched in main string: %s", str2);
    printf("\nStarting postion of the substring in the main string: %d\n\n", str(str1, str2));
    return 0;
}