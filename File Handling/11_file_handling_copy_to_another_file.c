/*
Write a program in C to copy a file in another name.

Assume that the content of the file test.txt is :                                                                       
test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4                                                                                                   
Test Data :
Input the source file name : test.txt
Input the new file name : test1.txt
Expected Output :

 The file test.txt  copied successfully in the file test1.txt.
If you read the new file you will see the content of the file :

test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4 
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[20], name1[20], chr;
    FILE *ptr1, *ptr2;

    printf("\nInput the source file name: ");
    scanf("%s", name);
    ptr1 = fopen(name, "r");
    if (ptr1 == NULL)
    {
        printf("File does not found or error in opening.!\n");
        exit(1);
    }
    printf("Input the new file name: ");
    scanf("%s", name1);
    ptr2 = fopen(name1, "w");
    if (ptr2 == NULL)
    {
        printf("File does not found or error in opening.!\n");
        fclose(ptr1);
        exit(2);
    }
    while (1)
    {
        chr = fgetc(ptr1);
        if (chr == EOF)
            break;
        else
            fputc(chr, ptr2);
    }
    printf("The file %s copied succssfully in the file %s/n", name, name1);
    fclose(ptr1);
    fclose(ptr2);
    getchar();
    //printf("\nIf you read the new file you will see the content of the file: \n");
}