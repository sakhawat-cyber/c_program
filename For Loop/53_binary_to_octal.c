/* Write a program in C to convert a binary number to octal.
Test Data :
Input a binary number :1001
Expected Output :
The Binary Number : 1001
The equivalent Octal Number : 11 */

#include<stdio.h>
int main()
{
   int n, n1, i, d, j = 1, p = 1, dec = 0, n2, oct = 0;
   printf("Input a binary number: ");
   scanf("%d",&n);

   printf("The Binary number: %d", n);
   n1 = n;
   for(i = n; i > 0; i = i / 10)
   {
      d = i % 10;
      if(j == 1)
         p = p * 1;
      else
         p = p * 2;

      dec = dec + (d * p);
      j++;
   }
   n2 = dec;
   j = 1;
   for(i = dec; i > 0; i = i / 8)
   {
      oct = oct + (i % 8) *j;
      j = j * 10;
      n = n / 8;
   }
   printf("\nThe equivalent Octal Number: %d", oct);
}