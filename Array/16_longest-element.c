/*  Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], large, position, j = 0, second_large, pos;
   printf("Input the size of array: ");
   scanf("%d", &n);

   printf("Input %d elements in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("elements - %d: ", i);
      scanf("%d", &arr[i]);
   }

   /* find location of the largest element in the array */
   // large = arr[0]
   large = 0;
   for(i = 0; i < n; i++)
   {
      if(large < arr[i])
      {
         large = arr[i];
         position = i;
      }
   }

   /* ignore the  largest element and find the 2nd largest element 
   in the array */

   second_large = 0;
   for(i = 0; i < n; i++)
   {
      if(i == position)
      {
         i++;
         i--;
      }
      else
      {
         if(second_large < arr[i])
         {
            second_large = arr[i];
            pos = i;
         }
      }
   }
   printf("\nThe Second %d largest element in the array: %d", pos, second_large);

}