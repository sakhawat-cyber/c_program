/* 
Write a program in C to display the first 10 lucus numbers.

Expected Output :
The first 10 Lucus numbers are:
2 1 3 4 7 11 18 29 47 76
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 10, n1 = 2, n2 = 1, i, n3;
    printf("The first 10 lucus number: ");
    if (n > 1)
    {
        printf("%d %d ", n1, n2);
        for (i = 2; i < n; ++i)
        {
            n3 = n2;
            n2 += n1;
            n1 = n3;
            printf("%d ", n2);
        }
        printf("\n");
    }
    else if (n == 1)
    {
        printf("%d ", n2);
        printf("\n");
    }
    else
    {
        printf("Input a positive number.\n");
    }
}