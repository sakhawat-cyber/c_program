/*  Write a program in C to delete an element at desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5 */

#include<stdio.h>
int main()
{
   int n, i, de, arr[20], num;
   printf("Input the size of array: ");
   scanf("%d", &n);

   printf("Input %d elements in the array in ascending order: \n");
   for(i  = 0; i < n; i++)
   { 
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("Input the position where to delete: ");
   scanf("%d", &de);

   /* locate the position of i in the array*/
   i = 0; 
   while(i != de - 1)
      i++;
   
   /* the position of i in the array will be 
   replacd by the value of its right */
   while(i < n)
   {
      arr[i] = arr[i + 1];
      i++;
   }
   n--;

   printf("\nThe new list is: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n\n");
}