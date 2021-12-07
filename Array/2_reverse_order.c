/* Write a program in C to read n number of values in an array and display it in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2 */

#include<stdio.h>
int main()
{
   int n, i, arr[20];
   printf("Input the  number of elements to store in the array: \n");
   scanf("%d", &n);

   for(i = 0; i < n; i++)
   {
      printf("element - %d: ",i);
      scanf("%d",&arr[i]);
   }

   printf("\nThe value store into the array: ");
   for(i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   printf("\nThe values store into the array in reverse are: ");
   for(i = n - 1; i >= 0; i--)
   {
      printf("%d ",arr[i]);
   }
   printf("\n\n");
}