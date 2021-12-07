/*
Write a program in C to write multiple lines in a text file. 
Test Data :
Input the number of lines to be written : 4
:: The lines are ::
test line 1
test line 2
test line 3
test line 4
Expected Output :

 The content of the file test.txt is  :                                                                       
test line 1                                                                                                   
test line 2                                                                                                   
test line 3                                                                                                   
test line 4 
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char str[20], name[20] = "text.txt", str1;
    int n, i;
    printf("\n\nInput the number of lines to be written: ");
    scanf("%d", &n);
    printf("::The lines are::\n");
    ptr = fopen(name, "w");
    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, ptr);
    }
    fclose(ptr);
    //read the file
    ptr = fopen(name, "r");
    printf("\nThe content of the file %s is: \n", name);
    str1 = fgetc(ptr);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(ptr);
    }
    printf("\n\n");
    fclose(ptr);
    return 0;
}