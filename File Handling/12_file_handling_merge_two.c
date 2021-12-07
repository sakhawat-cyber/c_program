/*
Write a program in C to merge two files and write it in a new file. 

Assume that the content of the file test.txt and test1.txr is :                                                                       
 The content of the file test.txt is  : 
This is the file test.txt. 

 The content of the file test1.txt is  : 
This is the file test1.txt.                                                                                                    
Test Data :
Input the 1st file name : test.txt
Input the 2nd file name : test1.txt
Input the new file name where to merge the above two files : mergefiles.txt
Expected Output :

 The two files merged into mergefiles.txt file successfully..!! 
Here is the content of the merge file mergefiles.txt :

 The content of the file mergefiles.txt is  :                                                                 
This is the file test.txt.                                                                                    
This is the file test1.txt.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[20], name1[20], name2[20], chr;
    FILE *new_file;
    FILE *ptr1, *ptr2, *ptr3;

    printf("\nInput the 1st file name: ");
    scanf("%s", name);
    printf("Input the 2nd file name: ");
    scanf("%s", name1);
    printf("Input the new file name where to merge the above two file: ");
    scanf("%s", name2);
    ptr1 = fopen(name, "r");
    ptr2 = fopen(name1, "r");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        //pererror ("Error Message");
        printf("File dose not exist or error in opening...\n");
        exit(EXIT_FAILURE);
    }
    new_file = fopen(name2, "w");
    if (new_file == NULL)
    {
        //pererror ("Error message");
        printf("File dose not exist or error in opening....\n");
        exit(EXIT_FAILURE);
    }
    while ((chr = fgetc(ptr1)) != EOF)
    {
        fputc(chr, new_file);
    }
    while ((chr = fgetc(ptr2)) != EOF)
    {
        fputc(chr, new_file);
    }
    printf("The two files merge into %s file successfully\n\n", name2);
    fclose(ptr1);
    fclose(ptr2);
    fclose(new_file);
    //printf("Here is the content of the merge file %s: \n", name2);
    //printf("The content of the file %s is: \n");
    //printf("This is the file %s.\n", name);
    //printf("This is the file %s", name1);
}