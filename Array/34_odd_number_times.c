/* Write a program in C to find the number occurring odd number of times in an array.
All numbers occur even number of times except one number which occurs odd number of times.
Expected Output :
The given array is : 8 3 8 5 4 3 4 3 5
The element odd number of times is : 3 */

#include<stdio.h>
int find_odd_count_element(int *arr1, int n1)
{
   int i, odd = 0;
   for(i = 0; i < n1; i++)
   {
      odd = odd ^ arr1[i];
   }
   return odd;
}
int main()
{
   int arr[20], n = 9, i;
   printf("Input the number of given array: ");
   for(i = 0; i < n; i++)
   {
      scanf("%d",&arr[i]);
   }
   int num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("Number of add number occur(s): %d times.\n", find_odd_count_element(arr, n));
   return 0;
}