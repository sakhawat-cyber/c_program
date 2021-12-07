/*  Write a program in C to find the maximum for each and every contigious subarray of size k from a given array.Go to the editor
Expected Output:
The given array is:
1 3 6 21 4 9 12 3 16 10
The length of each subarray is: 4
The contigious subarray of length 4 and their maximum value are:
1 3 6 21 ----> 21
3 6 21 4 ----> 21
6 21 4 9 ----> 21
21 4 9 12 ----> 21
4 9 12 3 ----> 12
9 12 3 16 ----> 16
12 3 16 10 ----> 16 */ 

#include<stdio.h>

void ContSubArray(int arr[], int x, int y)
{
    int i;
    for(i = x; i <= x + (y - 1); i++)
        printf("%d ", arr[i]);
}

void FindMaxFrom(int arr[], int num, int k)
{
   int i, j, max_num, num1 = 0;
   for(i = 0; i <= num - k; i++)
    {
        max_num = arr[i];
        for(j = 1; j < k; j++)
        {
            if(arr[i + j] > max_num)
                max_num = arr[i + j];
        }
        ContSubArray(arr, num1, k);
        printf("------> %d \n", max_num);
        num1++;
    }
}

int main()
{
    int arr[] = {1, 3, 6, 21, 4, 9, 12, 3, 16, 10}, i, num;
    int n = 4;
    num = sizeof(arr) / sizeof(arr[0]);


    printf("The given array is: ");
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);


    printf("\nThe length of each subarray is: %d", n);
    printf("\nThe contigious subarray of length %d and their maximum value are: \n", n);
    FindMaxFrom(arr, num, n);
    return 0;
}