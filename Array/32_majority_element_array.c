/* Write a program in C to find the majority element of an array.
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array. */

#include<stdio.h>
void findMejority(int *arr1, int n1)
{
   int i, indexOfMejority = 0, num1 = 1;
   for(i = 1; i < n1; i++)
   {
      if(arr1[indexOfMejority] == arr1[i])
         num1++;
      else
         num1--;
      if(num1 == 0)
      {
         indexOfMejority = i;
         num1 = 1;
      }

   }
   for(i = 0; i < n1; i++)
   {
      if(arr1[i] == arr1[indexOfMejority])
         num1++;
   }
   if(num1 > (n1 / 2))
      printf("Majority element: %d\n", arr1[indexOfMejority]);
   else
      printf("There are no Majority elements in the given array.\n");
}

int main()
{
   int i, n = 8, arr[] = {4, 8, 4, 6, 7, 4, 4, 8}, num;   
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
   findMejority(arr, num);
   return 0;
}
