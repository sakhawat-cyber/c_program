/* Write a program in C to find maximum product subarray in a given array.
Expected Output :
The given array is : -4 9 -7 0 -15 6 2 -3
The maximum product of a sub-array in the given array is: 540 */

#include <stdio.h>

int min(int p, int q)
{
   return (p < q) ? p : q;
}

int max(int p, int q)
{
   return (p > q) ? p : q;
}

int Max_product(int *arr, int n)
{
   int max_end = 0, min_end = 0, max_up = 0;
   int temp, i;
   for (i = 0; i < n; i++)
   {
      temp = max_end;
      max_end = max(arr[i], max(arr[i] * max_end, arr[i] * min_end));
      min_end = min(arr[i], min(arr[i] * temp, arr[i] * min_end));
      max_up = max(max_up, max_end);
   }
   return max_up;
}

int main()
{
   int arr[] = {-4, 9, -7, 0, -15, 6, 2, -3}, i, num;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("The given array: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("The maximum product of a sub array in the given array is: %d", Max_product(arr, num));
}