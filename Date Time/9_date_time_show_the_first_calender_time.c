/*
Write a program in C to show the first of calendar time.
Expected Output :

Sun Jan 01 00:00:00 1900
*/
#include<stdio.h>
#include<time.h>

int main()
{
    struct tm first = {.tm_mday = 1};
    mktime (&first);
    printf("\n%s\n", asctime(&first));
}