/*
Write a program in C to find the content of the file and number of lines in a Text File.
Test Data :
Input the filen ame to be opened : test.txt
Expected Output :

 The content of the file test.txt  are :                                                                      
 test line 1                                                                                                  
 test line 2                                                                                                  
 test line 3                                                                                                  
 test line 4                                                                                                  
 The lines in the file are : 4
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define left_size 128
 #define right_size 10

int main(void)
{
    FILE *ptr = NULL;
    char str[20];
    int i = 0, n = 0;
    char line[right_size][left_size];

    printf("\nInput the file name to be opened: ");
    scanf("%s", str);
    ptr = fopen(str, "r");
    //strore the lines into an array
    while (fgets(line[i], left_size, ptr))
    {
        line[i][strlen(line[i]) - 1] = '\0';
        i++;
    }
    n = i;
    printf("The content of the file %s are: \n", str);
    for (i = 0; i < n; i++)
        printf("%s\n", line[i]);
    printf("\nThe lines in the file are: %d\n", n - 1);
    printf("\n");
    return 0;
}