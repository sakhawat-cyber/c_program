/*
Write a C program to find the position of 
a target value within a array using Linear 
search.
In computer science, a Linear search or 
sequential search is a method for finding 
an element within a list. It sequentially 
checks each element of the list until a 
match is found or the whole list has been 
searched
*/

#include <stdio.h>
#include<math.h>

int linearSearch(int *arr_num, int arr_size, int num)
{
    int i;
    for (i = 0; i < arr_size; i++)
    {
        if (arr_num[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int i, n, index;
    int array_num[] = {0, 10, 40, 20, 30, 50, 90, 75, 82, 92, 155, 133, 145, 163, 200, 180};
    int array_size = sizeof(array_num) / sizeof(array_num[0]);

    printf("\nOriginal Array: \n");
    for (i = 0; i < array_size; i++)
        printf("%d ", array_num[i]);
    printf("\nInput a number to search: ");
    scanf("%d", &n);
    index = linearSearch(array_num, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d\n\n", index);
    else
        printf("Element not found....!\n\n");
}