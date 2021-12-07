/* Write a program in C to make such a pattern like 
a pyramid with a number which will repeat the numbere
 same row.

   1
  2 2
 3 3 3
4 4 4 4 */

#include<stdio.h>
int main()
{
    int n, spc, row, col1, col;
    printf("Enter the row number: ");
    scanf("%d", &n);
    spc = n + 4 - 1;
    for(row = 1; row <= n; row++)
    {
        for(col1 = spc; col1 >= 1; col1--)
        {
            printf(" ");
        }
        for(col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
        spc--;
    }
}