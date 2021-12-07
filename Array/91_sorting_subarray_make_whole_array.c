/* Given an unsorted array of specific size. Write a program in C to find the minimum length of subarray such that,
sorting this subarray makes the whole array sorted.
Expected Output:
The given array is:
10 12 15 17 28 32 42 18 56 59 67
The minimum length of unsorted subarray which makes the given array sorted
lies between the indeces 4 and 7 */


#include<stdio.h>

void FindSortedSubArray(int arr[], int size)
{
    int i = 0, j = size - 1, k, max, min;
    
    for(i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            break;
    }

    if(i == size - 1)
    {
        printf("The given array is sorted.");
        return ;
    }

    for(j = size - 1; j > 0; j--)
    {
        if(arr[j] < arr[j - 1])
            break;
    }

    max = arr[i]; min = arr[i];
    for(k = i + 1; k <= j; k++)
    {
        if(arr[k] > max)
            max = arr[k];
        if(arr[k] < min)
            min = arr[k];
    }

    for(k = 0; k < i; k++)
    {
        if(arr[k] > min)
        {
            i = k;
            break;
        }
    }

    for(k = size - 1; k >= j + 1; k--)
    {
        if(arr[k] < max)
        {
            j = k; 
            break;
        }
    }

    printf("\nThe minimum length of unsorted subarray\nwhich makes the given array soted");
    printf("\nlies between the indeces %d and %d", i, j);
    return;
}

int main()
{
    int arr[] = {10, 12, 15, 17, 28, 32, 42, 18, 56, 59, 67}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);


    printf("The given array is: ");
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    FindSortedSubArray(arr, num);
    return 0;
}