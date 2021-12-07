/* 
Write a program in C to print the first 20 numbers of the Pell series.

Expected Output :
The first 20 numbers of Pell series are:
0 1 2 5 12 29 70 169 408 985 2378 5741 13860 33461 80782 195025 470832 1136689 2744210 6625109
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int i, a = 1, b = 0, c;

    printf("The first 20 numbers of pell series are: \n");
    c = 0;
    printf("%d ", c);
    for (i = 0; i < 20; i++)
    {
        c = a + 2 * b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}