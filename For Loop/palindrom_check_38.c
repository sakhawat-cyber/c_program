/* Write a program in C to check 
whether a number is a palindrome or not.
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number. */

#include<stdio.h>
int main()
{
   int n, temp, r, sum = 0;
   printf("Input a number: ");
   scanf("%d", &n);

   temp = n;
   while( n != 0)
   {
      r = n % 10;
      sum = sum * 10 + r;
      n = n / 10;
      //temp = temp / 10;
   }
   //printf("%d\n", sum);
   if(temp == sum)
      printf("%d is a palindrom number.", temp);

   else 
      printf("This is not a palindrom number.");
}