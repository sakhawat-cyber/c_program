/* Write a C program to sum of all numerical values (positive integers) embedded
in a sentence.
Input:
Sentences with positive integers are given over multiple lines. Each line is a
character string containing one-byte alphanumeric characters, symbols, spaces,
or an empty line. However the input is 80 characters or less per line and the
sum is 10,000 or less.
Sample Output:

Input Sentences with positive integers:
5littleJackand2mouse.
Sum of all numerical values embedded in a sentence:
7 */

#include <stdio.h>
#include <stdlib.h>
char text[128];
int main(void)
{
    int i, j, k;
    int result = 0;
    char temp[8];
    
    printf("Input Sentences with positive integer:\n");
    gets(text);

    i = 0;
    while (text[i])
    {
        for (; (text[i] < '0' || '9' < text[i]) && text[i]; i++);
            if ('0' <= text[i] && text[i] <= '9')
            {
                for (j = 0; '0' <= text[i] && text[i] <= '9'; j++, i++)
                {
                    temp[j] = text[i];
                }
                temp[j] = '\0';
                result += atoi(temp);
            }
    }
    printf("\nSum of all numerical values embeded in a sentence:\n");
    printf("%d\n", result);
    return 0;
}
