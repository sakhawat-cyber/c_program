/* Write a program in C to sort elements of array in ascending order.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 7
element - 2 : 4
element - 3 : 5
element - 4 : 9
Expected Output :
Elements of array in sorted ascending order:
2 4 5 7 9 */

#include<stdio.h>
int main()
{
   int n, i, j, arr[20], temp;
   printf("Input size of array: ");
   scanf("%d", &n);
   printf("Input %d elements in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   for(i = 0; i < n; i++)
   {
      for(j = i + 1; j < n; j++)
      {
         if(arr[j] < arr[i])
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp; 
         }
      }
   }
   printf("Element of array in sorted ascending order: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}