/* Write a program in C to find the median of two sorted arrays of different size.
Expected Output:
The given first array is : 90 240 300
The given second array is : 10 13 14 20 25
The median of two different size arrays are : 22.500000 */

#include <stdio.h>
int max(int a, int b);
int min(int a, int b);

double MedianDifferentSortArray(int *arr, int num, int *arr1, int num1)
{
   int index_min = 0, index_max = num, i, j, median;
   while (index_min <= index_max)
   {
      i = (index_min + index_max) / 2;
      j = ((num + num1 + 1) / 2) - i;

      if (i < num && j > 0 && arr1[j - 1] > arr[i])
         index_min = i + 1;

      else if (i > 0 && j < num1 && arr1[j] < arr[i - 1])
         index_max = i - 1;

      else
      {
         if (i == 0)
            median = arr1[j - 1];

         else if (j == 0)
            median = arr[i - 1];

         else
            median = max(arr[i - 1], arr1[j - 1]);
         break;
      }
   }
   if ((num + num1) % 2 == 1)
      return (double)median;
   if (i == num)
      return (median + arr1[j]) / 2.0;
   if (j == num1)
      return (median + arr[i]) / 2.0;

   return (median + min(arr[i], arr1[j])) / 2.0;
}

int max(int a, int b)
{
   return a > b ? a : b;
}

int min(int a, int b)
{
   return a < b ? a : b;
}

int main()
{
   int arr[] = {90, 240, 300}, num, i, num1;
   int arr1[] = {10, 13, 14, 20, 25};
   num = sizeof(arr) / sizeof(arr[0]);
   num1 = sizeof(arr1) / sizeof(arr1[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\nThe given second array is: ");
   for (i = 0; i < num1; i++)
   {
      printf("%d ", arr1[i]);
   }

   if (num < num1)
      printf("\nThe median of two different size arrays are: %f", MedianDifferentSortArray(arr, num, arr1, num1));
   else
      printf("\nThe median of two different size arrays are: %f", MedianDifferentSortArray(arr1, num1, arr, num));

   return 0;
}