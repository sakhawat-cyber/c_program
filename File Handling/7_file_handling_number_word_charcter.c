/*
Write a program in C to count a number of words and characters in a file.
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt are :                                                                       
test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4                                                                                                   
 The number of words in the  file test.txt are : 12                                                           
 The number of characters in the  file test.txt are : 3
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char str[20], chr;
    int word = 1, character = 1;
    printf("\nInput the file name to be opened: ");
    scanf("%s", str);
    ptr = fopen(str, "r");
    if (ptr == NULL)
        printf("File dose not exist or can not be opened.");
    else
    {
        chr = fgetc(ptr);
        printf("The content of the file %s are: ", str);
        while (chr != EOF)
        {
            printf("%c", chr);
            if (chr == ' ' || chr == '\n')
                word++;
            else
                character++;
            chr = fgetc(ptr);
        }
        printf("\nThe number of words in the file %s are: %d\n", str, word - 2);
        printf("The number of character in the file %s are: %d\n\n", str, character - 1);
    }
    fclose(ptr);
}