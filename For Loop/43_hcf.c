/* Write a C program to find HCF (Highest Common Factor) of two numbers.
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4 */

#include<stdio.h>
int main()
{
   int n1, n2, i, j, hcf = 1;
   printf("Input 1st number for HCF: ");
   scanf("%d", &n1);

   printf("Input 2nd number: ");
   scanf("%d", &n2);

   j = (n1 < n2) ? n1 : n2;
   
   for(i = 1; i <= j; i++)
   {
      if(n1 % i == 0 && n2 % i == 0)
      {
         hcf = i;
      }
   }
   printf("HCF of %d and %d is: %d", n1, n2, hcf);
}