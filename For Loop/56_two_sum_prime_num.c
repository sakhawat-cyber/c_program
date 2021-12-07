/* Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers.
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11 */

#include<stdio.h>
int main()
{
   int n, temp1, temp2, i, j, ctr = 0;
   printf("Input a positive integer: ");
   scanf("%d", &n);

   for(i = 2; i <= n / 2; i++)
   {
      temp1 = i;
      temp2 = n - i;
      for(j = 2; j <= i / 2; j++)
      {
         if(i % j == 0)
         {
            ctr ++;
            break;
         }
      }
      if(ctr == 0)
      {
         for(j = 2; j <= (n - i) / 2; j++)
         {
            if((n - i) % j == 0)
            {
               ctr++;
               break;
            }
         }
         if(ctr == 0)
            printf("%d can be written as %d + %d.\n", n, i, n - i);
      }
      ctr = 0;
   }
   return 0;
}