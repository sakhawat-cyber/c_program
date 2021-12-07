/*
Write a program in C to convert a time_t object to a textual representation.

Expected Output :

Thu Aug 03 13:44:49 2017
*/

#define __STDC_WANT_LIB__EXT1
#include <time.h>
#include <stdio.h>


int main()
{
    time_t result = time(NULL);
    printf("\n%s\n", ctime(&result));
#ifdef __STDC_LIB_EXT1__
    char time_str[26];
    ctime_s(time_str, sizeof time_str, &result);
    printf("\n%s\n", time_str);
#endif
}