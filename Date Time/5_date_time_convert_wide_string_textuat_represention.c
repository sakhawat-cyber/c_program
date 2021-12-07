/*Write a program in C to convert a tm object to custom wide string textual representation.

Expected Output :

 The textual representation of specified date and time :

Sunday 09/02/16 17:51:10
Sunday 09/02/16 17:51:10
*/

#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    wchar_t buff[40];
    struct tm my_time = {.tm_year = 116,
                         .tm_mon = 8,
                         .tm_mday = 2,
                         .tm_hour = 17,
                         .tm_min = 51,
                         .tm_sec = 10};

    printf("\nTextual representation of specified date and time: \n");
    if (wcsftime(buff, sizeof buff, L"%A %c", &my_time))
        printf("\n%ls\n", buff);
    else
        puts("wcsftime faild");

    setlocale(LC_ALL, "en_US.UTF-8");
    if (wcsftime(buff, sizeof buff, L"%A %c", &my_time))
        printf("%ls\n\n", buff);
    else
        puts("wcsftime failed");
}