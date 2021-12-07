/*  Write a program in C that checks whether the elements in an unsorted array appears consecutively or not.
Expected Output:
The given array is:
7 4 3 5 6 2
The appearence of elements in the array are consecutive.
The given array is:
7 4 4 5 6 2
The appearence of elements in the array are not consecutive.
The given array is:
7 4 9 5 6 3
The appearence of elements in the array are not consecutive. */


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FindMin(int arr[], int size);
int FindMax(int arr[], int size);


bool AreConsecutive(int arr[], int size)
{
    
    if(size < 1)
        return false;

    int min_num = FindMin(arr, size), i;
    int max_num = FindMax(arr, size);

    if(max_num - min_num + 1 == size)
    {
        bool *checked = (bool *) calloc (size, sizeof(bool));
        for(i = 0; i < size; i++)
        {
            if(checked[arr[i] - min_num] != false)
                return false;
            
            checked[arr[i] - min_num] = true;
        }
        return true;
    }
    return false;
}


int FindMin(int arr[], int size)
{
    int min_num = arr[0], i;
    for(i = 1; i < size; i++)
    {
        if(arr[i] < min_num)
            min_num = arr[i];
    }
    return min_num;
}

int FindMax(int arr[], int size)
{
    int max_num = arr[0], i;
    for(i = 1; i < size; i++)
    {
        if(arr[i] > max_num)
            max_num = arr[i];
    }
    return max_num;
}

int main()
{
    int arr[] = {7, 4, 3, 5, 6, 7}, i, num, num1;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);

    num1 = sizeof(arr) / sizeof(arr[0]);
    if(AreConsecutive(arr, num1) == true)
        printf("\nThe appearence of elements in the array are consecutive.\n");
    
    else
        printf("\nThe appearence of elements in the array are not consecutive.\n");

    return 0;
}