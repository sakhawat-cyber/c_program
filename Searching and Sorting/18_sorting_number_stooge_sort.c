/*
Write a C program that sort numbers using 
Stooge Sort method. 
Stooge sort is a recursive sorting 
algorithm with a time complexity of 
O(nlog 3 / log 1.5 ) = O(n2.7095...). 
The running time of the algorithm is thus 
slower compared to efficient sorting 
algorithms, such as Merge sort, and is 
even slower than Bubble sort.
*/

#include <stdio.h>

int *stooge_sort(int arr_num[], int i, int j)
{
    int temp_value, k;
    if (arr_num[i] > arr_num[j])
    {
        temp_value = arr_num[i];
        arr_num[i] = arr_num[j];
        arr_num[j] = temp_value;
    }
    if ((i + 1) >= j)
        return arr_num;
    k = (int)((j - i + 1) / 3);
    stooge_sort(arr_num, i, j - k);
    stooge_sort(arr_num, i + k, j);
    stooge_sort(arr_num, i, j - k);
    return arr_num;
}

int main()
{
    int n, i, arr[200];
    printf("\nInput number of element you went to sort: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("Input the number: \n");
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int *result_array = stooge_sort(arr, 0, n - 1);
        printf("\nSorted Array: \n");
        for (i = 0; i < n; i++)
            printf("%d ", result_array[i]);
        printf("\n\n");
    }
    return 0;
}