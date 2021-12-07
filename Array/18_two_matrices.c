/* Write a program in C for a 2D array of size 3x3 and print the matrix.
Test Data :
Input elements in the matrix :
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
7 8 9 */

#include<stdio.h>
int main()
{
   int n, i, arr[20][20], j;
   printf("Input the size of the square matrix (less than 5): ");
   scanf("%d", &n);

   printf("Input element in the  matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - [%d],[%d]: ", i, j);
         scanf("%d",&arr[i][j]);
      }
   }

   printf("\nThe matrix is: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
  
}