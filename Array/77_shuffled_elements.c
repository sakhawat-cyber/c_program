/* Write a program in C to generate a random permutation of array elements. Go to the editor
Expected Output:
The given array is:
1 2 3 4 5 6 7 8
The shuffled elements in the array are:
2 8 7 3 4 5 1 6 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ArrayDisplay(int arr[], int n)
{
    int i;
    printf("\nThe shuffled elements in the array are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void ShuffleRandon(int arr[], int n)
{
    int i, j;
    srand(time(NULL));
    for (i = n - 1; i > 0; i--)
    {
        j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}, i, num;
    num = sizeof(arr) / sizeof(int);
    printf("The given  array is: ");

    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    ShuffleRandon(arr, num);
    ArrayDisplay(arr, num);
    return 0;
}