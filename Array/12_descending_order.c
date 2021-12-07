/* Write a program in C to sort elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20], temp;
   printf("Input the array size: ");
   scanf("%d", &n);

   printf("Input %d element in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   for(i = 0; i < n; i++)
   {
      for(j = i + 1; j < n; j++)
      {
         if(arr[j] > arr[i])
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   printf("Elements of the array sorted descending order: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n\n");
}