/*Input the number of elements to be stored in the array :5                                                     
Input 5 elements in the array :                                                                               
element - 1 : 10                                                                                              
element - 2 : 15                                                                                              
element - 3 : 20                                                                                              
element - 4 : 25                                                                                              
element - 5 : 30                                                                                              
 Input a value to search : 20                                                                                 
20 is found in the array. */

#include <stdio.h>
#include <stdlib.h>

int compare_integer(const void *x, const void *y)
{
    return (*(int *)x - *(int *)y);
}


int main()
{
    int *arrayItem;
    int findValue;
    int array[100];
    int num, i;

    printf("\nInput the number of element to be sorted in the array: ");
    scanf("%d", &num);

    printf("Input %d element in the array:\n");
    for (i = 0; i < num; i++)
    {
        printf("element - %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Input a value to search: ");
    scanf("%d", &findValue);

    arrayItem = (int *)bsearch(&findValue, array,
                               num, sizeof(int), compare_integer);

    if (arrayItem != NULL)
    {
        printf("%d is found in the array.\n\n", *arrayItem);
    }
    else
        printf("%d is not in the array.\n\n", findValue);
    return 0;
}
