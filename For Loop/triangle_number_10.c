/* Write a program in C to display the pattern like right angle triangle with a number.

The pattern like :

1
12
123
1234 */

#include <stdio.h>
int main()
{
    int row, col, n1;
    printf("Enter the row number: ");
    scanf("%d", &n1);

    for (row = 1; row <= n1; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}