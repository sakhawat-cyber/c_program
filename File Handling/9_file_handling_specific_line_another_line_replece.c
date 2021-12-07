/*
Write a program in C to replace a specific line with another text in a file.

Assume that the content of the file test.txt is :                                                                       
test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4                                                                                                   
Test Data :
Input the file name to be opened : test.txt
Input the content of the new line : Yes, I am the new text instead of test line 2
Input the line no you want to replace : 2
Expected Output :

Replacement did successfully..!! 
*/

#include <stdio.h>
#include <string.h>
#define max 100

int main()
{
    char name[max], str[max], new_line[max], temp[] = "temp.txt";
    FILE *ptr, *ptr1;
    int line_no, line_num = 0;
    printf("\nInput the file name to be opened: ");
    //scanf("%s", name);
    fgets(name, max, stdin);
    name[strlen(name) - 1] = '\0';
    ptr = fopen(name, "r");
    if (!ptr)
    {
        printf("Unable to open the input file!!\n");
        return 0;
    }
    ptr1 = fopen(temp, "w");
    if (!ptr1)
    {
        printf("Unable to open a temporary file to write!!\n");
        fclose(ptr);
        return 0;
    }
    //get the new line from teh user
    printf("Input the content of the new line: ");
    fgets(new_line, max, stdin);
    //get the line number to delete te specipic line
    printf("Input the line no you want to replace: ");
    scanf("%d", &line_no);
    line_no++;
    //copy all content to the temporary file other except specific line
    while (!feof(ptr))
    {
        strcpy(str, "\0");
        fgets(str, max, ptr);
        if (!feof(ptr))
        {
            line_num++;
            if (line_num != line_no)
                fprintf(ptr, "%s", str);
            else
                fprintf(ptr1, "%s", new_line);
        }
    }
    fclose(ptr);
    fclose(ptr1);
    remove(name);
    rename(temp, name);
    printf("Replacement did successfully...!!\n");
    printf("\n\n");
    return 0;
}