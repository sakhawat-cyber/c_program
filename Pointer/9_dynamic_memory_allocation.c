/* Write a program in C to find the largest element using Dynamic Memory Allocation.
Test Data :
Input total number of elements(1 to 100): 5

Number 1: 5
Number 2: 7
Number 3: 2
Number 4: 9
Number 5: 8
Expected Output :

The Largest element is :  9.00  */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    float *arr;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d", &num);
    //memory is allocated for 'num' elements
    arr = (float *)calloc(num, sizeof(float));

    if (arr == NULL)
    {
        printf("No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for (i = 0; i < num; ++i)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", arr + i);
    }

    for (i = 1; i < num; ++i)
    {
        if (*arr < *(arr + i))
            *arr = *(arr + i);
    }
    printf("The largest element is: %.2f", *arr);
    return 0;
}