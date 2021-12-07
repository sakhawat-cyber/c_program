/* Write a program in C to find LCM of any two numbers.
Test Data :
Input 1st number for LCM: 15
Input 2nd number for LCM: 20
Expected Output :
The LCM of 15 and 20 is : 60 */

#include<stdio.h>
int main()
{
   int n1, n2, j, i, lcm = 1;
   printf("Input 1st number: ");
   scanf("%d", &n1);

   printf("Input 2nd number: ");
   scanf("%d", &n2);

   j = (n1 < n2) ? n1 : n2;

   for(i = j; ; i += j)
   {
      if(i % n1 == 0 && i % n2 == 0)
      {
         lcm = i;
         break;
      }
   }
   printf("LCM of %d and %d = %d", n1, n2, lcm);
}

