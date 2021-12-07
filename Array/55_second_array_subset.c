/*  Write a program in C to check whether an array is subset of another array.
Expected Output :
The given first array is : 4 8 7 11 6 9 5 0 2
The given second array is : 5 4 2 0 6
The second array is the subset of first array. */

#include<stdio.h>

int CheckSubsetArray(int *arr, int array_size, int *arr1, int array_size1)
{
  int i, j;
  for(i = 0; i < array_size1; i++)
   {
      for(j = 0; j < array_size; j++)
      {
         if(arr1[i] == arr[j])
            break;
      }
      if(j == array_size1)
         return 0; 
   }
   return 1;
}

int main()
{
   int arr[] = {4, 8, 7, 11, 6, 9, 5, 0, 2}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);

   int arr1[] = {5, 4, 2, 0, 6}, num1;
   num1 = sizeof(arr1) / sizeof(arr[0]);

   printf("The given first array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("\nThe given second array is: ");
   for(i = 0; i < num1; i++)
   {
      printf("%d ", arr1[i]);
   }
   printf("\n");  
   if(CheckSubsetArray(arr, 9, arr1, 4))
      printf("The second array is the subset of the first array: ");
   else
      printf("The second array is not the subset of the first array: ");
      return 0;
}