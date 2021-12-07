/* Write a program in C to merge one sorted array into another sorted array.
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given Large Array is : 10 12 14 16 18 20 22
The given Small Array is : 11 13 15 17 19 21
After merged the new Array is :
10 11 12 13 14 15 16 17 18 19 20 21 22 */

#include <stdio.h>

void margeArray(int *arr, int num, int *arr1, int num1)
{
   if (arr == NULL || arr1 == NULL)
      return;
   int ind = num - 1, ind1 = num1 - 1, ind2 = num + num1 - 1;

   while (ind >= 0 && ind1 >= 0)
   {
      if (arr[ind] >= arr1[ind1])
      {
         arr[ind2] = arr[ind];
         ind2--;
         ind--;
      }

      else
      {
         arr[ind2] = arr1[ind1];
         ind2--;
         ind1--;
      }
   }

   if (ind < 0)
   {
      while (ind1 >= 0)
      {
         arr[ind2] = arr1[ind1];
         ind2--;
         ind1--;
      }
   }

   else if (ind1 < 0)
   {
      while (ind >= 0)
      {
         arr[ind2] = arr[ind];
         ind2--;
         ind--;
      }
   }
}

int main()
{
   int arr[] = {10, 12, 14, 16, 18, 20, 22}, arr1[] = {11, 13, 15, 17, 19, 21}, i, num, num1;
   num = sizeof(arr) / sizeof(arr[0]);
   num1 = sizeof(arr1) / sizeof(arr1[0]);

   //print large array
   printf("The given large array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }

   //printf small array
   printf("\nThe given small array is: ");
   for (i = 0; i < num1; i++)
   {
      printf("%d ", arr1[i]);
   }

   //print merged array
   
   margeArray(arr, num, arr1, num1);
   printf("\nAfter merged the new array is: \n");
   for (i = 0; i < 13; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}