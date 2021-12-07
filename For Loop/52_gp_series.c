/* Write a program in c to find the Sum of GP series.
Test Data :
Input the first number of the G.P. series: 3
Input the number or terms in the G.P. series: 5
Input the common ratio of G.P. series: 2
Expected Output :
The numbers for the G.P. series:
3.000000 6.000000 12.000000 24.000000 48.000000
The Sum of the G.P. series : 93.000000 */

#include<stdio.h>
#include<math.h>
int main()
{
   float n, n1, n2, sum = 0, gp, j;
   printf("Input the first number of the G.P. series: ");
   scanf("%f", &n);
   
   printf("Input the number or terms in the G.P. series: ");
   scanf("%f", &n1);

   printf("Input the first number of the G.P. series: ");
   scanf("%f", &n2);

   printf("the number for the G.P. series: ");
   printf("%f ", n);
   sum = n;
   for(j = 1; j < n1; j++)
   {
      gp = n * pow (n2, j);
      sum = sum + gp;
      printf("%f ", gp);
   }
   printf("\nThe sum of the G.P. series: %f", sum);
}