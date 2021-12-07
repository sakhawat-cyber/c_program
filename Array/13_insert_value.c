/* Write a program in C to insert New value in the array (sorted list ).
Test Data :
Input the size of array : 3
Input 3 elements in the array in ascending order:
element - 0 : 5
element - 1 : 7
element - 2 : 9
Input the value to be inserted : 8
Expected Output :
The exist array list is :
5 7 9
After Insert the list is :
5 7 8 9 */

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
   scanf("%d",&in);

   printf("The exist array list is: \n");
   for(i = 0; i < n; i++)
      printf("%d ", arr[i]);

   /* determine the position where the new value will be insert.*/
   for(i = 0; i < n; i++)
   {
      if(in < arr[i])
      {
         num = i;
         break;
      }
   }

   /*move all data at right side of the array */
   for(i = n; i >= num; i--)
   {
      arr[i] = arr[i - 1];
   }
   //Insert value at the proper position
   arr[num] = in;


   printf("\nAfter Insert the list is: \n");
   for(i = 0; i <= n; i++)
      printf("%d ", arr[i]);
   printf("\n\n");
}