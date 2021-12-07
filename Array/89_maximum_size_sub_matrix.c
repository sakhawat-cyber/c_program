/* Write a program in C to find maximum size square sub-matrix with all 1s. Go to the editor
Expected Output:
The given array in matrix form is :
0 1 0 1 1
1 1 1 1 0
1 1 1 1 0
1 1 1 1 0
1 1 1 1 1
0 1 0 1 0
The maximum size sub-matrix is:
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1 */

#include <stdio.h>
#define bool int
#define row 6
#define col 5

void SqureSubaray(bool arr[row][col])
{
    int i, j, sub_arr[row][col], max_sub_arr, max_i, max_j;
    
    for (i = 0; i < row; i++)
        sub_arr[i][0] = arr[i][0];

    for (j = 0; j < col; j++)
        sub_arr[0][j] = arr[0][j];

    for (i = 1; i < row; i++)
    {
        for (j = 1; j < col; j++)
        {
            if (arr[i][j] == 1)
                sub_arr[i][j] = min(sub_arr[i][j - 1], sub_arr[i - 1][j], sub_arr[i - 1][j - 1]) + 1;
            else
                sub_arr[i][j] = 0;
        }
    }
    max_sub_arr = sub_arr[0][0];
    max_i = 0;
    max_j = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (max_sub_arr < sub_arr[i][j])
            {
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("\nThe maximum size sub - matrix is: \n");
    for (i = max_i; i > max_i - max_sub_arr; i--)
    {
        for (j = max_j; j > max_j - max_sub_arr; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int min(int a, int b, int c)
{
    int num = a;
    if (num > b)
        num = b;

    if (num > c)
        num = c;

    return num;
}

int main()
{
    bool arr[row][col] = {
        {0, 1, 0, 1, 1},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 0, 1, 0},
    }, i, j;

    printf("The given arry in matrix from is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    SqureSubaray(arr);
}