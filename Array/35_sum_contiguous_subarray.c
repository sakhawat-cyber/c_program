/* Write a program in C to find the largest sum of contiguous subarray of an array.
Expected Output :
The given array is : 8 3 8 -5 4 3 -4 3 5
The largest sum of contiguous subarray is : 21 */

#include<stdio.h>
int subArray(int *arr1, int n1)
{
   int i, j, k, add, add_heigh = 0;
   for(i = 0; i < n1; i++)
   {
      for(j = i; j < n1; j++)
      {
         add = 0;
         for(k = i; k < j; k++)
         {
            add = add + arr1[k];
         }
         if(add > add_heigh)
            add_heigh = add;
      }
   }
   return add_heigh;
}
int main()
{
   int n, i, arr[20];
   printf("Input the size of array: ");
   scanf("%d", &n);
   printf("\nInput the number of given array: ");
   for(i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("\nThe given array: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("The largest sum of contiguous\nsubarray is: %d", subArray(arr, n));
   return 0;
}