/* Write a C program to extract words of 3 to 6 characters length from a given sentence not more 
than 1024 characters.
Input:
English sentences consisting of delimiters and alphanumeric characters are given on one line.
Sample Output:

English sentences consisting of delimiters and alphanumeric characters on one line:
w3resource.com

Extract words of 3 to 6 characters length from the said sentence:
com */
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char input_text[100];
    char *temp;
    int ctr = 0;

    printf("English sentences consisting of delimiters and alphanumeric characters are given on one line:\n");
    fgets(input_text, sizeof(input_text), stdin);
    printf("\nExtract words of 3 to 6 characters length from the side sentence:");

    for (temp = strtok(input_text, ".,\n"); temp != NULL; temp = strtok(NULL, ".,\n"))
    {
        const int len = strlen(temp);
        if (3 <= len && len <= 6)
        {
            if (ctr++)
            {
                putchar(' ');
            }
            fputs(temp, stdout);
        }
    }
    puts(" ");
    return (0);
}
