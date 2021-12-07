/* Write a program in C to return the minimum number of jumps to reach the end of the array.
Expected Output :
The given array is : 1 3 5 8 9 2 6 7 6 8 9 1 1 1
The minimum of number of jumps is required to reach the end is: 3 */

#include<stdio.h>
#include<limits.h>
int NumberOfJump(int *arr, int low, int high)
{
   int min = INT_MAX, jump, i;
   if(high == low)
      return 0;
   if(arr[low] == 0)
      return INT_MAX;
   
   for(i = low + 1; i <= high && i <= low + arr[low]; i++)
   {
      jump = NumberOfJump(arr, i, high);
      if(jump != INT_MAX && jump + 1 < min)
         min = jump + 1;
   }
   return min;
}

int main()
{
   int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9, 1, 1, 1}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("The minimum of number of jump is requird to reach the end is: %d", NumberOfJump(arr, 0, num - 1));
}