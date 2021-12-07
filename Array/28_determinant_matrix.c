/* Write a program in C to calculate determinant of a 3 x 3 matrix.
Test Data :
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : -1
element - [1],[0] : 0
element - [1],[1] : 0
element - [1],[2] : 1
element - [2],[0] : -1
element - [2],[1] : -1
element - [2],[2] : 0
Expected Output :
The matrix is :
1 0 -1
0 0 1
-1 -1 0

The Determinant of the matrix is: 1 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20][20], determine = 0;
   printf("Input the size of the square matrix: ");
   scanf("%d", &n);

   printf("Input element in the first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("elements - [%d][%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }
   
   printf("\nThe first matrix is: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%4d\t", arr[i][j]);
      }
      printf("\n");
   }

   for(i = 0; i < n; i++)
   {
      determine = determine + (arr[0][i] * (arr[1][(i + 1) % n] * arr[2][(i + 2) % n] - arr[1][(i + 2) % n] * arr[2][(i + 1) % n]));
   }
   printf("\nThe Determain of the matrix is: %d\n", determine);
}