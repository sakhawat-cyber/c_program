#include <iostream>

using namespace std;
void inseart(int *arr, int n1, int i)
{
   int largest = i, swap;
   int l = 2 * i + 1;
   int r = 2 * i + 2;

   if(l < n1 && arr[l] > arr[largest])
      largest = l;
   if(r < n1 && arr[r] > arr[largest])
      largest = r;
   if(largest != i)
      swap = (arr[i], arr[largest]);
   inseart (arr, n1, largest);
}
void printfArray(int arr[], int n)
{
   int i;
   for(i = 0; i < n; ++i)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}
int main()
{
   int arr[] = {10, 5, 3, 2, 4}, num;
   num = sizeof(arr) / sizeof(arr[0]);

   printf("\nMaxHeap is: ");
   printfArray(arr, num);
   return 0;
}