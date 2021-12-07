/*
Write a program in C to create and store information in a text file.
Test Data :
Input a sentence for the file : This is the content of the file test.txt.
Expected Output :

 The file test.txt created successfully...!! 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char str[20], name[20] = "text.txt";
    ptr = fopen(name, "w");
    printf("\n\nCreate a file (text.txt) and input text: \n");
    printf("---------------------------------------------\n");
    if (ptr == NULL)
    {
        printf("Error in opening file!");
        exit(1);
    }
    printf("\nInput a sentence for the file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(ptr, "%s", str);
    fclose(ptr);
    printf("\nThe file %s created successfully...!\n\n", name);
    return 0;
}