/* Write a program in C to find the maximum circular subarray sum of a given array.
Expected Output :
The given array is : 10 8 -20 5 -3 -5 10 -13 11
The maximum circular sum in the above array is: 29 */

#include<stdio.h>
int kadane (int arr[], int n1);
int Sum_maximum_circular(int *arr, int n)
{
   int maxKadaneSum = kadane(arr, n);
   int i, max_warp = 0;
   for(i = 0; i < n; i++)
   {
      max_warp += arr[i];
      arr[i] = -arr[i];
   }
   max_warp = max_warp + kadane(arr, n);
   return (max_warp > maxKadaneSum) ? max_warp : maxKadaneSum;
}

int kadane (int arr[], int n1)
{
   int max_up = 0, max_pos = 0, i;
   for(i = 0; i < n1; i++)
   {
      max_pos = max_pos + arr[i];
      if(max_pos < 0)
         max_pos = 0;
      if(max_up < max_pos)
         max_up = max_pos;
   }
   return max_up;
}

int main()
{
   int arr[] = {10, 8, -20, 5, -3, -5, 10, -13, 11}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("The maximum circular sum in the above array is: %d\n", Sum_maximum_circular(arr, num));
   return 0;
}