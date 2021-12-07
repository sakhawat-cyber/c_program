/* Write a program in C to find sum of right diagonals of a matrix.Go to the editor
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the right Diagonal elements is :5 */

#include <stdio.h>
int main()
{
   int i, j, n, arr[20][20], sum = 0;
   printf("Input the size of the square matrix: ");
   scanf("%d", &n);

   printf("Input element in the first matrix: \n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("element - [%d],[%d]: ", i, j);
         scanf("%d", &arr[i][j]);
         if (i == j)
            sum = sum + arr[i][j];
      }
      printf("\n");
   }

   printf("The matrix is: \n");
   for (i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
   printf("Addition of the right diagonal element is: %d",sum);
}