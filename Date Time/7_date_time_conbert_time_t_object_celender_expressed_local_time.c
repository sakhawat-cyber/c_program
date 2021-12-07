/*
Write a program in C to convert a time_t object to calendar time expressed as local time. 
Expected Output :

The calendar time expressed as a local Time is :
UTC:   Thu Aug 03 11:15:59 2017
local: Thu Aug 03 16:45:59 2017
*/

#define __STDC_WANT_LIB_EXT1__1
#include <stdio.h>
#include <math.h>

int main()
{
    time_t t = time(NULL);
    printf("\nThe celender time expressed as a local time: \n");
    printf("\nUTC: %s", asctime(gmtime(&t)));
    printf("local: %s\n", asctime(localtime(&t)));

#ifdef __STDC_LIB_EXT1__
    struct tm buf;
    char str[26];
    asctime_s(str, sizeof str, gmtime_s(&t, &buf));
    printf("UTC: %s", str);
    asctime_s(str, sizeof str, localtime_s(&t, &buf));
    printf("\nLocal: %s", str);
#endif
}