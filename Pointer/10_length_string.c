/* Write a program in C to Calculate the length of the string using a pointer.
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource                                                                    
is : 10  */

#include <stdio.h>
int CulculateLength(char *);

void main()
{
    char str[25];
    printf("Input a string: ");
    fgets(str, sizeof str, stdin);

    int i = CulculateLength(str);
    printf("The length of the given string %s is : %d ", str, i - 1);
    printf("\n\n");
}

/* ch = base address of array str (&str[0]) */
int CulculateLength(char *ch)
{
    int ctr = 0;
    while (*ch != '\0')
    {
        ctr++;
        ch++;
    }
    return ctr;
}