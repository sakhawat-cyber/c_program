/* Write a program in C to convert an octal number to a decimal without using an array.
Test Data :
Input an octal number (using digit 0 - 7) :745
Expected Output :
The Octal Number : 745
The equivalent Decimal Number : 485 */

#include<stdio.h>
int main()
{
   int n, n5, k, ch = 1, i, j = 1, d, p = 1, dec = 0;
   printf("Input an octal number: ");
   scanf("%d", &n);

   printf("The octal number: %d", n);
   n5 = n;
   for(; n > 0; n = n / 10)
   {
      k = n % 10;
      if(k >= 8)
      {
         ch = 0;
      }
   }
   switch(ch)
   {
      case 0:
         printf("\nThe number is not octal number.");
         break;
      case 1:
         n = n5;
         for(i = n; i > 0; i = i / 10)
         {
            d = i % 10;
            if(j == 1)
               p = p * 1;
            else
               p = p * 8;
            dec = dec + (d * p);
            j++;
         }
          printf("\nThe equivalent Decimal Number: %d", dec);
          break;
   }
}