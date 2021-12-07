/* Write a program in C to convert an octal number into binary.
Test Data :
Input an octal number (using digit 0 - 7) :57
Expected Output :
The Octal Number : 57
The equivalent Binary Number : 101111 */

#include<stdio.h>
int main()
{
   int n, n1, d, i, j = 1, dec = 0, p = 1, bin = 0;
   printf("Input an octal number (using digit 0 - 7): ");
   scanf("%d", &n);

   printf("The octal number: %d", n);
   n1 = n;
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

   j = 1;
   for(i = dec; i > 0; i = i / 2)
   {
      bin = bin + (dec % 2) * j;
      j = j * 10;
      dec = dec / 2;
   } 
   printf("\nThe equivalent Binary Number: %d", bin);
}