/*  Write a program in C to find the number of times (frequency) occurs a given number in an array. 
Expected Output :
The given array is : 2 3 4 4 4 4 5 5 5 6 7 7
The number of times the number 4 occurs in the given array is: 4 */

#include<stdio.h>
int BinSearch(int *arr, int n, int x, int SearchFirst)
{
   int low = 0, high = n - 1, result = -1, mid;
   while (low <= high)
   {
      mid = (low + high) / 2;
      if(x == arr[mid])
      {
         result = mid;
         if(SearchFirst)
            high = mid - 1;
         else
            low = mid + 1;
      }
      else if(x < arr[mid])
         high = mid - 1;
      else
         low = mid + 1;
   }
   return result;
}

int main()
{
   int arr[] = {2, 3, 4, 4, 4, 4, 5, 5, 5, 6, 7, 7}, num, i;
   int search_num = 4, first, last, n;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");  

   first = BinSearch(arr, num, search_num, 1);
   last = BinSearch(arr, num, search_num, 0);
   n = last - first + 1;

   if(first != -1)
      printf("The number of times the number %d occurs in the given array is: %d", search_num, n);
   else
      printf("No such element found in the array.");
   return 0;
}