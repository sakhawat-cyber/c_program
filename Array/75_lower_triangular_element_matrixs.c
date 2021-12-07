/*  Write a program in C to find the sum of lower triangular elements of a matrix.
Expected Output:
The given array is :
1 2 3
4 5 6
7 8 9
The elements being summed of the lower triangular matrix are: 4 7 8
The Sum of the lower triangular Matrix Elements are: 19 */

#include <stdio.h>
#define row 3
#define col 3

int main()
{
    int arr[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}},
        i, j, num = 3, Row, Col, sum = 0;
    printf("The given array is: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nThe elements being summed of the lower triangular matrix are: ");
    for (Row = 0; Row < row; Row++)
    {
        for (Col = 0; Col < col; Col++)
        {
            if (Row > Col)
            {
                printf("%d ", arr[Row][Col]);
                sum += arr[Row][Col];
            }
        }
    }
    printf("\nThe sum of the lower triangular Matrix Elements are: %d", sum);
}