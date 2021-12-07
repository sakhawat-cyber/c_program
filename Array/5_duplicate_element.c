/* Write a program in C to count a total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], arr1[20], arr2[20], j, n1 = 0, ctr = 0;
   printf("Input th enumber of element to be stored in the array: ");
   scanf("%d", &n);

   printf("Input %d element in the array:\n", n);

   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }
   
   //Copy in other array
   printf("Total number of duplicate elements found in the array: ");
   for(i = 0; i < n; i++)
   {
      arr1[i] = arr[i];
      arr2[i] = 0;
   }

   //Mark the element are duplicate
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j ++)
      {
         if(arr[i] == arr1[j]);
         {
            arr2[i] = n1;
            n1++;
         }
      }
      n1 = 1;
   }

   //prints the array
   for(i = 0; i < n; i++)
   {
      if(arr2[i] == 2)
         ctr++;
   }
   printf("%d ", ctr);

}