/*
Write a program in C to multiply two matrix using recursion.
Test Data :
Input number of rows for the first matrix : 2
Input number of columns for the first matrix : 1
Input number of rows for the second matrix : 1
Input number of columns for the second matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [1],[0] : 2
Input elements in the second matrix :
element - [0],[0] : 3
element - [0],[1] : 4
Expected Output :

Here is the elements of First matrix :                                          
                                                                                 
 1                                                                               
 2                                                                               
 Here is the elements of Second matrix :                                         
                                                                                 
 3       4                                                                       
 The multiplication of two matrix is :                                           
                                                                                 
 3       4                                                                       
 6       8    
 */

#include <stdio.h>
void MultiplyMatrix(int row_m[20][20], int col_m[20][20], int row1, int col1, int row2, int col2, int mul_mat[20][20]);

int main()
{
    int r1, c1, r2, c2, arr[20][20], arr1[20][20], i, j, mul_mat[20][20];
    int row_m[20][20], col_m[20][20];
    printf("\nInput number of row for the first matrix: ");
    scanf("%d", &r1);
    printf("Input number of column for the first matrix: ");
    scanf("%d", &c1);
    printf("Input number of row for the second matrix: ");
    scanf("%d", &r2);
    printf("Input number of column for the second matrix: ");
    scanf("%d", &c2);
    printf("\nInput elements in the first matrix: \n");
    if (c1 != r2)
    {
        printf("\ncheck col. of first and row of second matrix.\n");
        printf("\nThey are different. try again alter.\n");
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("element- [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("\nHere is the element of first matrix: \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\nInput elements in the sceond matrix: \n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("element- [%d][%d]: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("\nHere is the element of second matrix: \n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
        MultiplyMatrix(row_m, col_m, r1, c1, r2, c2, mul_mat);
    }
    printf("\nThe multiplecation of two matrix is: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", mul_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void MultiplyMatrix(int row_m[20][20], int col_m[20][20], int row1, int col1, int row2, int col2, int mul_mat[20][20])
{
    static int sum, i = 0, j = 0, k = 0;
    
    //row of first matrix
    if (i < row1)
    {
        //col of second matrix
        if (j < col2)
        {
            if (k < col1)
            {
                sum = sum + row_m[i][k] * col_m[k][j];
                k++;
                MultiplyMatrix(row_m, col_m, row1, col1, row2, col2, mul_mat);
            }
            mul_mat[i][j] = sum;
            sum = 0;
            k = 0;
            j++;
            MultiplyMatrix(row_m, col_m, row1, col1, row2, col2, mul_mat);
        }
        j = 0;
        i++;
        MultiplyMatrix(row_m, col_m, row1, col1, row2, col2, mul_mat);
    }
}
