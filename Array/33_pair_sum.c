/* Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5 */

#include<stdio.h>

void checkSum(int arr[], int n1, int add)
{
   int i, j;
   //read upto the last element - 1
   for(i = 0; i < n1 - 1; i++)
   {
      //read i'th element to last element
      for(j = i + 1; j < n1; j++)
      {
         //if given sum is found
         {
            if(arr[i] + arr[j] == add)
            {
               printf("\nPair of element can make the given sum by the value of index %d and %d", i, j);
               return;
            }
         }
      }
   }
   printf("\nNo pair can make the given sum.");
}

int main()
{
   int i, arr[20], sum = 15, n = 6;

   printf("Input number of given array: ");
   for(i = 0; i < n - 1; i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("The given array: ");
   int num = sizeof(arr) / sizeof(arr[0]);
   for(i = 0; i < n - 1; i++)
   {
      printf("%d ",arr[i]);
   }

   checkSum(arr, num, sum);
   return 0;
}