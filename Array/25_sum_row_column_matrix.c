/* Write a program in C to find sum of rows an columns of a Matrix.
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6 11
7 8 15

12 14 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20][20], sumRow[20], sumColumn[20];
   printf("Input the size of the aquare matrix: ");
   scanf("%d", &n);

   printf("Input elements in the first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - %d: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("The first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }

   printf("The sum rows and columns of the matrix: \n");
   //sum of row
   for(i = 0; i < n; i++)
   {
      sumRow[i] = 0;
      for(j = 0; j < n; j++)
      {
         sumRow[i] += arr[i][j];
      }
   }

   //sum of column
   for(i = 0; i < n; i++)
   {
      sumColumn[i] = 0;
      for(j = 0; j < n; j++)
      {
         sumColumn[i] += arr[j][i];
      }
   }

   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
        printf("%d\t", arr[i][j]);
      }
      printf("%d\t", sumRow[i]);
      printf("\n");
   }
   printf("\n");
   for(j = 0; j < n; j++)
   {
      printf("%d\t", sumColumn[j]);
   }
   printf("\n\n");
}