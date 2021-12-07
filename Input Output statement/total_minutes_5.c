/* Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes. */

#include<stdio.h>
int main()
{
    int hour, minute, result;
    char line_text[50];
    printf("Input hours: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d", &hour);

    printf("Input minutes: ");
    fgets(line_text, sizeof(line_text), stdin);
    sscanf(line_text, "%d", &minute);

    // 1 Hours = 60 minutes
    result = (hour * 60) + minute;

    printf("Total : %d Minutes", result);
    return 0;
}