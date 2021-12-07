/*
Write a C program to find the position of 
a target value within a array using 
Ternary search.
From Wikipedia
A ternary search algorithm is a technique 
in computer science for finding the 
minimum or maximum of a unimodal function. 
A ternary search determines either that 
the minimum or maximum cannot be in the 
first third of the domain or that it 
cannot be in the last third of the domain, 
then repeats on the remaining two thirds. 
A ternary search is an example of a divide 
and conquer algorithm.
*/

#include <stdio.h>
#include <stdlib.h>

int ternarySearch(int num1, int arr_size, int key, int arr_num[])
{
    while (arr_size >= num1)
    {
        int mid1, mid2;
        /* find the mid1 and mid2 */
        mid1 = num1 + (arr_size - num1) / 3;
        mid2 = arr_size - (arr_size - num1) / 3;
        //check if key is  present at any mid
        if (arr_num[mid1] == key)
            return mid1;
        if (arr_num[mid2] == key)
            return mid2;

        //since key is not present at mid,
        //check in which region it is present
        //then repeat the search operation
        //in that region

        if (key < arr_num[mid1])
            //the key lies in between num1 and mid1
            arr_size = mid1 - 1;
        else if (key > arr_num[mid2])
            //the key lies between mid2 and array_size
            num1 = mid2 + 1;
        else
        {
            //the key lies in between mid1 and mid2
            num1 = mid1 + 1;
            arr_size = mid2 - 1;
        }
    }
    //key not found
    return -1;
}

int main()
{
    int n = 0, num, i, result;
    int array_num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array_size = sizeof(array_num) / sizeof(array_num[0]);
    printf("\nOriginal array %d: \n", array_size);
    for (i = 0; i < array_size; i++)
        printf("%d ", array_num[i]);
    printf("\nInput a number to search: ");
    scanf("%d", &num);
    result = ternarySearch(n, array_size, num, array_num);
    printf("\nElement found at position: %d\n\n", result);
}