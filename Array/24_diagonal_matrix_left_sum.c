/*  Write a program in C to find the sum of left diagonals of a matrix.
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
Addition of the left Diagonal elements is :5 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20][20], sum = 0, num = 0;
   printf("Input the size of the square matrix: ");
   scanf("%d", &n);

   num = n;
   printf("Input elements in the first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - [%d],[%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }

   printf("The matrix is: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr[i][i]);
      }
      printf("\n");
   }

   //Calculate the sum of left diagonals
   for(i = 0; i < n; i++)
   {
      num = num - 1;
      for(j = 0; j < n; j++)
      {
         if(j == num)
         {
            sum = sum + arr[i][j];
         }
      }
   }
   printf("\nAddition of the left Diagonal elements: %d", sum);
}