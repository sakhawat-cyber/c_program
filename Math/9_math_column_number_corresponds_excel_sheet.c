/*
Write a C program to get the column number (integer value) that corresponds to a column title as appear in an Excel sheet.
For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
...
Example:
Input:
col_title1[ ] ="C"
col_title2[ ] ="AC"
col_title3[ ] ="ZY"
Output:
Corresponding number: 3
Corresponding number: 29
Corresponding number: 701
*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

static int ExcelTitalNumber(char *ch)
{
    int x = 0;
    while (ch && *ch)
    {
        x = x * 26 + (*ch) - 'A' + 1;
        ch++;
    }
    return x;
}

int main()
{
    //char ch1[], ch2[], ch3[];
    char ch1[] = "C";
    printf("col_tital1[] = %s\n", ch1);
    printf("corresponding number: %d\n\n", ExcelTitalNumber(ch1));

    char ch2[] = "AC";
    printf("col_tital1[] = %s\n", ch2);
    printf("corresponding number: %d\n\n", ExcelTitalNumber(ch2));

    char ch3[] = "ZY";
    printf("col_tital1[] = %s\n", ch3);
    printf("corresponding number: %d\n\n", ExcelTitalNumber(ch3));

    return 0;
}
