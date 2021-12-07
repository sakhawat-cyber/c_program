/*
Write a program in C to Find the Number of Lines in a Text File.
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The lines in the file test.txt are : 4
 */

#include <stdio.h>

#define first_size 100

int main()
{
    char name[first_size];
    char i;
    FILE *ptr;
    int num = 0;

    printf("\n\nInput the file name to be opende: ");
    scanf("%s", name);
    ptr = fopen(name, "r");
    if (ptr == NULL)
    {
        printf("could not open file %s\n\n", name);
        return 0;
    }
    //extract characters from file and store in characters i
    for (i = getc(ptr); i != EOF; i = getc(ptr))
        //increment count if is character is new line
        if (i == '\n')
            num = num + 1;
    fclose(ptr);
    printf("The lines in the file %s are: %d\n\n", name, num - 1);
    return 0;
}
