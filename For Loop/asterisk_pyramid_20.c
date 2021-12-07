/* Write a program in C to display the pattern like 
a pyramid using asterisk and each row contain an 
odd number of asterisks.

   *
  ***
 ***** */

#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Input the number: ");
    scanf("%d", &n);

    //spc = n + 3 - 1;
    for (row = 0; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
        //spc --;
    }
}