/* Write a c program to find out the sum of an A.P. series.
Test Data :
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
Expected Output :
The Sum of the A.P. series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190 */

#include<stdio.h>
int main()
{
   int n, n1, n2, s1 = 0, ln, i;
   printf("Input the starting number of the A.P series: ");
   scanf("%d", &n);

   printf("Input the ending number of the A.P series: ");
   scanf("%d", &n1);

   printf("Input the common differint of the A.P series: ");
   scanf("%d", &n2);

   s1 = (n1 * (2 * n + (n1 - 1) * n2)) / 2;
   ln = n + (n1 - 1) * n2;

   printf("\nThe sum of the A.P series are: \n");
   for(i = n; i <= ln; i += n2)
   {
      if(i != ln)
         printf("%d + ", i);
      else
         printf("%d = %d\n\n", i, s1);
   }

}