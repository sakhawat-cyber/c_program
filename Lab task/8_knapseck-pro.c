#include<stdio.h>
int max(int a, int b)
{
   if(a > b)
      return a;
   else
      return b;
}
int knapsack(int w, int wt[], int *arr, int n)
{
   int i, w1;
   int knap[n + 1][w + 1];
   for(i = 0; i <= n; i++)
   {
      for(w1 = 0; w1 <= w; w1++)
      {
         if(i == 0 || w1 == 0)
         {
            knap[i][w1] = 0;
         }
         else if(wt[i - 1] <= w1)
         {
            knap[i][w1] = max(arr[i - 1] + knap[i - 1][w1 - wt[i - 1]], knap[i - 1][w1]);
         }
         else
            knap[i][w1] = knap[i - 1][w1];
      }
   }
   return knap[n][w];
}
int main()
{
   int arr[] = {10, 25, 35};
   int weight[] = {5, 20, 30}, w = 20, num;

   num = sizeof(arr) / sizeof(arr[0]);    
   printf("The solution is: %d", knapsack(w, weight, arr, num));
   return 0;
}