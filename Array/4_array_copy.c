/*  Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], arr1[20];
   printf("Input the number of elements to be stored in the array: ");
   scanf("%d", &n);

   printf("Input %d elements in the array:\n", n);

   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("\nThe elements stored in the first array are: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\nThe elements stored into the second array are: ");
   for(i = 0; i < n; i++)
   {
      arr1[i] = arr[i];
      printf("%d ", arr1[i]);
   }
   //printf("\n\n");
}