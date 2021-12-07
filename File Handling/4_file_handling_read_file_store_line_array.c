/*
Write a program in C to read the file and store the lines into an array. Go to the editor
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt  are :                                                                      
 test line 1                                                                                                  
 test line 2                                                                                                  
 test line 3                                                                                                  
 test line 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define left_size 128
#define right_size 20
int main()
{
    char str[right_size][left_size];
    char name[20];
    FILE *ptr = NULL;
    int i = 0;
    int n = 0;
    printf("\nInput the file name to be opened: ");
    scanf("%s", name);
    ptr = fopen(name, "r");
    while (fgets(str[i], left_size, ptr))
    {
        str[i][strlen(str[i]) - 1] = '\0';
        i++;
    }
    n = i;
    printf("\nThe content of the file %s are\n", name);
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    printf("\n");
    return 0;
}
