/*  Write a program in C to separate odd and even integers in separate arrays. Go to the editor
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47 */

#include <stdio.h>
int main()
{
   int n, i, j = 0, k = 0, arr[20], arr1[20], arr2[20];
   printf("Input the number of elements to be stored in the array: ");
   scanf("%d",&n);

   printf("Input %d elements in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }
   //printf("The Even elements are: ");
   for(i = 0; i < n; i++)
   {
      if(arr[i] % 2 == 0)
      {
         arr1[j] = arr[i];
         j++;
      }
      else
      {
         arr2[k] = arr[i];
         k++;
      }
   }

   printf("The even elements are: \n");
   for(i = 0; i < j; i++)
   {
      printf("%d ", arr1[i]);
   }

   printf("\nThe odd element ara: \n");
   for(i = 0; i < k; i++ )
   {
      printf("%d ", arr2[i]);
   }
   printf("\n\n");
}