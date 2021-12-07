/*
Write a C program to sort a list of elements using the insertionsort algorithm. Go to the editor
Input numbers you want to input: Input 5 values to sort

The ascending order of the values:
11
13
15
20
*/

#include <stdio.h>
int main()
{
    int arr[20], n, len, temp, i, j;
    printf("\nInput nubers you want to input: ");
    scanf("%d", &n);
    printf("\nInput %d value to sort\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < n; i++)
    {
        for (j = i; j > 0; j--)
        {
            if(arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    printf("\nThe ascending order of the values: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    printf("\n\n");
    return 0;
}