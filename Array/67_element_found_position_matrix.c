/* Write a program in C to search an element in a row wise and column wise sorted matrix.
Expected Output :
The given array in matrix form is :
15 23 31 39
18 26 36 43
25 28 37 48
30 34 39 50
The given value for searching is: 37
The element Found at the position in the matrix is: 2, 2 */

#include<stdio.h>

int SearchElement(int arr[4][4], int size, int x)
{
   int i = 0, j = size - 1;  
   while(i < size && j >= 0)
   {
      if(arr[i][j] == x)
      {
         printf("\nThe element found at the position in the matrix is: %d, %d", i, j);
         return 1;
      }
      if(arr[i][j] < x)
         j--;
      else
         i++;
   }
   printf("\nThe given element not found in the 2d array.");
   return 0;
}

int main()
{
   int arr[4][4] = {
      {15, 23, 31, 39}, 
      {18, 26, 36, 43}, 
      {25, 28, 37, 48}, 
      {30, 34, 39, 50}
   }, i, j, k = 37;
   printf("The given array in matrix from is: \n");
   for(i = 0; i < 4; i++)
   {
      for(j = 0; j < 4; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   printf("The given value for searching is: %d", k);
   SearchElement(arr, 4, k);
   return 0;
}