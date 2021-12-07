/*
Write a C program to Write a C programming to convert a given roman number to an integer.

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
Expected Output:
 Original Roman number: XIV
Roman to integer: 14
*/

#include <stdio.h>

static int romanToInteger(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
    }
}

int romanToInt(char *str)
{
    int i, int_num = romanToInteger(str[0]);
    for (i = 1; str[i] != '\0'; i++)
    {
        int prev_num = romanToInteger(str[i - 1]);
        int cur_num = romanToInteger(str[i]);
        if (prev_num < cur_num)
            int_num = int_num - prev_num + (cur_num - prev_num);
        else
            int_num += cur_num;
    }
    return int_num;
}

int main()
{
    char *str;
    printf("\nInput the Roman Number: ");
    scanf("%s", str);
    printf("\nOriginal Roman Number: %s", str);
    printf("\nRoman to integer: %d\n\n", romanToInt(str));
    return 0;
}