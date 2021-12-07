/* Write a program in C to make such a pattern like right angle triangle with number increased by 1.

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10 */

#include<stdio.h>
int main()
{
    int row, col, n, i = 1;
    printf("Enter the row number: ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", i++);
        }
        printf("\n");
    }
}