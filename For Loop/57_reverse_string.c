/*  Write a program in C to print a string in reverse order.
Test Data :
Input a string to reverse : Welcome
Expected Output :
Reversed string is: emocleW */

#include<stdio.h>
int main()
{
   char ctr[20], ctr1[20];
   int i = 0, len = 0, j ;
   printf("Input a string to reverse: ");
   gets(ctr);

   while(ctr[i] != '\0')
   {
      len++;
      i++;
   }
   for(j = 0, i = len - 1; i >= 0; i--, j++)
   {
      ctr1[j] = ctr[i];
   }
   ctr1[j] = '\0';
   //printf("")
   printf("Reversed string is: %s", ctr1);
}