/* Write a program in C to find out the maximum difference between any two elements such that larger element appears after the smaller number.
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is: 8 */

#include<stdio.h>

int MaximumDifference(int *arr, int size)
{
   int i, min_element = arr[0], dif = arr[1] - arr[0]; 
   for(i = 1; i < size; i++)
   {
      if(arr[i] - min_element > dif)
      {
         dif = arr[i] - min_element;
          printf("\nThe elements which provide maximum difference is: %d %d", min_element, arr[i]);
      }
      if(arr[i] < min_element)
         min_element = arr[i];
   }
   return dif;
}

int main()
{
   int arr[] = {7, 9, 5, 6, 13, 2}, i, num;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\nThe maximum difference between two elements in the array is: %d", MaximumDifference(arr, num));
   getchar();
   return 0;
}