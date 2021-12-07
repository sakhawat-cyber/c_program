/* Write a program in C to count the frequency of each element of an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times */

#include<stdio.h>
int main()
{
   int n, i, j, num, arr[20], arr1[20];
   printf("Input the number of element to be stored in the array: ");
   scanf("%d", &n);

   printf("Input 3 element in the array: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
      arr1[i] = -1;
   }

   for(i = 0; i < n; i++)
   {
      num = 1;
      for(j = i + 1; j < n; j++)
      {
         if(arr[i] == arr[j])
         {
            num++;
            arr1[j] = 0;
         }
      }
      if(arr1[i] != 0)
      {
         arr1[i] = num;
      }
   }
   //printf("\nThe frequency of all elements of array: \n")
   printf("The frequency of all element of an array: \n");
   for(i = 0; i < n; i++)
   {
      if(arr[i] != 0)
      {
         printf("%d occurs %d times\n", arr[i], arr1[i]);
      }
   }

}