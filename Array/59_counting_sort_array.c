/* Write a program in C to return the counting sort on an array. Go to the editor
Expected Output :
The given array is : 4 14 8 0 2 5 2 1 0 17 9 0 5
After sorting the elements in the array are: 0 0 0 1 2 2 4 5 5 8 9 14 17 */

#include <stdio.h>

int CountingSort(int *arr, int n, int max)
{
   int i, j, count[50] = {0};
   for (i = 0; i < n; ++i)
      count[arr[i]] = count[arr[i]] + 1;

   printf("After sorting the elements in the array are: ");
   for (i = 0; i <= max; ++i)
      for (j = 1; j <= count[i]; ++j)
         printf("%d ", i);
}

int main()
{
   int arr[] = {4, 14, 8, 0, 2, 5, 2, 1, 0, 17, 9, 0, 5};
   int num, i, max = 0;

   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      if (arr[i] > max)
         max = arr[i];
      printf("%d ", arr[i]);
   }
   printf("\n");
   CountingSort(arr, num, max);
   return 0;
}