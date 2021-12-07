/* Write a C program to compute the sum of the elements of a given array of integers.
Expected Output:
150
10 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array1[] = {10, 20, 30, 40, 50};
    int array2[] = {10, 20, -30, -40, 50};
    printf("%d",test(array1));
    printf("\n%d",test(array2));
}

int test(int arr[])
{
    return arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
}