/* Write a program in C to move all zeroes to the end of a given array. 
Expected Output :
The given array is : 2 5 7 0 4 0 7 -5 8 0
The new array is:
2 5 7 8 4 -5 7 0 0 0 */

#include <stdio.h>

void PickOutZeroes(int *arr, int array_size)
{
   int right = array_size - 1, left = 0, temp;
   while (right > left)
   {
      while (arr[left] != 0)
         left++;

      while (arr[right] == 0)
         right--;

      if (left < right)
      {  
         temp = arr[left];
         arr[left] = arr[right];
         arr[right] = temp;
      }
   }
}

int main()
{
   int arr[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
   int num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   PickOutZeroes(arr, num);
   printf("The new array is: \n");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}