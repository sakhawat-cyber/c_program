/* Write a program in C to return maximum sum such that no two elements are adjacent.
Expected Output :
The given array is : 1 3 5 9 7 10 1 10 100
The maximum sum from the array such that no two elements are adjacent is: 122 */

#include<stdio.h>

int MaxSumSequence(int arr[], int size)
{
   int i, excl_new, incl = arr[0], excl = 0; 
   for(i = 1; i < size; i++)
   {
      excl_new = (incl > excl) ? incl : excl;
      incl = excl + arr[i];
      excl = excl_new;
   }
   return ((incl > excl) ? incl : excl);
}

int main()
{
   int arr[] = {1, 3, 5, 9, 7, 10, 1, 10, 100}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);  
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("The maximum sum from the array such that no two elements are adjacent is: %d", MaxSumSequence(arr, num));
   return 0;  
}