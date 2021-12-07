/* Write a program in C to print all possible combinations of r elements in a given array.
Expected Output:
The given array is:
1 5 4 6 8 The combination from by the number of elements are: 4
The combinations are:
1 5 4 6
1 5 4 8
1 5 6 8
1 4 6 8
5 4 6 8 */

#include <stdio.h>
void CombinationMake(int *arr, int data[], int start, int end, int index, int right);

void Combination(int *arr, int size, int right1)
{
    int data[right1];
    CombinationMake(arr, data, 0, size - 1, 0, right1);
}

void CombinationMake(int *arr, int data[], int start, int end, int index, int right)
{
    int j, i;
    if (index == right)
    {
        for (j = 0; j < right; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (i = start; i <= end && end - i + 1 >= right - index; i++)
    {
        data[index] = arr[i];
        CombinationMake(arr, data, i + 1, end, index + 1, right);
    }
}

int main()
{
    int arr[] = {1, 5, 4, 6, 8}, i, num, n = 4;
    int right2 = 4;
    printf("The given array is: ");
    num = sizeof(arr) / sizeof(int);
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nThe combination from by the number of elements are: %d", n);
    printf("\nThe combibination are: \n");
    Combination(arr, num, right2);
}