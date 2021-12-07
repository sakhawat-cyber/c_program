/* Write a program in C to find the maximum and minimum element in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21 */ 

#include<stdio.h>
int main()
{
   int n, i, arr[20], max, min, num;
   printf("Input the number of element to be stored in the array: ");
   scanf("%d", &n);

   printf("Input %d elements in the array: \n", n);

   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d",&arr[i]);
   }

   max = arr[0];
   min = arr[0];

   for(i = 0; i < n; i++)
   {
      if(arr[i] > max)
      {
         max = arr[i];
         max++;
      }
      if(arr[i] < min)
      {
         min = arr[i];
         min++;
      }
   } 
   printf("\nMaximum number: %d", max);
   printf("\nMinimum number: %d", min);
}