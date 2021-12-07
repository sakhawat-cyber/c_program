/* Write a C Program to display the pattern like pyramid using the alphabet. Go to the editor

        A
      A B A 
    A B C B A
  A B C D C B A */

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
      for(col = 1; col <=row; col++)
      {
         printf("%c",col + 64);
      }
      for(col = row - 1; col >= 1; col--)  
      {
         printf("%c",col + 64);
      }
      printf("\n");
   }
}