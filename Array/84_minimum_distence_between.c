/* Write a program in C to find the minimum distance between two numbers in a given array.
Expected Output:
The given array is:
7 9 5 11 7 4 12 6 2 11
The minimum distance between 7 and 11 is: 1 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int MinimumDistance(int *input, int n2, int n3, int length)
{
    int i, pos_one = INT_MAX, pos_two = INT_MAX, new_dis, dis = length + 1;
    pos_one = pos_two = dis = length;
    for (i = 0; i < length; i++)
    {
        if (input[i] == n2)
            pos_one = i;
        else if (input[i] == n3)
            pos_two = i;

        if (pos_one < length && pos_two < length)
        {
            new_dis = abs(pos_one - pos_two);
            if (dis > new_dis)
                dis = new_dis;
        }
    }
    return dis == length + 1 ? -1 : dis;
}

int main()
{
    int arr[] = {7, 9, 5, 11, 7, 4, 12, 6, 2, 11}, i, num, n = 7, n1 = 11;
    num = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    printf("The minimum distance between %d and %d is: %d\n", n, n1, MinimumDistance(arr, n, n1, num));
    return 0;
}