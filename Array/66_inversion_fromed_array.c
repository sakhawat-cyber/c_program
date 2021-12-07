/* Write a program in C to count the number of inversion in a given array.
Expected Output :
The given array is : 1 9 6 4 5
The inversions are: (9, 6) (9, 4) (9, 5) (6, 4) (6, 5)
The number of inversion can be formed from the array is: 5 */

#include<stdio.h>
int InversionCount(int *arr, int size)
{
   int inv_count = 0, i, j;
   printf("\nThe inversion are: ");
   for(i = 0; i < size - 1; i++)
   {
      for(j = i + 1; j < size; j++)
      if(arr[i] > arr[j])
      {
         printf("(%d, %d) ", arr[i], arr[j]);
         inv_count++;
      }
   }

   return inv_count;
}

int main()
{
   int arr[] = {1, 9, 6, 4, 5}, i, num;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("\nThe number of inversion can be formed from the array: %d", InversionCount(arr, num));
   return 0;
}