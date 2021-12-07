/* Write a program in C to convert a decimal number into octal without using an array.
Test Data :
Enter a number to convert : 79
Expected Output :
The Octal of 79 is 117. */

#include<stdio.h>
int main()
{
   int n, i, j, oct = 0;
   printf("Enter a number to convert: ");
   scanf("%d", &n);

   int ln = n;
   i = 1;
   for(j = n; j > 0; j = j / 8)
   {
      oct = oct + (j % 8) * i;
      i = i * 10;
      n = n / 8;
   }
   printf("The Octal of %d is %d", ln, oct);
}