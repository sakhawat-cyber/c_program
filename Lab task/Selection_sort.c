#include<stdio.h>  
int main()
{
    int arr[100], n, i, j, pos, swap;
    printf("Enter number of elements n: ");
    scanf("%d", &n);

    //printf("Enter Number %d: ", n);
    for(i = 0; i < n; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)  
    {
        pos = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[pos] > arr[j])
                pos = j;
        }
            if(pos != i)
            {
                swap = arr[i];
                arr[i] = arr[pos];
                arr[pos] = swap;
            }
    }

    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
