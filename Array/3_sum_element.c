/* Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], sum = 0;
   printf("Input the number of element to be stored in the array: ");
   scanf("%d", &n);

   printf("\nInput %d elements in the array:\n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d",&arr[i]);
   }
   printf("\nSum of all elements stored in the array: ");
   for(i = 0; i < n; i++)
   {
      sum = sum + arr[i];
   }
   printf("%d",sum);
}