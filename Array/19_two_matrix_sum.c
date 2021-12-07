/* Write a program in C for addition of two Matrices of same size.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The Addition of two matrix is :

6 8
10 12 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20][20], arr1[20][20], sum = 0;
   printf("Input the size of the square matrix (less than 5): ");
   scanf("%d", &n);

   printf("Input element in the first matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - [%d],[%d]: ", i, j);
         scanf("%d", &arr[i][j]);
      }
      printf("\n");
   }
   printf("Input elements the in the second matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("element - [%d],[%d]: ", i, j);
         scanf("%d", &arr1[i][j]);
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

   printf("The second matrix: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         printf("%d\t", arr1[i][j]);
      }
      printf("\n");
   }

   printf("The addition of two matrix is: \n");
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
      {
         sum = arr[i][j] + arr1[i][j];
         printf("%d\t", sum);
      }
      printf("\n");
   }

}