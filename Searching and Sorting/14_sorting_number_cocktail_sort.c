/*
Write a C program that sort numbers using 
Cocktail Sort method. 
Cocktail shaker sort (also known as 
bidirectional bubble sort, cocktail sort, 
shaker sort, ripple sort, shuffle sort, 
or shuttle sort ) is a variation of 
bubble sort that is both a stable sorting 
algorithm and a comparison sort. 
The algorithm differs from a bubble sort 
in that it sorts in both directions on 
each pass through the list. This sorting 
algorithm is only marginally more 
difficult to implement than a bubble 
sort and solves the problem of turtles in 
bubble sorts. It provides only marginal 
performance improvements, and does not 
improve asymptotic performance; like the 
bubble sort, it is not of practical 
interest, though it finds some use in 
education.
*/

#include <stdio.h>

/*can be any swap function. this swap is 
optimized for numbers */
void swap(int *x, int *y)
{
    if (x == y)
        return;
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void cocktailSort(int *arr, int len)
{
    char flag;
    int it, i;
    while (1)
    {
        //packing two similar loops into one
        size_t start[2] = {1, len - 1},
               end[2] = {len, 0},
               num[2] = {1, -1};
        for (it = 0; it < 2; ++it)
        {
            flag = 1;
            for (i = start[it]; i != end[it]; i += num[it])
                if (arr[i - 1] > arr[i])
                {
                    swap(arr + i - 1, arr + i);
                    flag = 0;
                }
            if (flag)
                return;
        }
    }
}

int main()
{
    int arr[] = {12, 5, 6, -1, -0, 3, 56, 5, 67};
    int i, len = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal Array: \n");
    for (i = 0; i < len; i++)
        printf("%d%s", arr[i], i == len - 1 ? "\n" : " ");
    cocktailSort(arr, len);
    printf("\nSorted Array: \n");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}