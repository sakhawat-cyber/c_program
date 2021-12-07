/* Write a program in C to convert a binary number into a decimal number using math function.
Test Data :
Input the binary number :1010100
Expected Output :
The Binary Number : 1010100
The equivalent Decimal Number is : 84 */

#include<stdio.h>
#include<math.h>
int main()
{
   int n, d, dec = 0, i = 0;
   printf("Input the binary number: ");
   scanf("%d", &n);
   
   while(n != 0)
   {
      d = n % 10;
      dec = dec + d * pow(2, i);
      n = n / 10;
      i++;
   }
   printf("The binary number: %d", n);
   printf("The equivalent Decinmal Number is: %d", dec);
}