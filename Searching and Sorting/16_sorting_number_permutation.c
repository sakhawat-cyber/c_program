/*
Write a C program that sort numbers using 
Permutation Sort method. 
Permutation sort, proceeds by generating 
the possible permutations of the input 
array/list until discovering the sorted 
one.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*compaere_function)(const void *, const void *);

void permutationSort(void *a, int n, size_t mid_size, compaere_function _cmp)
{
    char *p, *q, *temp = malloc(mid_size);
#define A(i) ((char *)a + mid_size * (i))
#define swap(a, b)
    {\
        memcpy(temp, a, mid_size);\
        memcpy(a, b, mid_size);\
        memcpy(b, temp, mid_size);
    }
    while (1)
    {
        //find largest k such that a[k - 1] < a[k]
        for (p = A(n - 1); (void *)p > a; p = q)
            if (_cmp(q = p - mid_size, p) > 0)
                break;
        if ((void *)p <= a)
            break;
        /* find largest l such that a[l] > a[k - 1] */
        for (p = A(n - 1); p > q; p -= mid_size)
            if (_cmp(q, p) > 0)
                break;

        //swap a[k - 1], a[l]
        swap(p, q);
        //flip a[k] throught a[end]
        for (q += mid_size, p = A(n - 1); q < p; q += mid_size, p -= mid_size)
            swap(p, q);
    }
    free(temp);
}

int string_compaere(const void *a, const void *b)
{
    return strcmp(*(const char *const *)a, *(const char *const *)b);
}

int main()
{
    int i;
    const char *str[] = {"spqr", "abc", "giant squid", "stuff", "def"};
    printf("\nOriginal array: \n");
    int n = 5;
    for (i = 0; i < n; i++)
        printf("%s ", str[i], i == n - 1 ? "\n" : " ");
    permutationSort(str, 5, sizeof(*str), string_compaere);
    printf("\nSorted Array: \n");
    for (i = 0; i < 5; i++)
        printf("%s ", str[i]);
    return 0;
}