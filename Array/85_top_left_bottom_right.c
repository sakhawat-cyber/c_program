/* Write a program in C to Count all possible paths from top left to bottom right of a m X n matrix.
Expected Output:
The size of matrix is : 4 x 4
The all possible paths from top left to bottom right is: 20 */

#include <stdio.h>

int PathCounting(int n, int n1)
{
    int i, arr[n][n1], j;
    for (i = 0; i < n; i++)
        arr[i][0] = 1;

    for (j = 0; j < n1; j++)
        arr[0][j] = 1;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n1; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    return arr[n - 1][n1 - 1];
}

int main()
{
    int num = 4, num1 = 4;
    printf("The size of matrix is: %d X %d\n", num, num1);
    printf("The all possible path from top left to bottom right is: %d\n", PathCounting(num, num1));
}