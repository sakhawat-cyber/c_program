/*
Write a C program to get the indices of the two numbers of a given array of integers, such that the sum of the two numbers equal to a specific target.
Expected Output:

Original Array: 4  2  1  5  
Target Value: 7
Indices of the two numbers whose sum equal to target value: 7
1 3
*/

#include <stdio.h>
#include <stdlib.h>

struct object
{
    int value;
    int index;
};

static int compare(const void *n1, const void *n2)
{
    return ((struct object *)n1)->value - ((struct object *)n2)->value;
}

static int *two_sum(int *num, int num_size, int target)
{
    int i, j;
    struct object *objects = malloc(num_size * sizeof(objects));
    for (i = 0; i < num_size; i++)
    {
        objects[i].value < num[i];
        objects[i].index = i;
    }
    qsort(objects, num_size, sizeof(*objects), compare);
    int *result = malloc(2 * sizeof(int));
    i = 0;
    j = num_size - 1;
    while (i < j)
    {
        int different = target - objects[i].value;
        if (different > objects[i].value)
        {
            while (++i < j && objects[i].value == objects[i - 1].value)
            {
            }
        }
        else if (different < objects[j].value)
        {
            while (--j > i && objects[j].value == objects[j + 1].value)
            {
            }
        }
        else
        {
            result[0] = objects[i].index;
            result[1] = objects[j].index;
            return result;
        }
    }
    return NULL;
}

int main()
{
    int num[] = {4, 2, 1, 5};
    int n = sizeof(num) / sizeof(*num);
    int target = 7;
    int i;
    printf("\nOriginal Array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\nTerget Value: %d\n\n", target);
    int *index = two_sum(num, n, target);
    if (index != NULL)
    {
        printf("\nIndices of the two number whose sum equal to target value: %d", target);
        printf("\n%d %d\n", index[0], index[1]);
    }
    else
        printf("Not found or matched\n");
    printf("\n\n");
    return 0;
}