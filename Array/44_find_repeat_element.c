/* Write a program in C to find the
two repeating elements in a
given array.
Expected Output :
The given array is : 2 7 4 7 8 3 4
The repeating elements are: 7 4 */
#include <stdio.h>

void findRepeatElement(int *arr, int arr_size)
{
   int i, j;
   printf("\nThe repeating element are: ");
   for (i = 0; i < arr_size; i++)
   {
      for (j = i + 1; j < arr_size; j++)
      {
         if (arr[i] == arr[j])
         {
            printf("%d ", arr[i]);
         }
      }
   }
}
int main()
{
   int arr[] = {2, 7, 4, 7, 8, 3, 4}, i, num;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   findRepeatElement(arr, num);
   return 0;
}