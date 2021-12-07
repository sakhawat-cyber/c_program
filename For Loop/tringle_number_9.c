/*  Write a program in C to display the pattern like right angle triangle with a number.

The pattern like :

1
12
123 */

#include<stdio.h>
int main()
{
    int n, row, col;
    printf("Enter the row number: ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}