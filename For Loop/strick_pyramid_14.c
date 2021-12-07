/*  Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

   * 
  * * 
 * * * 
* * * * */

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
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
        spc --;
    }
}