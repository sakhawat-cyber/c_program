/* Write a C program to find Strong Numbers within a range of numbers.
Test Data :
Input starting range of number : 1
Input ending range of number: 200
Expected Output :
The Strong numbers are :
1 2 145 */

#include<stdio.h>
int main()
{
   int n, n2, i, temp, fact, r, j, sum = 0;
   printf("Input starting range of number: ");
   scanf("%d", &n);

   printf("Input ending range of number: ");
   scanf("%d", &n2);

   printf("The strong number are: ");
   for(i = n; i <= n2; i++)
   {
      temp  = i;
      sum = 0;
      while(temp != 0)
      {
         r = temp % 10;
         fact = 1;
         for(j = 1; j <= r; j++)
         {
            fact = fact * j;
         }
         sum = sum + fact;
         temp = temp / 10;
      }
      if(sum == i)
      {
         printf("%d ", i);
      }
   }
}