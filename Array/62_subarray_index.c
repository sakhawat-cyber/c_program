/* Write a program in C to find the largest subarray with equal number of 0s and 1s.
Expected Output :
The given array is : 0 1 0 0 1 1 0 1 1 1
Subarray found from the index 0 to 7 */

#include<stdio.h>
#include<limits.h>

void FindLargeSubarray(int *arr, int array_size)
{
   int i, j, sum = 0, large_size = INT_MIN, left;
   for(i = 0; i < array_size - 1; i++)
   {
      sum = arr[i] ? 1 : -1;
      for(j = i + 1; j < array_size; j++)
      {
         if(arr[j] == 1)
            sum += 1;
         else
            sum += -1;
         if(sum == 0 && (large_size < j - i + 1))
         {
            large_size = j - i + 1;
            left = i;
         }
      }
   }
   if(large_size == INT_MIN)
      printf("No such subarray found from the given array.");
   else
      printf("Subarray found from the index %d to %d", left, left + large_size - 1);
}
int main()
{
   int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 1, 1}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);   
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   FindLargeSubarray(arr, num);
}