/* 
Write a program in C to print only the string before new line character. 

Note: isprint() will only print line one, because the newline character is not printable.

Expected Output :

The quick brown fox
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int num = 0;
    char str[] = "The quick brown fox\nJumps over the\nlazy dog.\n";
    while (isprint(str[num]))
    {
        putchar(str[num]);
        num++;
    }
    return 0;
}