/* Write a program in C to display the number in reverse order.
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321 */

#include<stdio.h>
int main()
{
   int n, temp, r, sum = 0;
   printf("Input a number: ");
   scanf("%d", &n);
   
   temp = n;
   printf("The number in reverse order is: ");
   while(temp != 0)
   {
      r = temp % 10;
      sum = sum * 10 + r;
      temp = temp / 10;
   }
   printf("%d", sum);
}