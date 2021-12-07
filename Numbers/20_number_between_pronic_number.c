/* 
Write a program in C to find Pronic Number between 1 to 1000. 

Expected Output :
The Pronic numbers are: 2 6 12 20 30 42 56 72 90 110 132 156 182 210 240 272 306 342 380 420 462 506 552 600 650 702 756 812 870 930 992
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, n, j;
    printf("The pronic numbers are: \n");
    for (j = 1; j <= 1000; j++)
    {
        num = 0;
        for (i = 1; i <= j; i++)
        {
            if (i * (i + 1) == j)
            {
                num = 1;
                break;
            }
        }
        if (num == 1)
            printf("%d ", j);
    }
}