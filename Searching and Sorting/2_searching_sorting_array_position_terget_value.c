/*
Write a C program to find the position of a target value within a array using Interpolation search. 
From Wikipedia:
Interpolation search is an algorithm for searching for a key in an array that has been ordered by
 numerical values assigned to the keys (key values). It was first described by W. W. 
 Peterson in 1957. Interpolation search resembles the method by which people search a telephone 
 directory for a name (the key value by which the book's entries are ordered): in each step the 
 algorithm calculates where in the remaining search space the sought item might be, based on the key 
 values at the bounds of the search space and the value of the sought key, usually via a linear 
 interpolation. The key value actually found at this estimated position is then compared to the key 
 value being sought. If it is not equal, then depending on the comparison, the remaining search 
 space is reduced to the part before or after the estimated position. This method will only work 
 if calculations on the size of differences 
 between key values are sensible.
*/

#include <stdio.h>

int interpolation_search(int arr_num[], int arr_size, int num)
{
    int lower_pos = 0, higher_pos = arr_size - 1, num_pos;
    while (lower_pos <= higher_pos && num >= arr_num[lower_pos] && num <= arr_num[higher_pos])
    {
        num_pos = lower_pos + ((num - arr_num[lower_pos]) * (higher_pos - lower_pos)) / (arr_num[higher_pos] - arr_num[lower_pos]);
        if (num > arr_num[num_pos])
            lower_pos = num_pos + 1;
        else if (num < arr_num[num_pos])
            higher_pos = num_pos - 1;
        else
           return num_pos;
    }
    return -1;
}

int main()
{
    int n, i, index;
    int array_num[] = {0, 10, 20, 20, 30, 50, 70, 75, 82, 92, 115, 123, 141, 153, 160, 170};
    int array_size = sizeof(array_num) / sizeof(array_num[0]);
    printf("\nOriginal Array: \n");
    for (i = 0; i < array_size; i++)
        printf("%d ", array_num[i]);
    printf("\nInput a number to search: ");
    scanf("%d", &n);
    index = interpolation_search(array_num, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d\n\n", index);
    else
        printf("\nElement not found..!\n\n");
    return 0;
}