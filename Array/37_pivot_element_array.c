/* Write a program in C to find the pivot element of a sorted and rotated array using binary search.
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given array is : 14 23 7 9 3 6 18 22 16 36
The Pivot Element in the array is : 3 */

#include<stdio.h>
int pivotElement(int *arr, int left_element, int right_element)
{
   int mid_element;
   if(right_element < left_element)
      return -1;
   if(right_element == left_element)
      return left_element;
   
   mid_element = (left_element + right_element) / 2;

   if(mid_element < right_element && arr[mid_element] > arr[mid_element + 1])
      return mid_element;
   if(mid_element > left_element && arr[mid_element] < arr[mid_element - 1])
      return mid_element - 1;
   
   if(arr[left_element] >= arr[mid_element])
   {
      return pivotElement(arr, left_element, mid_element - 1);
   }
   else
      return pivotElement(arr, mid_element + 1, right_element);
}
int main()
{
   int arr[] = {14, 23, 7, 9, 3, 6, 18, 22, 16, 36}, num, i;
   num = sizeof(arr) / sizeof(arr[0]);
   printf("The given array: ");
   for(i = 0; i < num; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\nThe piovet element in the array is: %d", arr[pivotElement(arr, 0, num - 1) + 1]);
   return 0;
}