/*  Write a program in C to find the ceiling in a sorted array. Go to the editor
N.B.: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Expected Output :
The given array is : 1 3 4 7 8 9 9 10
The ceiling of 5 is: 7 */

#include<stdio.h>
int findCeiling(int arr1[], int low, int heigh, int x)
{
   int i;
   if(x <= arr1[low])
      return low;
   for(i = low; i < heigh; i++)
   {
      if(arr1[i] == x)
         return i;
      if(arr1[i] < x && arr1[i + 1] >= x)
      {
         return i + 1;
      }
   }
   return -1;
}

int main()
{
   int arr[] = {1, 3, 4, 7, 8, 9, 9, 10}, num, x = 5, i;
   num = sizeof(arr) / sizeof(arr[0]);
   
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }

   int index = findCeiling(arr, 0, num - 1, x);
   if(index ==  -1)
      printf("\nNo ciling for the number %d exists in array.\n", x);
   else
      printf("\nThe ceiling of %d is: %d", x, arr[index]);

}