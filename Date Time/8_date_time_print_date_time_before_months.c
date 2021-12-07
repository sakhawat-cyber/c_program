/*
Write a program in C to print the date and time before 24 months.
Expected Output :

Today is :          Thu Aug  3 17:27:16 2017                                                                                  
(DST is not in effect)                                                                                                        
                                                                                                                              
24 months ago the date was : Mon Aug  3 17:27:16 2015                                                                         
(DST was not in effect)
*/

#define _POSIX1_SOURCE 2
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)
{
    //setenv("TZ", "/user/share/zoneinfo/Asia/Calcutta", 1);

    struct tm tm = *localtime(&(time_t){time(NULL)});

    printf("\nToday is: %s", asctime(&tm));

    printf("(DST is %s)\n", tm.tm_isdst ? "in effect" : "not in effect");

    tm.tm_mon -= 24;

    mktime(&tm);

    printf("\n24 months ago the data was: %s", asctime(&tm));

    printf("(DST was is %s)\n\n", tm.tm_isdst ? "in effect" : "not in effect");
    return 0;
}
