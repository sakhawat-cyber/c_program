/* Write a program in C to to print next greater elements in a given unsorted array. Elements for which no greater element exist, consider next greater element as -1.
Expected Output :
The given array is : 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1 */
 

#include<stdio.h>

void findNextLargeElement(int *arr, int arr_size)
{
   int next_big_element, i, j;
   for(i = 0; i < arr_size; i++)
   {
      for(j = i + 1, next_big_element = -1; j < arr_size; j++)
      {
         if(arr[i] < arr[j])
         {
            next_big_element = arr[j];
            break;
         }
      }
      printf("Next bigger element of %d in the array is: %d\n", arr[i], next_big_element);
   }
}

void fromBigElementArray(int *arr, int arr_size)
{
   int next_big_element, i, j;
   for(i = 0; i < arr_size; i++)
   {
      for(j = i + 1, next_big_element = -1; j < arr_size; j++)
      {
         if(arr[i] < arr[j])
         {
            next_big_element = arr[j];
            break;
         }
      }
      printf("%d ", next_big_element);
   }
}

int main()
{
   int arr[] = {5, 3, 10, 9, 6, 13}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array is: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");

   printf("\nNext bigger elements are is: \n");
   findNextLargeElement(arr, num);
   printf("\nNext bigger elements are is: \n");
   fromBigElementArray(arr, num);

}