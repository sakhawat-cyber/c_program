/*  Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array.
Expected Output :
The given array is : 1 3 5 7 8 9
Number: 0 ceiling is: 1 floor is: -1
Number: 1 ceiling is: 1 floor is: 1
Number: 2 ceiling is: 3 floor is: 1
Number: 3 ceiling is: 3 floor is: 3
Number: 4 ceiling is: 5 floor is: 3
Number: 5 ceiling is: 5 floor is: 5
Number: 6 ceiling is: 7 floor is: 5
Number: 7 ceiling is: 7 floor is: 7
Number: 8 ceiling is: 8 floor is: 8
Number: 9 ceiling is: 9 floor is: 9
Number: 10 ceiling is: -1 floor is: 9 */

#include <stdio.h>

int FindCeile(int arr1[], int n, int x)
{
   int low, heigh = n - 1, mid, ceil = -1;
   while(low <= heigh)
   {
      mid = (low + heigh) / 2;
      if(arr1[mid] == x)
         return arr1[mid];
      else if (x < arr1[mid])
      {
         ceil = arr1[mid];
         heigh = mid - 1;
      }
      else
         low = mid + 1;
   }
   return ceil;
}

int FindFloor(int arr2[], int n1, int x1)
{
   int low1, heigh1 = n1 - 1, mid1, floor = -1;
   while(low1 <= heigh1)
   {
      mid1 = (low1 + heigh1) / 2;
      if(arr2[mid1] == x1)
         return arr2[mid1];
      else if(x1 < arr2[mid1])
         heigh1 = mid1 - 1;
      else
      {
         floor = arr2[mid1];
         low1 = mid1 + 1;
      }
   }
   return floor;
}
int main()
{
   int arr[] = {1, 3, 5, 7, 8, 9}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   for (i = 0; i <= 10; i++)
   {
      printf("Number: %d\t", i);
      printf("Ceiling is: %d\t", FindCeile(arr, num, i));
      printf("floor is: %d\n", FindFloor(arr, num, i));
   }
   return 0;
}