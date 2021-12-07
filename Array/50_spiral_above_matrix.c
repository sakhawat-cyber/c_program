/* Write a program in C to print a matrix in spiral
form.
Expected Output :
The given array in matrix form is :
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
The spiral form of above matrix is:
1 2 3 4 5 10 15 20 19 18
17 16 11 6 7 8 9 14 13 12 */

#include <stdio.h>
#define row 4
#define col 5

void SpiralAboveMatrix(int r, int c, int arr[row][col])
{
   int i, r1 = 0, c1 = 0;
   while (r1 < r && c1 < c)
   {
      for (i = c1; i < c; ++i)
      {
         printf("%d ", arr[r1][i]);
      }
      r1++;
      for (i = r1; i < r; ++i)
      {
         printf("%d ", arr[i][c - 1]);
      }
      c--;
      if (r1 < r)
      {
         for (i = c - 1; i >= c1; --i)
         {
            printf("%d ", arr[r - 1][i]);
         }
         r--;
      }
      if (c1 < c)
      {
         for (i = r - 1; i >= r1; --i)
         {
            printf("%d ", arr[i][c1]);
         }
         c1++;
      }
   }
}

int main()
{
   int arr[row][col] = {
       {1, 2, 3, 4, 5},
       {6, 7, 8, 9, 10},
       {11, 12, 13, 14, 15},
       {16, 17, 18, 19, 20}},
       i, j;

   printf("The given array in matrix from: \n");
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         printf("%4d", arr[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   printf("The spiral form of above matrix is: ");
   SpiralAboveMatrix(row, col, arr);
   return 0;
}
