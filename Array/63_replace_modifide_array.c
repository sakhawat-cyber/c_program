/*  Write a program in C to replace every element with the greatest element on its right side.
Expected Output :
The given array is : 7 5 8 9 6 8 5 7 4 6
After replace the modified array is: 9 9 9 8 8 7 7 6 6 0 */

#include<stdio.h>
void PrintArray(int a[], int n)
{
   int i;
   for(i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }
}

void ReplaceNextGreatest(int *arr, int arr_size)
{
   int maximum = arr[arr_size - 1], i;
   arr[arr_size - 1] = 0;
   for(i = arr_size - 2; i >= 0; i--)
   {
      int temp = arr[i];
      arr[i] = maximum;
      
      if(maximum < temp)
         maximum = temp;
   }
   printf("After replace the modified array is: ");
   PrintArray(arr, arr_size);
}
int main()
{
   int arr[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");

   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   ReplaceNextGreatest(arr, num);
   return 0;
}