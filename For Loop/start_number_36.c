/*  Write a program in C to display 
the such a pattern for n number of 
rows using a number which will 
start with the number 1 and the 
first and a last number of each 
row will be 1.

  1
 121
12321 */

#include<stdio.h>
int main()
{
   int n, row, col;
   printf("Input the number: ");
   scanf("%d", &n);

   for(row = 1; row <= n; row++)
   {
      for(col = 1; col <= n - row; col++)
      {
         printf(" ");
      }
      for(col = 1; col <= row; col++)
      {
         printf("%d", col);
      }
      for(col = row - 1; col >= 1; col--)
      {
         printf("%d", col);
      }
      printf("\n");
   }
}