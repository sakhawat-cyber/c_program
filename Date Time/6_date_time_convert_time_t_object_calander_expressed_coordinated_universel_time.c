/*
Write a program in C to convert a time_t object to calendar time expressed as Coordinated Universal Time. 
Expected Output :

The calendar time expressed as Coordinated Universal Time is :
UTC:   Thu Aug 03 10:53:03 2017
local: Thu Aug 03 16:23:03 2017
*/

#define __STDC_WANT_LIB_EXT1_1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    time_t t = time(NULL);
    printf("\nThe canlender time expressed as coordinated universal time is: \n");
    printf("\nUTC: %s", asctime(gmtime(&t)));
    printf("local: %s\n", asctime(localtime(&t)));

#ifdef __STDC_LIB_EXT1__
    struct tm buf;
    char str[26];
    asctime_s(str, sizeof str, gmtime_s(&t, &buf));
    printf("UTC: %s", str);
    asctime_s(str, sizeof str, localtime_s, localtime_s(&t, &buf));
    printf("Local: %s", str);
#endif
}