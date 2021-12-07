/* Write a program in C that takes minutes as input, and display the total number of hours and minutes. Go to the editor
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes */

#include<stdio.h>
int main()
{
    int min, hour, minutes;
    char line_text[50];
    printf("Input minutes: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d", &min);

    hour = (min / 60);
    minutes = (min % 60);
    //minutes = ;

    printf("%d Hours, %d Minutes", hour, minutes);
    return 0;
}
