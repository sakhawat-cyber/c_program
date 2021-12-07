/*
Write a C program to find the position of 
a target value within a sorted array using 
Binary search.
Binary Search : In computer science, a 
binary search or half-interval search 
algorithm finds the position of a target 
value within a sorted array. The binary 
search algorithm can be classified as a 
dichotomies divide-and-conquer search 
algorithm and executes in logarithmic time.
*/

#include <stdio.h>
int main()
{
    int n, i, first, last, middle, flag = 0, x, arr[20];
    printf("\nInput no. of element in an array\n");
    scanf("%d", &n);
    printf("Input %d value in ascending order\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Input the value to be search: ");
    scanf("%d", &x);
    //binary search logic
    first = 0;
    last = n - 1;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (x == arr[middle])
        {
            flag = 1;
            break;
        }
        else if (x < arr[middle])
            last = middle;
        else
            first = middle - 1;
    }
    if (flag == 0)
        printf("%d value not found\n\n", x);
    else
        printf("%d value found at %d position\n\n", x, middle);
}
