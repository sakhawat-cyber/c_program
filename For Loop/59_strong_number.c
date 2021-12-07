/* Write a program in C to check Armstrong number of n digits.
Test Data :
Input an integer : 1634
Expected Output :
1634 is an Armstrong number */

#include<stdio.h>
#include<math.h>
int main()
{
   int n, r, fact, sum = 0, i, n1 = 0;
   printf("Input an integer: ");
   scanf("%d", &n);

   int temp = n;
   while(temp != 0)
   {
      temp /= 10;
      ++n1;
   }
   temp = n;
   while(temp != 0)
   {
      r = temp % 10;
      sum += pow(r, n1);
      temp /= 10;
   } 
  
   if(sum == n)
      printf("%d is an strong number.", n);
   else
      printf("%d is not strong number.", n);
}