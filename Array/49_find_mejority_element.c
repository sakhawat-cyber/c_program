/* Write a program in C to find majority element of
 an array.
Expected Output :
The given array is : 1 3 3 7 4 3 2 3 3
The majority of the Element : 3 */

#include <stdio.h>
void findMejorityElement(int *arr, int size_array)
{
   int i, mindex = 0, num = 1;
   for (i = 1; i < size_array; i++)
   {
      if (arr[mindex] == arr[i])
         num++;
      else
         num--;
      if (num == 0)
      {
         mindex = i;
         num = 1;
      }
   }
   num = 0;
   for (i = 0; i < size_array; i++)
   {
      if (arr[i] == arr[mindex])
         num++;
   }
   if (num > (size_array / 2))
      printf("\nThe majority of the element: %d", arr[mindex]);
   else
      printf("\nThe non majority of the element.\n");
}

int main()
{
   int num, i, arr[] = {1, 3, 3, 7, 4, 3, 2, 3, 3};
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   findMejorityElement(arr, num);
   return 0;
}