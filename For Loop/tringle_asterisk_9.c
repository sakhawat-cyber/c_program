/* Write a program in C to display the pattern like right angle triangle using an asterisk.

The pattern like :

*
**
***
**** */

#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Inter the row number: ");
    scanf("%d",&n);

    for(row = 1; row <= n; row++)
    {
        for(col = 1;  col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}