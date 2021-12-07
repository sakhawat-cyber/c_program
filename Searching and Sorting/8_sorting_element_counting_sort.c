/*
Write a C Program for counting sort. 
Go to the editor
According to Wikipedia “In computer 
science, counting sort is an algorithm for 
sorting a collection of objects according 
to keys that are small integers; 
that is, it is an integer sorting 
algorithm. It operates by counting the 
number of objects that have each distinct 
key value, and using arithmetic on those 
counts to determine the positions of each
key value in the output sequence. 
Its running time is linear in the number 
of items and the difference between the 
maximum and minimum key values, so it is 
only suitable for direct use in 
situations where the variation in keys 
is not significantly greater than the 
number of items. However, it is often 
used as a subroutine in another sorting 
algorithm, radix sort, that can handle 
larger keys more efficiently”.
*/

#include <stdio.h>

//counting sort function
int countingSort(int a[], int k, int n1)
{
    int i, j, b[20], c[20];
    for (i = 0; i <= k; i++)
        c[i] = 0;
    for (j = 1; j <= n1; j++)
        c[a[j]] = c[a[j]] + 1;
    for (i = 1; i <= k; i++)
        c[i] = c[i] + c[i - 1];
    for (j = n1; j >= 1; j--)
    {
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
    printf("The sorted array is: \n");
    for (i = 1; i <= n1; i++)
        printf("%d, ", b[i]);
}

int main()
{
    int n, i, n1 = 0, arr[15];
    printf("\nInput number of element: ");
    scanf("%d", &n);
    printf("Input the array element one by one: \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i] > n1)
            n1 = arr[i];
    }
    countingSort(arr, n1, n);
    printf("\n\n");
    return 0;
}
