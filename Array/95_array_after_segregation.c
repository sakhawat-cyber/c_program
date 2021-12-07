/* Write a program in C to segregate 0s and 1s in an array.
Expected Output:
The given array is:
1 0 1 0 0 1 0 1 1
The array after segregation is: 0 0 0 0 1 1 1 1 1 */

#include<stdio.h>

void SegZeroAndOne(int arr[], int size)
{
    int i, num = 0; 
    for(i = 0; i < size; i++)
    {
        if(arr[i] == 0)
            num++;
    }
    for(i = 0; i < num; i++)
        arr[i] = 0;

    for(i = num; i < size; i++)
        arr[i] = 1;
}

int main()
{
    int arr[] = {1, 0, 1, 0, 0, 1, 0, 1, 1}, i, num;
    num = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is: ");
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);

    SegZeroAndOne(arr, num);
    printf("\nThe array after segregation is: \n");
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    
    return 0;
}