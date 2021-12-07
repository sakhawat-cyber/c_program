/*  Write a program in C to find the smallest positive number missing from an unsorted array.
Expected Output :
The given array is : 3 1 4 10 -5 15 2 -10 -20
The smallest positive number missed is: 5 */

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b; 
   *b = temp;
}

int smallPosNum (int *arr, int arr_size)
{
   int i, j = 0;
   for(i = 0; i < arr_size; i++)
   {
      if(arr[i] <= 0)
      {
         swap(&arr[i], &arr[j]);
         j++;
      }
   }
   return j;
}

int getMissPosNum(int *arr, int arr_size1)
{
   int i;
   for(i = 0; i < arr_size1; i++)     
   {
      if(abs(arr[i]) - 1 < arr_size1 && arr[abs(arr[i]) - 1] > 0)
         arr[abs(arr[i]) - 1] = - arr[abs(arr[i]) - 1];
   }
   for(i = 0; i < arr_size1; i++)
   {
      if(arr[i] > 0)
      // 1 is added becuase indexes start from 0
         return i + 1;
      return arr_size1 + 1;
   }
}

int GetMisPosNum(int *arr, int arr_size2)
{
   int shift = smallPosNum(arr, arr_size2);
   return getMissPosNum(arr + shift, arr_size2 - shift);
}

int main()
{
   int arr[] = {3, 1, 4, 10, -5, 15, 2, -10, -20}, i, num;
   num = sizeof(arr) / sizeof(arr[0]); 
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\n");
   int miss_num = GetMisPosNum(arr, num);
   printf("The smalest positive number missed is: %d", miss_num);
   getchar();
   return 0;
}