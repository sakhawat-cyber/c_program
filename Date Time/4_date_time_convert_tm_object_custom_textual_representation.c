/*
Write a program in C to convert a tm object to custom textual representation. 

Expected Output :

 The textual representation of specified date and time :                                                                      
September Sun Sep  2 16:30:32 2016 pm                                                                                         
September Sun Sep  2 16:30:32 2016 pm 
*/

#include <stdio.h>
#include <time.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    char time_buff[70];
    struct tm my_time = {
        .tm_year = 116, //= year 2016
        .tm_mon = 8,    // = 9th month
        .tm_mday = 2,   // = 2nd day
        .tm_hour = 16,  // = 16 hours
        .tm_min = 30,   // 30 minute
        .tm_sec = 32,   // 32 second
    };

    printf("\nThe textual represention of specifid data and time: \n");

    if (strftime(time_buff, sizeof time_buff, "%B %c %p", &my_time))
        puts(time_buff);
    else
        puts("strftime failed");

    setlocale(LC_TIME, "el_GR.utf8");

    if (strftime(time_buff, sizeof time_buff, "%B %c %p", &my_time))
        puts(time_buff);
    else
        puts("strftime failed");
    printf("\n");
}

