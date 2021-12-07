/* Write a program in C to find minimum element in a sorted and rotated array.
Expected Output :
The given array is : 3 4 5 6 7 9 2
The minimum element in the above array is: 2 */

#include<stdio.h>
int FindMinimum(int *arr, int start, int end)
{
   int mid = (start + end) / 2;
   if(start == end)
      return arr[start];
      
   if(arr[start] > arr[mid])
      return FindMinimum(arr, start, mid);

   else
      if(arr[mid] > arr[end])
         return FindMinimum(arr, mid + 1, end);
      else
         return arr[start];
}
int main()
{
   int arr[] = {3, 4, 5, 6, 7, 9, 2}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   int min = FindMinimum(arr, 0, num - 1);
   printf("The minimum element in the above array is: %d", min);
   return 0;  
}