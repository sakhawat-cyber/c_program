/* Write a program in C to find the second smallest element in an array. Go to the editor
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], small, position = 0, second_small, pos;
   printf("Input the size of array: ");
   scanf("%d", &n);

   printf("Input %d element in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   /* find location of the smallest element in the array */
   //small = arr[0]
   small = 0;
   for(i = 0; i < n; i++)
   {
      if(small > arr[i])
      {
         small = arr[i];
         position = i;
      }
   }

   /* ignore the smllest element and find the 2nd smallest 
   element in the array */

   second_small = 999999;
   for(i = 0;i < n; i++)
   {
      if(i == position)
      {
         i++;
         i--;
      }
      else
      {
         if(second_small > arr[i])
         {
            second_small = arr[i];
            pos = i;
         }
      }
   }
   printf("\nThe second %d smallest element in the array: %d", pos, second_small);
}