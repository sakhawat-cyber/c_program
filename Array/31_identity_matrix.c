/* Write a program in C to check whether a given matrix is an identity matrix.
Test Data :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix. */

#include<stdio.h>
int main()
{
   int row, col, arr[20][20], i, j, num = 0;
   printf("Input number of rows for the matrix: ");
   scanf("%d", &row);

   printf("Input number of columns for the matrix: ");
   scanf("%d", &col);

   printf("Input elements in the first matrix: \n");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++ )
      {
         printf("element - [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("The matrix is: \n");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++ )
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }

   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++ )
      {
         if(arr[i][j] != 1 && arr[i][j] != 0)
         {
            num = 0;
            break;
         }
      }
   }

   if(num == 1)
      printf("The matrix is an identity matrix.\n\n");
   else  
      printf("The matrix is not an identity matrix.\n\n");
}