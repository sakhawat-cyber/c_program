/* Write a program in C to accept two matrices and check whether they are equal.
Test Data :
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int row, col, row1, col1, arr[20][20], arr1[20][20], i, j, num = 1;
   printf("Input Rows and Columns of the 1st matrix: ");
   scanf("%d%d", &row, &col);

   printf("Input Rows and Columns of the 1st matrix: ");
   scanf("%d%d", &row1, &col1);

   printf("Input elements in the first matrix: \n");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < col; j++)
      {
         printf("element - [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("Input elements in the second matrix: \n");
   for(i = 0; i < row1; i++)
   {
      for(j = 0; j < col1; j++)
      {
         printf("element - [%d][%d]: ", i, j);
         scanf("%d", &arr1[i][j]);
      }
      printf("\n");
   }

   printf("\nThe first matrix is: \n");
   for(i = 0; i < row1; i++)
   {
      for(j = 0; j < col1; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
    printf("\nThe second matrix is: \n");
   for(i = 0; i < row1; i++)
   {
      for(j = 0; j < col1; j++)
      {
         printf("%d\t", arr1[i][j]);
      }
      printf("\n");
   }
   //Comparing two matrixs for equality
   if(row == row1 && col == col1)
   {
      printf("The matrixs can be compared: \n");
      for(i = 0; i < row; i++)
      {
         for(j = 0; j < col1; j++)
         {
            if(arr[i][j] != arr1[i][j])
            {
               num = 0;
               break;
            }
         }
      }
   }
   else
   {
      printf("The matrixs Cannot be compared: \n");
      exit(1);
   }
   if(num == 1)
      printf("Two matrix are equal.\n\n");
   else
       printf("But, Two matrix are not equal.\n\n");
}