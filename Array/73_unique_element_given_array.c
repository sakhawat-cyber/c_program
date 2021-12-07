/* Write a program in C to print all unique 
elements of an unsorted array.   
Expected Output:
The given array is : 1 5 8 5 7 3 2 4 1 6 2
Unique Elements in the given array are:
1 5 8 7 3 2 4 6 */

#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 8, 3, 2, 4, 1, 6, 2};
    int i, j, num;
    num = sizeof(arr) / sizeof(int);
    printf("The given array is: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nUnique Elements in the given array are: ");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}