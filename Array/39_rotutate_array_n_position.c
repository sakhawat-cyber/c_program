/* Write a program in C to rotate an array by N positions.
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9 */

#include <stdio.h>
void ShiftArrayPosition(int *arr, int n)
{
   int i, temp = arr[0];
   for (i = 0; i < n - 1; i++)
   {
      arr[i] = arr[i + 1];
   }
   arr[i] = temp;
}

void ArrayRoutate(int *arr, int n, int num)
{
   int i;
   for (i = 0; i < num; i++)
   {
      ShiftArrayPosition(arr, n);
   }
   return;
}

int main()
{
   int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};

   int num = sizeof(arr) / sizeof(arr[0]), i;

   //print orginial array
   printf("The given array: \n");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }

   //from 4th position the value

   printf("\nFrom 4th position the value of the array are: \n");
   for (i = 4; i < num; i++)
   {
      printf("%d ", arr[i]);
   }

   //before 4th position the value

   printf("\nBefore 4th position the values of the array are: \n");
   for (i = 0; i < 4; i++)
   {
      printf("%d ", arr[i]);
   }

   //after the routing the array
   printf("\nAfter routating from  4th position the array is: \n");
   ArrayRoutate(arr, num, 4);
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
}