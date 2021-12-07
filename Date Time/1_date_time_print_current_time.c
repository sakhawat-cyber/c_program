/*
Write a program in Co print the current time.

Expected Output :

The Current time is : Thu Aug 03 13:38:58 2017
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    time_t current_time;
    char *current_time_string;
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void)fprintf(stderr, "Failure to get the current time.\n");
        exit(EXIT_FAILURE);
    }
    //convert to local time formet
    current_time_string = ctime(&current_time);

    if (current_time_string == NULL)
    {
        (void)fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    (void)printf("\nThe current time: \n%s", current_time_string);
    exit(EXIT_SUCCESS);
}
