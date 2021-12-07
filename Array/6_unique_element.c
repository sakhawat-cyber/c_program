/* Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5 */

#include <stdio.h>
int main()
{
   int n, i, arr[20], num = 0, j, k;
   printf("Input the number of element to be stored in the array: ");
   scanf("%d", &n);

   printf("Input 4 elements in the array:\n", n);

   for (i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("The unique elements found in the array: ");

   for (i = 0; i < n; i++)
   {
      num = 0;
      for (j = 0, k = n; j < k + 1; j++)
      {
         /*Incrment the counter when the search value
         is duplicate.*/
         if (i != j)
         {
            if (arr[i] == arr[j])
            {
               num++;
            }
         }
      }
      if (num == 0)
      {
         printf("%d ", arr[i]);
      }
   }
   printf("\n\n");
}