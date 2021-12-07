/* Write a program in C to insert New value in the array (unsorted list ).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10 */

#include<stdio.h>
int main()
{
   int n, i, arr[20], in, num;
   printf("Input the size of array: ");
   scanf("%d", &n);

   printf("Input %d element in the array in ascending order: \n", n);
   for(i = 0; i < n; i++)
   {
      printf("element - %d: ", i);
      scanf("%d", &arr[i]);
   }

   printf("Input the value to be inserted: ");
   scanf("%d", &in);

   printf("\nInput the position, where the value to be inserted: ");
   scanf("%d", &num);
   printf("\nThe current list of the array: \n");
   
   for(i = 0; i < n; i++)
      printf("%d ", arr[i]);
  
   /* determine the position where the new value will be insert*/
   for(i = 0; i < n; i++)
   {
      if(in < arr[i])
      {
         num = i;
         break;
      }
   }
   
   /*move all data at right side of the array*/
   for(i = n; i >= num; i--)
   {
      arr[i] = arr[i - 1];
   }
   
   //Insert value at given position
   arr[num - 1] = in;
   printf("\nAfter Insert the element to be the new list is: \n");
   for(i = 0; i <= n; i++)
      printf("%d ", arr[i]);

}