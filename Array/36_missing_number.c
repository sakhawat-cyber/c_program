/* Write a program in C to find the missing number from a given array. There are no duplicates in list.
Expected Output :
The given array is : 1 3 4 2 5 6 9 8
The missing number is : 7 */

#include<stdio.h>
int missing_number(int arr1[], int num)
{
   int i, sum = 0, n = num + 1;
   for(i = 0; i < num; i++)
   {
      sum = sum + arr1[i];
   }
   return (n * (n + 1)) / 2 - sum;

}

int main()
{
   int arr[] = {1, 3, 4, 2, 5, 6, 9, 8}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\nThe missing number is: %d ", missing_number(arr, num));
}