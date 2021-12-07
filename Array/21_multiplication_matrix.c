/*  Write a program in C for multiplication of two square Matrices. Go to the editor
Test Data :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The multiplication of two matrix is :

19 22
43 50 */

#include <stdio.h>
int main()
{
   int row, col, row1, col1, i, j, arr[20][20], arr1[20][20], mul = 0, arr2[20][20], k;
   printf("Input the row and columns of first matrix: ");
   scanf("%d%d", &row, &col);

   printf("Input the row and columns of first matrix: ");
   scanf("%d%d", &row1, &col1);
   if (col != row1)
   {
      printf("Error, The row and column not equal.\n");
      printf("\ncolumns of first matrix and row of second matrix must be same.\n");
   }

   else
   {
      printf("Input element in the first matrix: \n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j < col; j++)
         {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr[i][j]);
         }
         printf("\n");
      }

      printf("Input element in the sceond matrix: \n");
      for (i = 0; i < row1; i++)
      {
         for (j = 0; j < col1; j++)
         {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
         }
         printf("\n");
      }

      printf("The first matrix: \n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j < col; j++)
         {
            printf("%d\t", arr[i][j]);
         }
         printf("\n");
      }
      printf("The second matrix: \n");
      for (i = 0; i < row1; i++)
      {
         for (j = 0; j < col1; j++)
         {
            printf("%d\t", arr1[i][j]);
         }
         printf("\n");
      }

      printf("The multiplication of two matrix is: \n");
      for (i = 0; i < row; i++)
      {
         for (j = 0; j < col1; j++)
            arr2[i][j] = 0;
         for (i = 0; i < row; i++) //row of first matrix
         {
            for (j = 0; j < col1; j++) //row of second matrix
            {
               mul = 0;
               for (k = 0; k < col; k++)
                  mul = mul + arr[i][k] * arr1[k][j];
               arr2[i][j] = mul;
            }
         }
      }
      for (i = 0; i < row; i++)
      {
         for (j = 0; j < col1; j++)
         {
            printf("%d\t", arr2[i][j]);
         }
         printf("\n");
      }
   }
}