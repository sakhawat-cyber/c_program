/* Write a C program to find the length of a string without using the library function
Test Data :
Input a string : welcome
Expected Output :
The string contains 7 number of characters.
So, the length of the string welcome is : 7 */

#include<stdio.h>
#include<string.h>
int main()
{
   char ctr[20];
   int len = 0, i = 0;

   printf("Input a string: ");
   gets(ctr);

   while(ctr[i] != '\0')
   {
      len ++;
      i++;
   }
   printf("The string contains %d number of characters\n", len);
   printf("So, the length of the string welcome is: %d", len);
}