/* Write a program in C to accept a grade and declare the equivalent description :

Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail
Test Data :
Input the grade :A
Expected Output :
You have chosen : Average */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char notes[15];
    char grd;

    printf("Input the gread : ");
    scanf("%c", &grd);

    grd = toupper(grd);
    switch (grd)
    {
    case 'E':
        strcpy(notes, "Excellent");
        break;
    case 'V':
        strcpy(notes, "very Good");
        break;
    case 'G':
        strcpy(notes, "Good");
        break;
    case 'A':
        strcpy(notes, "Average");
        break;
    case 'F':
        strcpy(notes, "Fail");
        break;
    default:
        strcpy(notes, "Invalid Grade Found.\n");
        break;
    }
    printf("You Have chosen : %s\n", notes);
}