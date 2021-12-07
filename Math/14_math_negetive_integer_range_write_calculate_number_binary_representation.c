/* 
 For a non negative integer in the range 0 ≤ i ≤ n write a C programming to calculate the number of 1's in their binary representation and return them as an array.
Example:
Input:
Number: 7
Number of 1's in the binary representation:
0: 0
1: 1
2: 1
3: 2
4: 1
5: 2
*/

#include <stdio.h>
#include <stdlib.h>

int *CountBit(int num, int *return_size)
{
    int *x, i;
    x = malloc((num + 1) * sizeof(int));
    *return_size = num + 1;

    x[0] = 0;
    for (i = 1; i <= num; i++)
    {
        x[i] = x[i & (i - 1)] + 1;
    }
    return x;
}

int main()
{
    int n = 7, return_size, *x, i;
    printf("Number: %d", n);
    x = CountBit(5, &return_size);
    printf("Number of 1's in the binary represent: \n");
    for (i = 0; i < return_size; i++)
        printf("%x:\t%d\n", i, x[i]);
    free(x);
    return 0;
}