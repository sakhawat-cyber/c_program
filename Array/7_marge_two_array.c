/* Write a program in C to merge two arrays of same size sorted in decending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1 */

#include<stdio.h>
int main()
{
   int n, i, j, k, n1, n2, arr[20], arr1[20], arr2[20];
   printf("Input the number of elements to be stored in the first array: ");
   scanf("%d",&n);
   printf("Input %d elements in the array: \n",n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("Input the number of elements to be stored in the second array: ");
   scanf("%d",&n1);
   printf("Input %d elements in the array: \n",n1);
   for(i = 0; i < n1; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr1[i]);
   }

   printf("The merged array in decending order is: \n");

   //size of merged is size of first array
   n2 = n + n1;

   //insert in the third array and size of second array
   for(i = 0; i < n; i++)
   {
      arr2[i] = arr[i];
   }
   for(j = 0; j < n1; j++)
   {
      arr2[i] = arr1[j];
      i++;
   }

   //sort the array in deceending order
   for(i = 0; i < n2; i++)
   {
      for(k = 0; k < n2 - 1; k++)
      {
         if(arr2[k] <= arr2[k + 1])
         {
            j = arr2[k + 1];
            arr2[k + 1] = arr2[k];
            arr2[k] = j;
         }
      }
   }

   //prints the mereged array
   for(i = 0; i < n2; i++)
   {
      printf("%d ", arr2[i]);
   }
   printf("\n\n");
}