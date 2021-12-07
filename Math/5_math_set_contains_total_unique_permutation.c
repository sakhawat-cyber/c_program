/*
The following set contains a total of n! unique permutations
Set: [1, 2, 3, ..., n]
If n =3 we will get the following sequence:
1. "123"
2. "132"
3. "213"
4. "231"
5. "312"
6. "321"
Input: n = 3, k = 4
Output: "231"
Write a C program to get the kth permutation sequence from two given integers n and k where n is between 1 and 9 inclusive and k is between 1 and n! inclusive.
Example:
Input:
n = 3
int k = 2

n = 4
k = 7
Output:
Kth sequence: 132
Kth sequence: 2134
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int Factorial(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n * Factorial(n - 1);
}

static char *GetPermutation(int n, int n1)
{
    int i, fact, j;
    int *permutation_size = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        permutation_size[i] = i + 1;

    char *result = malloc(n + 1);
    for (i = 0; i < n; i++)
    {
        fact = Factorial(n - i - 1);
        j = n1 > 1 ? (n1 - 1) / fact : 0;
        result[i] = permutation_size[j] + '0';
        n1 = n1 - j * fact;
        memmove(permutation_size + j, permutation_size + j + 1, (n - j) * sizeof(int));
    }
    result[n] = '\0';
    return result;
}

int main()
{
    int x, y;
    x = 3;
    y = 2;
    printf("n = %d\nk = %d\n", x, y);
    printf("Kth Sequence: %s\n\n", GetPermutation(x, y));

    x = 4;
    y = 7;
    printf("n = %d\nk = %d\n", x, y);
    printf("Kth Sequence: %s\n", GetPermutation(x, y));

    return 0;
}
