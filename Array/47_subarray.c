/* Write a program in C to find a subarray with given sum from the given array.
Expected Output :
The given array is : 3 4 -7 1 3 3 1 -4
[0..1] -- { 3 4 }
[0..5] -- { 3 4 -7 1 3 3 }
[3..5] -- { 1 3 3 }
[4..6] -- { 3 3 1 } */

#include<stdio.h>

void print(int arr1[], int i, int j)
{
   printf("[%d %d] -- { ", i, j);
   for(int k = i; k <= j; k++)
   {
      printf("%d ", arr1[k]);
   }
   printf("}\n");
}

void pickSubarrayFromArray(int arr2[], int n, int sum1)
{
   for(int i = 0; i < n; i++)
   {
      int sum_upto = 0;
      for(int j = i; j < n; j++)
      {
         sum_upto += arr2[j];
         if(sum_upto == sum1)  
         {
            print(arr2, i, j);
         }
      }
   }
}

int main()
{
   int arr[] = {3, 4, -7, 1, 3, 3, 1, -4}, i, num;
   int sum = 7;
   num = sizeof(arr) / sizeof(arr[0]);
     
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   pickSubarrayFromArray(arr, num, sum);
   return 0;
}