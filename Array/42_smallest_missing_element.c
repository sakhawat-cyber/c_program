/* Write a program in C to find the smallest missing element from a sorted array. Go to the editor
Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2 */

#include <stdio.h>
int missingSmallElement(int arr1[], int low_index, int heigh_index)
{
   if (low_index > heigh_index)
      return low_index;
   int mid_index = low_index + (heigh_index - low_index) / 2;
   //the mismatch on the right half
   if (arr1[mid_index] == mid_index)
      return (arr1, mid_index + 1, heigh_index);
   //the mismatch on the left half
   else
      return missingSmallElement(arr1, low_index, mid_index - 1);
}

int main()
{
   int arr[] = {0, 1, 3, 4, 5, 6, 7, 9}, num, i,
       low_index = 0, heigh_index = num - 1;

   printf("The given array: ");
   num = sizeof(arr) / sizeof(arr[0]);
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");

   printf("The missing smallest element is: %d", missingSmallElement(arr, low_index, heigh_index));
   return 0;
}