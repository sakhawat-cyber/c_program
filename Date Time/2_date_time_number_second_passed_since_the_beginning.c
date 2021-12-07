/*
Write a program in C to compute the number of seconds passed since the beginning of the month.

Expected Output :

1147534 seconds passed since the beginning of the month.
*/

#include<stdio.h>
#include<time.h>

int main(void)
{
    time_t now;
    time(&now);

    struct tm beg_month;
    beg_month = *localtime(&now);
    beg_month.tm_hour = 0;
    beg_month.tm_min = 0;
    beg_month.tm_sec= 0;
    beg_month.tm_mday = 1;

    double second = difftime(now, mktime(&beg_month));
    printf("\n%.f second passed since the beginning of the month.", second);
    return 0;
}