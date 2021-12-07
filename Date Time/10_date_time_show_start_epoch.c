/*
Write a program in C to show the start of the epoch. 
Note : epoch means the beginning of a period in the history of someone.

Expected Output :

0 seconds since the epoch began
Thu Jan 01 00:00:00 1970
*/

#include<stdio.h>
#include<time.h>

int main()
{
    time_t epoch = 0;
    printf("\n%ld second since the epoch began\n", (long)epoch);
    printf("%s\n", asctime(gmtime(&epoch)));
}
