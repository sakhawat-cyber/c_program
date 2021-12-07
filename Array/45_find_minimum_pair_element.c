/* Write a program in C to find two
elements whose sum is
closest to zero. 
Expected Output :
The given array is : 38 44 63 -51 -35
19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46] */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findPairElement(int *arr, int arr_size)
{
   int i, j, min_sum, min1_pair, min2_pair, sum;
   
   if (arr == NULL || arr_size < 2)
      return;
   min1_pair = arr[0];
   min2_pair = arr[1];
   min_sum = min1_pair + min2_pair;

   for (i = 0; i < arr_size - 1; i++)
   {
      for (j = i + 1; j < arr_size; j++)
      {
         sum = arr[i] + arr[j];
         if (abs(sum) < abs(min_sum))
         {
            min_sum = sum;
            min1_pair = arr[i];
            min2_pair = arr[j];
         }
      }
   }
   printf("[%d, %d]\n", min1_pair, min2_pair);
}

int main()
{
   int arr[] = {38, 44, 63, -55, -35,
                19, 84, -69, 4, -46},
       i, num;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("\nThe pair of elements who sum is minimum are: \n");
   findPairElement(arr, num);
   return 0;
}