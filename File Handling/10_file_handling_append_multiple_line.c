/*
Write a program in C to append multiple lines at the end of a text file.

Assume that the content of the file test.txt is :
test line 1
test line 2
test line 3
test line 4
Test Data :
Input the file name to be opened : test.txt
Input the number of lines to be written : 3
The lines are :
test line 5
test line 6
test line 7
Expected Output :
The content of the file test.txt is : test line 1 test line 2 test line 3 test line 4 test line 5 test line 6 test line 7
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    FILE *ptr;
    char str[100], str1;
    int i, line_no;

    printf("\nInput file name to be opened: ");
    scanf("%s", name);
    ptr = fopen(name, "a");
    printf("Input the number of line to be: ");
    scanf("%d", &line_no);
    printf("The lines are: \n");
    for (i = 0; i < line_no + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, ptr);
    }
    fclose(ptr);
    //read the file after append
    ptr = fopen(name, "r");
    printf("The content of the file %s is: \n", name);
    str1 = fgetc(ptr);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(ptr);
    }
    printf("\n\n");
    fclose(ptr);
    //end of reading
    return 0;
}
