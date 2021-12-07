/*  Write a program in C to count the number of triangles can be fromed from a given array.
Expected Output :
The given array is : 6 18 9 7 10
Number of possible triangles can be formed from the array is: 5 */

#include<stdio.h>
#include<stdlib.h>
int compare(const void* one, const void* two)
{
   return *(int*) one > *(int*) two;
}

int CountNumberTriangles(int *arr, int array_size)
{
   int num_tringle = 0, i, j, k;
   qsort(arr, array_size, sizeof(int), compare);
   for(i = 0; i < array_size - 2; ++i)
   {
      for(j = i + 1; j < array_size; ++j)
      {
         k = j + 1;
         while (k < array_size && (arr[i] + arr[j]) > arr[k])
         {
            k++;
         }
         num_tringle += k - j - 1;
      }
   }
   return num_tringle;
}

int main()
{
   int arr[] = {6, 18, 9, 7, 10}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("Number of possible triangles can be formed form the array is: %d", CountNumberTriangles(arr, num));
   return 0;
}