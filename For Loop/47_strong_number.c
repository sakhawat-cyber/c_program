/* Write a C program to check whether a number is a Strong Number or not.
Test Data :
Input a number to check whether it is Strong number: 15
Expected Output :
15 is not a Strong number. */

#include<stdio.h>
int main()
{
   int n, temp, r, fact, i, sum = 0;
   printf("Input a number to check whether it is Strong number: ");
   scanf("%d", &n);

   temp = n;
   while(temp != 0)
   {
      r = temp % 10;
      fact = 1;
      for(i = 1; i <= r; i++)
      {
         fact = fact * i;
      }
      sum = sum + fact;
      temp = temp / 10;
   }
   if(sum == n)
      printf("%d is strong number.", n);
   else
      printf("%d is not strong number.", n);
}