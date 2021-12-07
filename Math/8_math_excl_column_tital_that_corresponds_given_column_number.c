/*
Write a C program to get the Excel column title that corresponds to a given column number (integer value).
For example:
1 -> A
2 -> B
3 -> C
...
26 -> Z
27 -> AA
28 -> AB
...
Example:
Input:
n = 3
n = 27
n = 151
Output:
Excel column title: C
Excel column title: AA
Excel column title: EU
*/

#include <stdio.h>
#include <stdlib.h>

static char *ConvertExcelTitel(int column_no)
{
    if (column_no <= 0)
        return "";

    char *result = malloc(1024);
    int length = 0, i, j;

    do
    {
        result[length++] = ((column_no - 1) % 26) + 'A';
        column_no = (column_no - 1) / 26;
    } while (column_no > 0);
    result[length] = '\0';
    

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        char c;
        c = result[i];
        result[i] = result[j];
        result[j] = c;
    }
    return result;
}

int main(void)
{
    int x, y, z;
    x = 3;
    y = 27;
    z = 151;

    printf("n = %d\n", x);
    printf("Excel column titel: %s\n\n", ConvertExcelTitel(x));

    printf("n = %d\n", y);
    printf("Excel column titel: %s\n\n", ConvertExcelTitel(y));

    printf("n = %d\n", z);
    printf("Excel column titel: %s\n\n", ConvertExcelTitel(z));
    return 0;
}