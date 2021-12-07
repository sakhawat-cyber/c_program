/* Write a C program to get the environment string.

Expected Output :

The set path is: /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin
:/bin:/usr/games:/usr/local/games */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *path;
    path = getenv("PATH");

    if (path != NULL)
    {
        printf("\nThe set path is: %s\n\n", path);
    }
    return 0;
}