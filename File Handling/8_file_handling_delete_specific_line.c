/*
 Write a program in C to delete a specific line from a file. 

Assume that the content of the file test.txt is :                                                                       
test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4                                                                                                   
Test Data :
Input the file name to be opened : test.txt
Input the line you want to remove : 2
Expected Output :

 The content of the file test.txt is :                                                                       
test line 1                                                                                                   
test line 3                                                                                                   
test line 4
*/

#include <stdio.h>
#include<string.h>
#define max 100

int main()
{
    int line_no, num = 0;
    FILE *ptr, *ptr1;
    char str[20];
    char str1[max], temp[] = "temp.txt";
    char chr;

    printf("\nInput the file name to be opened: ");
    scanf("%s", str);
    //printf("\nAssume that the content of the file %s is: \n");
    ptr = fopen(str, "r");
    if (!ptr)
    {
        printf("File not found of unable to open the input file!!\n\n");
        return 0;
    }
    //open the temporary file in wrile mode
    ptr1 = fopen(temp, "w");
    if(!ptr1)
    {
        printf("Unable to open a temporary to write!!\n\n");
        fclose(ptr1);
        return 0;
    }
    printf("Input the line you want to remove: ");
    scanf("%d", &line_no);
    line_no++;
    //copy all content to the temporary file except the specific line
    while (!feof(ptr))
    {
        strcpy(str1, "\0");
        fgets(str1, max, ptr);
        if (!feof(ptr))
        {
            num++;
            //skip the line given line number
            if (num != line_no)
                fprintf(ptr1, "%s", str1);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    //remove the original file
    remove(str);
    //rename the temporary file
    rename(temp, str);
    //read the file
    ptr = fopen(str, "r");
    chr = fgetc(ptr);
    printf("Now the content of the file %s is: ", str);
    while (chr != EOF)
    {
        printf("%c", chr);
        chr = fgetc(ptr);
    }
    fclose(ptr);
    //end of reading
    printf("\n\n");
    return 0;
}