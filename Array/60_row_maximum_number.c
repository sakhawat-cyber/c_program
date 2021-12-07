/* Write a program in C to find the row with maximum 
number of 1s.
Expected Output :
The given 2D array is :
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The index of row with maximum 1s is: 1 */

#include <stdio.h>
#define row 5
#define col 5
int GetFirstOccur(int *arr, int low, int heigh)
{
   int mid;
   if (heigh > low)
   {
      mid = low + (heigh - low) / 2;
      if ((mid == 0 || arr[mid - 1] == 0) && arr[mid] == 1)
         return mid;
      else if (arr[mid] == 0)
         return GetFirstOccur(arr, (mid + 1), heigh);
      else
         return GetFirstOccur(arr, low, (mid - 1));
   }
   return -1;
}

int FindRowMaxOne(int arr[row][col])
{
   int max_row_index = 0, max = -1;
   int i, index;
   for (i = 0; i < 5; i++)
   {
      index = GetFirstOccur(arr[i], 0, 5 - 1);
      if (index != -1 && 5 - index > max)
      {
         max = 5 - index;
         max_row_index = i;
      }
   }
   return max_row_index;
}

int main()
{
   int i, j;
   int arr[row][col] = {
       {0, 1, 0, 1, 1},
       {1, 1, 1, 1, 1},
       {1, 0, 0, 1, 0},
       {0, 0, 0, 0, 0},
       {1, 0, 0, 0, 1}};
   printf("The given 2D array is: \n");
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   printf("The index of row with maximum 1s is: %d", FindRowMaxOne(arr));
}