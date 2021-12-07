/* Write a program in C to update every array element with multiplication of previous and next numbers in array.
Expected Output:
The given array is:
1 2 3 4 5 6
The new array is:
2 3 8 15 24 30 */

#include <stdio.h>

void NewArrayPrevNext(int arr[], int size)
{
    int i;
    if (size <= 1)
        return;

    int previous_element = arr[0];
    arr[0] = arr[0] * arr[1];

    for (i = 0; i < size - 1; i++)
    {
        int current_element = arr[i];
        arr[i] = previous_element * arr[i + 1];
        previous_element = current_element;
    }
    arr[size - 1] = previous_element * arr[size - 1];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    printf("\nThe new array is: \n");
    NewArrayPrevNext(arr, num);
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    return 0;
}