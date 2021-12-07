/* Write a program in C to convert a decimal number to hexadecimal.
Test Data :
Input any Decimal number: 79
Expected Output :
The equivalent Hexadecimal Number : 4F */

#include<stdio.h>
int main()
{
   int n, n1, i, j, p, dec = 0;
   char d;
   printf("Input any Decimal number: ");
   scanf("%d", &n);

   n1 = n;
   for(i = n; i > 0; i = i / 16)
   {
      p = i % 16;
      if(p < 10)
         p = p + 48;
      else
         p = p + 55;
      
      dec = dec * 100 + p;
   }
   printf("The equivalent hexadecimal Number: ");
   for(j = dec; j > 0; j = j / 100)
   {
      d = j % 100;
      printf("%c", d);
   }
}