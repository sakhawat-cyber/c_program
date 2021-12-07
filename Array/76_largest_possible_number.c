/* Write a program in C to find largest number possible from the set of given numbers.
Expected Output:
The given numbers are :
15 628 971 9 2143 12
The largest possible number by the given numbers are: 997162821431512 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Compare(const void *a, const void *b)
{
    const char **x = (const char **)a;
    const char **y = (const char **)b;

    int chr_len = strlen(*x) + strlen(*y) + 1;

    char xy[chr_len];
    strcpy(xy, *x);
    strcat(xy, *y);

    char yx[chr_len];
    strcpy(yx, *y);
    strcat(yx, *x);

    return strcmp(yx, xy);
}

int main()
{
    int *arr[] = {"15", "628", "971", "9", "2143", "12"}, num, i;
    printf("The given array is: \n");
    num = sizeof(arr) / sizeof(int);

    for (i = 0; i < num; i++)
    {
        printf("%s ", arr[i]);
    }
    qsort(arr, num, sizeof(arr[0]), Compare);
    printf("\nThe largest possible number by the given numbers are: \n");
    for (i = 0; i < num; i++)
    {
        printf("%s", arr[i]);
    }
    return 0;
}