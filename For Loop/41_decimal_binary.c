/*Write a program in C to convert a decimal number into binary without using an array.
Test Data :
Input a decimal number: 25
Binary number equivalent to said decimal number is: 0000000000000000000000000001 1001 */

#include<stdio.h>
#include<stdlib.h>
char *decimal_to_binary(int);
char *decimal_to_binary(int dn)
{
   int i, j, temp = 0;
   char *ptr;
   ptr = (char *)malloc(32 + 1);

   for(i = 31; i >= 0; i--)
   {
      j = dn >> i;
      if(j & 1)
         *(ptr + temp) = 1 + '0';
      else
         *(ptr + temp) = 0 + '0';
      temp++;
   }
   *(ptr + temp) = '\0';
   return ptr;
}

int main()
{
   int n;
   char *ptr;
   printf("Input a decimal number: ");
   scanf("%d", &n);

   ptr = decimal_to_binary(n);
   printf("Binary number equivalent to said decimal number is: %s", ptr);
   free (ptr);
   return 0;
}