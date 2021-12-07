/* Write a program in C to print or display upper triangular matrix.
Test Data :
Input the size of the square matrix : 3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :
1 2 3
4 5 6
7 8 9

Setting zero in upper triangular matrix

1 0 0
4 5 0
7 8 9 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20][20];
   printf("Input the size of the square matrix: ");
   scanf("%d", &n);

   printf("Input elements in the first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("\nThe first matrix is: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }

   printf("\nSetting zero in upper tringular matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         if(i >= j)
            printf("%d\t", arr[i][j]);
         else
            printf("%d\t", 0);
      }
      printf("\n");
   }
}