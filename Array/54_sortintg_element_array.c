/* Write a program in C to sort an array of 0s, 1s and 2s.
Expected Output :
The given array is : 0 1 2 2 1 0 0 2 0 1 1 0
After sortig the elements in the array are:
0 0 0 0 0 1 1 1 1 2 2 2 */

#include<stdio.h>

void swap(int arr1[], int i, int j)
{
   int temp;
   temp = arr1[i];
   arr1[i] = arr1[j];
   arr1[j] = temp;
}

int Sort_element(int *arr, int end)
{
   int mid = 0, start = 0, pivot = 1; 
   while (mid <= end)
   {
      if(arr[mid] < pivot)
      {
         swap(arr, start, mid);
         ++start, ++mid;
      }
      else if(arr[mid] > pivot)
      {
         swap(arr, mid, end);
         --end;
      }
      else
         ++mid;
   }    
}

int main()
{
   int arr[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("After sorting the elements in the array are: ");
   Sort_element(arr, num - 1);
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}