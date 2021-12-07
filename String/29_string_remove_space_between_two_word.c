/*
Write a program in C to read a file and remove the spaces between two words of its content.

Expected Output :

The content of the file is :                                           
The quick brown fox jumps over the lazy dog                            
After removing the spaces the content is :                             
Thequickbrownfoxjumpsoverthelazydog
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *pfile;
    int num;
    pfile = fopen("file.text", "r");
    printf("The content of the file is:\nThe quick brown fox jumps over the lazy dog.\n");
    
    if (pfile)
    {
        do
        {
            num = fgetc(pfile);
            if (isgraph(num))
                putchar(num);
        } while (num != EOF);
        fclose(pfile);
    }
    printf("After removing the spaces the content is:\nThe quick brown fox jumps over the lazy dog.");
    return 0;
}