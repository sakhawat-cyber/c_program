/* Write a program in C to convert a binary number into a decimal number without using array, function and while loop.
Test Data :
Input a binary number :1010101
Expected Output :
The Binary Number : 1010101
The equivalent Decimal Number : 85 */

#include<stdio.h>
int main()
{
   int n, j, p = 1, dec = 0, i = 1, d;
   printf("Input binary number: ");
   scanf("%d", &n);

   for(j = n; j > 0; j = j / 10)
   {
      d = j % 10;
      if(i == 1)
         p = p * 1;
      else
         p = p * 2;

      dec = dec + (d * p);
      i++;
   }
   printf("The binary number: %d\n", n);
   printf("The equivalaent Decimal Number: %d", dec);
}