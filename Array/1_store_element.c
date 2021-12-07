/* Write a program in C to store elements in an array and print it.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9 */

#include<stdio.h>
int main()
{
   int arr[20], i;
   //printf("")
   printf("Input 10 element in the array: \n");
   for(i = 0; i < 10; i++)
   {
      printf("element - %d : ",i);
      scanf("%d",&arr[i]);
   }

   printf("Elementf in array are: ");
   for(i = 0; i < 10; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}