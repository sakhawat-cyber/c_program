/* Write a program in C to print the Floyd's 
Triangle.

1 
01
101 
0101 
10101  */

#include <stdio.h>
int main()
{
    int n, row, p, q, col;
    printf("Input the number: ");
    scanf("%d", &n);

    //spc = n + 4 - 1;
    for (row = 1; row <= n; row++)
    {
        if (row % 2 == 0)
        {
            p = 1;
            q = 0;
        }
        else
        {
            p = 0;
            q = 1;
        }
        for (col = 1; col <= row; col++)
        {
            if (col % 2 == 0)
                printf("%d ", p);
            else
                printf("%d ", q);

        }
        printf("\n");
    }
}