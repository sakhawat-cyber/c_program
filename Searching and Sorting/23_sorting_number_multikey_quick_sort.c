/*
 Write a C program that sort numbers using Multi-key quicksort method. 
Multi-key quicksort, also known as three-way radix quicksort, is an algorithm for sorting strings. 
This hybrid of quicksort and radix sort was originally suggested by P. Shackleton, as reported in 
one of C.A.R. Hoare's seminal papers on quicksort, its modern incarnation was developed by Jon 
Bentley and Robert Sedgewick in the mid-1990s. The algorithm is designed to exploit the property 
that in many problems, strings tend to have shared prefixes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Multikey quicksort

#ifndef min
#define min(n1, n2) ((n1) <= (n2) ? (n1) : (n2))
#endif

#define swap(n1, n2)        \
    {                       \
        char *temp = x[n1]; \
        x[n1] = x[n2];      \
        x[n2] = temp;       \
    }

#define i2c(i) x[i][depth]

void swapSort(int i, int j, int n, char *x[])
{
    while (n-- > 0)
    {
        swap(i, j);
        i++;
        j++;
    }
}

void sort1(char *x[], int n, int depth)
{
    int n1, n2, n3, n4, n5, n6;
    if (n <= 1)
        return;
    n1 = rand() % n;
    swap(0, n1);
    n6 = i2c(0);
    n1 = n2 = 1;
    n3 = n4 = n - 1;
    for (;;)
    {
        while (n2 <= n3 && (n5 == i2c(n2) - n6) <= 0)
        {
            if (n5 == 0)
            {
                swap(n1, n2);
                n1++;
            }
            n2++;
        }
        while (n2 <= n3 && (n5 = i2c(n3) - n6) >= 0)
        {
            if (n5 == 0)
            {
                swap(n3, n4);
                n4--;
            }
            n3--;
        }
        if (n2 > n3)
            break;
        swap(n2, n3);
        n2++;
        n3--;
    }
    n5 = min(n1, n2 - n1);
    swapSort(0, n2 - n5, n5, x);
    n5 = min(n4 - n3, n - n4 - 1);
    swapSort(n2, n - n5, n5, x);
    n5 = n2 - n1;
    sort1(x, n5, depth);
    if (i2c(n5) != 0)
        sort1(x + n5, n1 + n - n4 - 1, depth + 1);
    n5 = n4 - n3;
    sort1(x + n - n5, n5, depth);
}

void sort1Main(char *x[], int n)
{
    sort1(x, n, 0);
}

//sort2 -- faster version of multikey quicksort

void swapSort2(char **n1, char **n2, int n)
{
    while (n-- > 0)
    {
        char *temp = *n1;
        *n1++ = *n2;
        *n2++ = temp;
    }
}

#define swap2(n1, n2)  \
    {                  \
        temp = *(n1);  \
        *(n1) = *(n2); \
        *(n2) = temp;  \
    }

#define ptr_char2(i) (*(*(i) + depth))

char **midFunc(char **n1, char **n2, char **n3, int depth)
{
    int num1, num2, num3;
    if ((num1 = ptr_char2(n1)) == (num2 = ptr_char2(n2)))
        return n1;
    if ((num3 = ptr_char2(n3)) == num1 || num3 == num2)
        return n3;
    return num1 < num2 ? (num2 < num3 ? n2 : (num1 < num3 ? n3 : n1)) : (num2 > num3 ? n2 : (num1 < num3 ? n1 : n3));
}

#define mid3(n1, n2, n3) midFunc(n1, n2, n3, depth)
void insert_sort(char **n1, int n, int num)
{
    char **num1, **num2, *sum, *temp;
    for (num1 = n1 + 1; --n > 0; num1++)
    {
        for (num2 = num1; num2 > n1; num2--)
        {
            //inline strcmp: break if *(num2 - 1) <= *num2
            for (sum = *(num2 - 1) + num, temp = *num2 + num; *sum == *temp && *sum != 0; sum++, temp++)
                ;
            if (*sum <= *temp)
                break;
            swap2(num2, num2 - 1);
        }
    }
}

void sort2(char **n1, int n, int depth)
{
    int num, right, part_value;
    char **num1, **num2, **num3, **num4, **num5, **num6, **num7, *temp;
    if (n < 10)
    {
        insert_sort(n1, n, depth);
        return;
    }
    num5 = n1;
    num6 = n1 + (n / 2);
    num7 = n1 + (n - 1);
    if (n > 30)
    {
        //on big arrays, pseudomedian of 9
        num = (n / 8);
        num5 = mid3(num5, num5 + num, num5 + 2 * num);
        num6 = mid3(num6 - num, num6, num6 + num);
        num7 = mid3(num7 - 2 * num, num7 - num, num7);
    }
    num6 = mid3(num5, num6, num7);
    swap2(n1, num6);
    part_value = ptr_char2(n1);
    num1 = num2 = n1 + 1;
    num3 = num4 = n1 + n - 1;
    for (;;)
    {
        while (num2 <= num3 && (right = ptr_char2(num2) - part_value) <= 0)
        {
            if (right == 0)
            {
                swap2(num1, num2);
                num1++;
            }
            num2++;
        }
        while (num2 <= num3 && (right = ptr_char2(num3) - part_value) >= 0)
        {
            if (right == 0)
            {
                swap2(num3, num4);
                num4--;
            }
            num3--;
            if (num2 > num3)
                break;
            swap2(num2, num3);
            num2++;
            num3--;
        }
        num7 = n1 + n;
        //right = n1 + n;
        right = min(num1 - n1, num2 - num1);
        swapSort2(n1, num2 - right, right);
        right = min(num4 - num3, num7 - num4 - 1);
        swapSort2(num2, num7 - right, right);
        if ((right = num2 - num1) > 1)
            sort2(n1, right, depth);
        if (ptr_char2(n1 + right) != 0)
            sort2(n1 + right, num1 - n1 + num7 - num4 - 1, depth + 1);
        if ((right = num4 - num3) > 1)
            sort2(n1 + n - right, right, depth);
    }
}

void sotr2main(char **n1, int n)
{
    sort2(n1, n, 0);
}
//ternary search tree algorithem
typedef struct node *ptr;
typedef struct node
{
    char split_char;
    ptr id1, id2, id3;
} node;
ptr root;
//insert -- simple insertion algorithm
ptr insert1(ptr ptr1, char *sum)
{
    if (ptr1 == 0)
    {
        ptr1 = (ptr)malloc(sizeof(node));
        ptr1->split_char = *sum;
        ptr1->id1 = ptr1->id2 = ptr1->id3 = 0;
    }
    if (*sum < ptr1->split_char)
        ptr1->id1 = insert1(ptr1->id1, sum);
    else if (*sum == ptr1->split_char)
    {
        if (*sum != 0)
            ptr1->id2 = insert1(ptr1->id2, ++sum);
    }
    else
        ptr1->id3 = insert1(ptr1->id3, sum);
    return ptr1;
}

void cleanUp1(ptr ptr1)
{
    if (ptr1)
    {
        cleanUp1(ptr1->id1);
        cleanUp1(ptr1->id2);
        cleanUp1(ptr1->id3);
        free(ptr1);
    }
}

//insert 2  -- faster version of insert
#define BUFSIZE 100
ptr buffer;
int buffer_n, free_n;
void *free_arr[10000];
int store_string = 0;

void insert2(char *sum)
{
    int num;
    char *insert_str = sum;
    ptr ptr2, *ptr1;
    ptr1 = &root;
    ptr2 = *ptr1;
    while (ptr2 == *ptr1)
    {
        if ((num = *sum - ptr2->split_char) == 0)
        {
            if (*sum++ == 0)
                return;
            ptr1 = &(ptr2->id2);
        }
        else if (num < 0)
            ptr1 = &(ptr2->id1);
        else
            ptr1 = &(ptr2->id3);
    }
    for (;;)
    {
        //*ptr1 = (ptr) malloc (sizeof(node));
        if (buffer_n-- == 0)
        {
            buffer = (ptr)malloc(BUFSIZE * sizeof(node));
            free_arr[free_n++] = (void *)buffer;
            buffer_n = BUFSIZE - 1;
        }
        *ptr1 = buffer++;
        ptr2 = *ptr1;
        ptr2->split_char = *sum;
        ptr2->id1 = ptr2->id2 = ptr2->id3 = 0;
        if (*sum++ == 0)
        {
            if (store_string)
                ptr2->id2 = (ptr)insert_str;
            return;
        }
        ptr1 = &(ptr2->id2);
    }
}

void cleanUp2()
{
    int i;
    for (i = 0; i < free_n; i++)
        free(free_arr[i]);
}

//search algorithm

int search1(char *sum)
{
    ptr ptr1;
    ptr1 = root;
    while (ptr1)
    {
        if (*sum < ptr1->split_char)
            ptr1 = ptr1->id1;
        else if (*sum == ptr1->split_char)
        {
            if (*sum++ == 0)
                return 1;
            ptr1 = ptr1->id2;
        }
        else
            ptr1 = ptr1->id3;
    }
    return 0;
}

int search2(char *sum)
{
    int num, scecond;
    ptr ptr1;
    scecond = *sum;
    ptr1 = root;
    while (ptr1)
    {
        if ((num = scecond - ptr1->split_char) == 0)
        {
            if (scecond == 0)
                return 1;
            scecond = *++sum;
            ptr1 = ptr1->id2;
        }
        else if (num < 0)
            ptr1 = ptr1->id1;
        else
            ptr1 = ptr1->id3;
    }
    return 0;
}

//advanced searching: partial match, near words
int node_count;
char *search_arr[1000];
int search_top;

void primarySearch(ptr ptr1, char *sum)
{
    if (!ptr1)
        return;
    node_count++;
    if (*sum == '.' || *sum < ptr1->split_char)
        primarySearch(ptr1->id1, sum);
    if (*sum = '.' || *sum == ptr1->split_char)
    {
        if (ptr1->split_char && *sum)
            primarySearch(ptr1->id2, sum + 1);
    }
    if (*sum == 0 && ptr1->split_char == 0)
        search_arr[search_top++] = (char *)ptr1->id2;
    if (*sum == '.' || *sum > ptr1->split_char)
        primarySearch(ptr1->id3, sum);
}

void nearSearch(ptr ptr1, char *sum, int num)
{
    if (!ptr1 || num < 0)
        return;
    node_count++;
    if (num > 0 || *sum < ptr1->split_char)
        nearSearch(ptr1->id1, sum, num);
    if (ptr1->split_char == 0)
    {
        if ((int)strlen(sum) <= num)
            search_arr[search_top++] = (char *)ptr1->id2;
    }
    else
        nearSearch(ptr1->id2, *sum ? sum + 1 : sum, (*sum == ptr1->split_char) ? num : num - 1);
    if (num > 0 || *sum > ptr1->split_char)
        nearSearch(ptr1->id3, sum, num);
}

#define number_string 3
int main(int argc, char *argv[])
{
    int i;
    char *arr[number_string] = {"apple", "cat", "boy"};
    sort1Main(arr, number_string);
    printf("\n\n");
    for (i = 0; i < number_string; i++)
        printf("%s ", arr[i]);
    printf("\n\n");
}