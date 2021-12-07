/* Write a program in C to find the median of two 
sorted arrays of same size. 

Expected Output :
The given array - 1 is : 1 5 13 24 35
The given array - 2 is : 3 8 15 17 32
The Median of the 2 sorted arrays is: 14 */

#include <stdio.h>
int max(int a, int b)
{
   return ((a > b) ? a : b);
}

int min(int a, int b)
{
   return ((a < b) ? a : b);
}

int median(int arr[], int size)
{
   if (size % 2 == 0)
      return (arr[size / 2] + arr[size / 2 - 1]) / 2;

   else
      return arr[size / 2];
}

int Madien2SortedArray(int *arr, int *arr1, int size)
{
   int mad, mad1;
   if (size <= 0)
      return -1;
   if (size == 1)
      return (arr[0] + arr1[0]) / 2;
   if (size == 2)
      return (max(arr[0], arr1[0]) + min(arr[1], arr1[1])) / 2;

   mad = median(arr, size);
   mad1 = median(arr1, size);

   if (mad == mad1)
      return mad;
   if (mad < mad1)
      return Madien2SortedArray(arr + size / 2, arr1, size - size / 2);
   else
      return Madien2SortedArray(arr1 + size / 2, arr, size - size / 2);
}

int main()
{
   int arr[] = {1, 5, 13, 24, 35}, num, i;
   int arr1[] = {3, 8, 15, 17, 32}, num1;

   num = sizeof(arr) / sizeof(arr[0]);
   num1 = sizeof(arr1) / sizeof(arr1[0]);

   printf("The given array - 1 is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("The given array - 2 is: ");
   for (i = 0; i < num1; i++)
   {
      printf("%d ", arr1[i]);
   }
   printf("\n");
   printf("The median of the %d sorted array is: %d", Madien2SortedArray(arr, arr1, num1));
   return 0;
}
