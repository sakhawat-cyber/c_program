/* Write a program in C to make such a pattern like 
a pyramid with numbers increased by 1.
   1 
  2 3 
 4 5 6 
7 8 9 10  */

#include<stdio.h>
int main()
{
    int n, spc, row, col1, col, i = 1;
    printf("Enter the row number: ");
    scanf("%d", &n);
    spc = n + 4 - 1;

    for(row = 1; row <= n; row++)
    {
        for(col1 = spc; col1 >= 1; col1--)
        {
            printf(" ");
        }
        //printf("\n");
        for(col = 1; col <= row; col ++)
        {
            printf("%d ", i++);
            //printf("*");

        }
        printf("\n");
        spc--;
    }
}