/* Write a program in C to find the product of an array such that product is equal to the product of all the elements of arr[] except arr[i].
Expected Output :
The given array is : 1 2 3 4 5 6
The product array is: 720 360 240 180 144 120 */

#include <stdio.h>
void ProductOfArray(int *arr, int size)
{
   int left_array[size], right_array[size], product[size], i, j;
   left_array[0] = 1;
   right_array[size - 1] = 1;

   for (i = 1; i < size; i++)
      left_array[i] = arr[i - 1] * left_array[i - 1];

   for (j = size - 2; j >= 0; j--)
      right_array[j] = arr[j + 1] * right_array[j + 1];

   for (i = 0; i < size; i++)
      product[i] = left_array[i] * right_array[i];

   for (i = 0; i < size; i++)
      printf("%d ", product[i]);
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6};
   int num = sizeof(arr) / sizeof(arr[0]);
   int i;
   printf("The given array is: ");
   for (i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
   printf("The product array is: ");
   ProductOfArray(arr, num);
}