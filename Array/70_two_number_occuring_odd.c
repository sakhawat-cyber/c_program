/*  Write a program in C to find two numbers that occur odd number of times in an array.
Expected Output:
The given array is: 6 7 3 6 8 7 6 8 3 3
The two numbers occuring odd number of times are: 3 & 6 */

#include<stdio.h>

void TwoNumberOddOccure(int arr[], int arr_size)
{
   int i, x_or = arr[0], set_bit_no, num = 0, num1 = 0;
   for(i = 1; i < arr_size; i++)
      x_or = x_or ^ arr[i];

   set_bit_no = x_or & ~(x_or - 1);

   for(i = 0; i < arr_size; i++)
   {
      if(arr[i] & set_bit_no)
         num = num ^ arr[i];
      else
         num1 = num1 ^ arr[i];
   }
   printf("The two number occuring odd number of times are: %d & %d ", num, num1);
}

int main()
{
   int arr[] = {6, 7, 3, 6, 8, 7, 6, 8, 3, 3}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   TwoNumberOddOccure(arr, num);
   //printf("The two numbers occuring odd number of times are: ");
}