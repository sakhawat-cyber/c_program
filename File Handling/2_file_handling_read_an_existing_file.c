/*
Write a program in C to read an existing file.
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt is  :                                                                       
This is the content of the file test.txt.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char name[20], str;
    printf("\n\nInput the filename to be opened:");
    scanf("%s", name);
    ptr = fopen(name, "r");
    if (ptr == NULL)
    {
        printf("File does not exist or cannot be opened.\n");
        exit(0);
    }
    printf("\nThe content of the file %s is: \n", name);
    str = fgetc(ptr);
    while (str != EOF)
    {
        printf("%c", str);
        str = fgetc(ptr);
    }
    fclose(ptr);
}