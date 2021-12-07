/* Write a program in C to find transpose of a given matrix.
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4 */

#include <stdio.h>
int main()
{
   int row, col, j, i, arr[20][20];
   printf("Input the rows and columns of the matrixs: ");
   scanf("%d%d", &row, &col);

   printf("Input enement in the first matrixs: \n");
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         printf("element - %d: ", i);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("The matrix: \n");
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }

   printf("\nThe transpose of a matrix: \n");
   for (i = 0; i < col; i++)
   {
      for (j = 0; j < row; j++)
      {
         printf("%d\t", arr[j][i]);
      }
      printf("\n");
   }

}