/* Write a program in C to accept a matrix and determine whether it is a sparse matrix.
Test Data :
Input the number of rows of the matrix : 2
Input the number of columns of the matrix : 2
Input elements in the first matrix :
element - [0],[0] : 0
element - [0],[1] : 0
element - [1],[0] : 1
element - [1],[1] : 0
Expected Output :
The given matrix is sparse matrix.
There are 3 number of zeros in the matrix */

#include <stdio.h>
int main()
{
   int row, col, i, j, num = 0, n;
   static int arr[20][20];
   printf("Input the number of row of the matrix: ");
   scanf("%d", &row);

   printf("Input the number of columns or the matrix: ");
   scanf("%d", &col);

   printf("Input elements in the first matrix: \n");
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         printf("element - [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
         if(arr[i][j] == 0)
            ++num;
      }
      printf("\n");
   }

   if(num > ((row * col) / 2))
      printf("The given matrix is sparse matrix: \n");
   else
      printf("The given matrix is sparse matrix: \n");
   printf("There are %d number of zeros in the matrix.", num);
}